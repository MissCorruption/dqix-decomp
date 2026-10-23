#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov027_021e3424 {
	unsigned char unknown_0_[4];
	void* unknown_4_;
};

extern Struct_ov027_021e3424 data_ov027_021e3424;

// USA: func_ov027_021dd5d4
extern "C" ARM void func_ov027_021dd5d4(void* arg0) {
	data_ov027_021e3424.unknown_4_ = arg0;
	VectorizedMemset(arg0, 0, 0x21c);
}
