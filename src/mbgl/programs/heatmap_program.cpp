#include <mbgl/util/mbgl-coreConfig.h>
#if mbgl_core_include_heatmaplayer

#include <mbgl/programs/heatmap_program.hpp>

namespace mbgl {

static_assert(sizeof(HeatmapLayoutVertex) == 4, "expected HeatmapLayoutVertex size");

} // namespace mbgl

#endif
