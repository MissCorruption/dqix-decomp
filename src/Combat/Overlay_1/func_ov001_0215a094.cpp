#include <globaldefs.h>

struct Struct_ov001_02164624;
extern "C" int func_ov001_02164624(Struct_ov001_02164624* arg0, int arg1);
extern Struct_ov001_02164624* data_ov001_02165884;

struct Struct_ov001_0215a094 { int unknown_0_; char unknown_4_[0x38]; int unknown_3c_; };

// USA: func_ov001_0215a094
extern "C" ARM int func_ov001_0215a094(char* arg0) {
	Struct_ov001_0215a094* var0 = *(Struct_ov001_0215a094**)(arg0 + 0x18);
	if (var0 != 0) {
		if (var0->unknown_3c_ == 0 && var0->unknown_0_ == 0xc) {
			if (data_ov001_02165884 != 0) {
				int var1 = func_ov001_02164624(data_ov001_02165884, *(int*)(arg0 + 0x70));
				if (var1 != 0) {
					*(void**)(arg0 + 0x1c) = 0;
					*(void**)(arg0 + 0x18) = 0;
				}
			}
		}
	}
	return (*(void**)(arg0 + 0x8) == 0 && *(void**)(arg0 + 0x10) == 0 &&
	        *(void**)(arg0 + 0x18) == 0 && *(void**)(arg0 + 0x20) == 0 &&
	        *(void**)(arg0 + 0x28) == 0 && *(void**)(arg0 + 0x30) == 0 &&
	        *(void**)(arg0 + 0x38) == 0 && *(void**)(arg0 + 0x40) == 0) ? 1 : 0;
}
