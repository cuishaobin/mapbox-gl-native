#include <mbgl/util/mbgl-coreConfig.h>
#if mbgl_core_include_heatmaplayer

#include <mbgl/programs/heatmap_texture_program.hpp>

namespace mbgl {

static_assert(sizeof(HeatmapTextureLayoutVertex) == 4, "expected HeatmapTextureLayoutVertex size");

} // namespace mbgl

#endif
