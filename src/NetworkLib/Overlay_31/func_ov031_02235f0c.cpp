#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02290cfc_2 { unsigned char* unknown_0_; };
extern struct Struct_ov031_02290cfc_2 data_ov031_02290cfc;

// USA: func_ov031_02235f0c
extern "C" ARM void func_ov031_02235f0c(void* arg0) {
	VectorizedInvertedMemcpy(data_ov031_02290cfc.unknown_0_ + 0x440, arg0, 0x20);
}
