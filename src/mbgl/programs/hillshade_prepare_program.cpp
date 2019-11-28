#include <mbgl/util/mbgl-coreConfig.h>
#if mbgl_core_include_hillshadelayer

#include <mbgl/programs/hillshade_prepare_program.hpp>

namespace mbgl {

static_assert(sizeof(HillshadePrepareLayoutVertex) == 8, "expected HillshadeLayoutVertex size");

} // namespace mbgl

#endif
