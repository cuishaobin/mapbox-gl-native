#include <mbgl/util/mbgl-coreConfig.h>
#if mbgl_core_include_hillshadelayer

#include <mbgl/programs/hillshade_program.hpp>

namespace mbgl {

static_assert(sizeof(HillshadeLayoutVertex) == 8, "expected HillshadeLayoutVertex size");

} // namespace mbgl

#endif
