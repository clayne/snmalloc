#pragma once

#include "snmalloc/stl/common.h"

#if SNMALLOC_USE_SELF_VENDORED_STL
#  include "snmalloc/stl/gnu/atomic.h"
#else
#  include "snmalloc/stl/cxx/atomic.h"
#endif