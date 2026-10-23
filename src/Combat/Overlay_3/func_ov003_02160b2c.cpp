#include <globaldefs.h>

extern "C" int func_020421a0();

#if defined(jpn)
struct Struct_ov003_0215fce8_2 { char unknown_0_[0x28c]; unsigned int unknown_464_; };
#else
struct Struct_ov003_0215fce8_2 { char unknown_0_[0x464]; unsigned int unknown_464_; };
#endif

// USA: func_ov003_02160b2c
extern "C" ARM void func_ov003_02160b2c(Struct_ov003_0215fce8_2* arg0) {
	if (!(arg0->unknown_464_ & 0x20000)) {
#if defined(jpn)
		*(unsigned char*)(func_020421a0() + 0x1000 + 0x7de) = 0;
#else
		*(unsigned char*)(func_020421a0() + 0x1000 + 0x9ae) = 0;
#endif
	}
}
