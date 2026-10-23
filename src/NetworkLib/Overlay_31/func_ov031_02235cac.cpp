#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02290cfc { unsigned char* unknown_0_; };
extern struct Struct_ov031_02290cfc data_ov031_02290cfc;

// USA: func_ov031_02235cac
extern "C" ARM void func_ov031_02235cac(void* arg0) {
	VectorizedInvertedMemcpy(arg0, data_ov031_02290cfc.unknown_0_ + 0x440, 0x20);
	data_ov031_02290cfc.unknown_0_[0x4e7] = 0;
}
