#include "android_thread_pool.hpp"
#include <mbgl/util/platform.hpp>
#include <cassert>

namespace mbgl {
namespace android {

AndroidThreadPool::AndroidThreadPool(size_t count)
        : mbgl::ThreadPool(count, {
        [] {
            JNIEnv* env = nullptr;
            attach_jni_thread(theJVM, &env, platform::getCurrentThreadName());
            return env;
        },
        [](void* data) {
            assert(data);
            auto env = static_cast<JNIEnv* >(data);
            detach_jni_thread(theJVM, &env, true);
        }
}) {}

} // namespace android
} // namespace mbgl
