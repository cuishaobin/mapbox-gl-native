#pragma once
#include <mbgl/util/mbgl-coreConfig.h>
#if mbgl_core_include_rasterlayer

#include <mbgl/style/layer_impl.hpp>
#include <mbgl/style/layers/raster_layer.hpp>
#include <mbgl/style/layers/raster_layer_properties.hpp>

namespace mbgl {
namespace style {

class RasterLayer::Impl : public Layer::Impl {
public:
    using Layer::Impl::Impl;

    bool hasLayoutDifference(const Layer::Impl&) const override;
    void stringifyLayout(rapidjson::Writer<rapidjson::StringBuffer>&) const override;

    RasterPaintProperties::Transitionable paint;
};

} // namespace style
} // namespace mbgl

#endif
