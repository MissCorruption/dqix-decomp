#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov001_021587c4 {
	int unknown_0_;
	int unknown_4_, unknown_8_, unknown_c_;
};

// USA: func_ov001_021587c4
extern "C" ARM int func_ov001_021587c4(struct Struct_ov001_021587c4* arg0, char* arg1) {
	int* var0 = *(int**)(arg1 + 0xa20);
	if (var0 == NULL) {
		return 0;
	}
	memcpy(arg1 + 0x58, (char*)var0 + 0x74, 0xc);
	*(int*)(arg1 + 0x58) = *(int*)(arg1 + 0x58) + arg0->unknown_4_;
	*(int*)(arg1 + 0x5c) = *(int*)(arg1 + 0x5c) + arg0->unknown_8_;
	*(int*)(arg1 + 0x60) = *(int*)(arg1 + 0x60) + arg0->unknown_c_;
	return 1;
}
