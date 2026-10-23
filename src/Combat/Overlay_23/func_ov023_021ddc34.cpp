#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov023_021ff9e0_9 {
	#if defined(jpn)
	unsigned int unknown_0_[5];
#else
	unsigned int unknown1_0_;
#endif
	void* unknown_4_;
};

extern struct Struct_ov023_021ff9e0_9 data_ov023_021ff9e0;

// USA: func_ov023_021ddc34
extern "C" ARM int func_ov023_021ddc34(void* arg0, short arg1, short arg2, short arg3, short arg4) {
	int var0 = 0;
	if (data_ov023_021ff9e0.unknown_4_) {
		if (arg0) {
			memset(data_ov023_021ff9e0.unknown_4_, 0, 0x1800);
			*(void**)((char*)arg0 + 0x8) = data_ov023_021ff9e0.unknown_4_;
			*(short*)((char*)arg0 + 0xac) = arg1;
			*(short*)((char*)arg0 + 0xae) = arg2;
			*(short*)((char*)arg0 + 0xa8) = arg3;
			*(short*)((char*)arg0 + 0xaa) = arg4;
			var0 = 1;
		}
	}
	return var0;
}
