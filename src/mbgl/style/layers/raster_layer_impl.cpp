#include <mbgl/util/mbgl-coreConfig.h>
#if mbgl_core_include_rasterlayer

#include <mbgl/style/layers/raster_layer_impl.hpp>

namespace mbgl {
namespace style {

bool RasterLayer::Impl::hasLayoutDifference(const Layer::Impl&) const {
    return false;
}

} // namespace style
} // namespace mbgl

#endif
