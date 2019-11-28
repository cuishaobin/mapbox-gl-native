#include <mbgl/util/mbgl-coreConfig.h>
#if mbgl_core_include_circlelayer

#include <mbgl/programs/circle_program.hpp>

namespace mbgl {

static_assert(sizeof(CircleLayoutVertex) == 4, "expected CircleLayoutVertex size");

} // namespace mbgl

#endif
