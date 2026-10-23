#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov003_0215fce8 { char unknown_0_[0x2cb]; unsigned char unknown_4a3_; };
#else
struct Struct_ov003_0215fce8 { char unknown_0_[0x4a3]; unsigned char unknown_4a3_; };
#endif

extern "C" void func_ov003_0216052c(Struct_ov003_0215fce8* arg0);
extern "C" void func_ov003_02160678(Struct_ov003_0215fce8* arg0);

// USA: func_ov003_021604d0
extern "C" ARM void func_ov003_021604d0(Struct_ov003_0215fce8* arg0) {
	if (arg0->unknown_4a3_ != 0) {
		func_ov003_0216052c(arg0);
		func_ov003_02160678(arg0);
	}
}
