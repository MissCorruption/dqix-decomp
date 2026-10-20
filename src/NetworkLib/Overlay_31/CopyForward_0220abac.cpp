#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov031_0220abac
ARM void CopyForward_0220abac(void* dst, const void* src, unsigned int length) {
	VectorizedInvertedMemcpy(src, dst, length);
}
