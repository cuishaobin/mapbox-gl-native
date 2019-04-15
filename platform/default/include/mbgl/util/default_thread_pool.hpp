#pragma once

#include <mbgl/actor/scheduler.hpp>

#include <condition_variable>
#include <mutex>
#include <queue>
#include <thread>
#include <map>
#include <cassert>

namespace mbgl {

struct ThreadLifecycle {
    ThreadLifecycle() = default;
    ThreadLifecycle(std::function<void*()> onThreadCreated_,
                    std::function<void(void*)> onThreadDestroyed_) :
            onThreadCreatedFn(onThreadCreated_),
            onThreadDestroyedFn(onThreadDestroyed_) {}

    void onThreadCreated(std::size_t threadIndex_) const {
        void* threadData = onThreadCreatedFn();
        privateData.emplace(std::make_pair(threadIndex_, threadData));
    }

    void onThreadDestroyed(std::size_t threadIndex_) const {
        auto threadDataPair = privateData.find(threadIndex_);
        assert(threadDataPair != privateData.end());
        void* threadData = threadDataPair->second;
        onThreadDestroyedFn(threadData);
    }

private:
    std::function<void*()> onThreadCreatedFn = [] { return nullptr; };
    std::function<void(void*)> onThreadDestroyedFn = [](void*) {};
    mutable std::map<std::size_t, void*> privateData;
};

class ThreadPool : public Scheduler {
public:
    explicit ThreadPool(std::size_t count, ThreadLifecycle _lifecycle = ThreadLifecycle());
    ~ThreadPool() override;

    void schedule(std::weak_ptr<Mailbox>) override;

private:
    ThreadLifecycle lifecycle;
    std::vector<std::thread> threads;
    std::queue<std::weak_ptr<Mailbox>> queue;
    std::mutex mutex;
    std::condition_variable cv;
    bool terminate { false };
};

} // namespace mbgl
