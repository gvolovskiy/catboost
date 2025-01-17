#pragma once

#include "config-linux-x86_64.h"

#undef HAVE_XMMINTRIN_H
#undef HAVE_EMMINTRIN_H
#undef HAVE_IMMINTRIN_H

#undef HAVE_ATTRIBUTE_TARGET_AVX
#undef HAVE_ATTRIBUTE_TARGET_AVX2
#undef HAVE_ATTRIBUTE_TARGET_AVX512F
#undef HAVE_ATTRIBUTE_TARGET_AVX512_SKX
#undef HAVE_ATTRIBUTE_TARGET_AVX2_WITH_INTRINSICS
#undef HAVE_ATTRIBUTE_TARGET_AVX512F_WITH_INTRINSICS
#undef HAVE_ATTRIBUTE_TARGET_AVX512_SKX_WITH_INTRINSICS

#undef HAVE_LDOUBLE_INTEL_EXTENDED_16_BYTES_LE 
#define HAVE_LDOUBLE_IEEE_QUAD_LE 1
