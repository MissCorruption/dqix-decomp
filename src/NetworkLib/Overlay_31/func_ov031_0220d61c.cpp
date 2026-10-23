#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern char* data_ov031_0224e53c;

struct Struct_ov031_0220d61c { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };

#define REG0220D61C(off) (*(unsigned int*)((data_ov031_0224e53c + 0x2000) + (off)))

// USA: func_ov031_0220d61c
extern "C" ARM void func_ov031_0220d61c(Struct_ov031_0220d61c* arg0, int arg1) {
	if (arg0 == NULL) {
		REG0220D61C(0x26c) = 3;
		REG0220D61C(0x270) = 0;
		REG0220D61C(0x274) = 0;
		REG0220D61C(0x278) = 0;
	} else {
		REG0220D61C(0x26c) = arg0->unknown_0_ & 3;
		if ((((4 - (arg0->unknown_4_ & 3)) & 3) + 0xc) > (unsigned int)arg0->unknown_8_) {
			REG0220D61C(0x270) = 0;
			REG0220D61C(0x274) = 0;
		} else {
			REG0220D61C(0x270) = (arg0->unknown_4_ + 3) & ~3;
			REG0220D61C(0x274) = arg0->unknown_8_ - ((4 - (arg0->unknown_4_ & 3)) & 3);
			VectorizedMemset((void*)REG0220D61C(0x270), 0, REG0220D61C(0x274));
		}
		REG0220D61C(0x278) = arg0->unknown_c_;
	}
	REG0220D61C(0x27c) = arg1;
}
