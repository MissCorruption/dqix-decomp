#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov017_02195748 { char unknown_0_[0x16c]; unsigned char* unknown_41c_; };
#else
struct Struct_ov017_02195748 { char unknown_0_[0x41c]; unsigned char* unknown_41c_; };
#endif

// USA: func_ov017_02195748
extern "C" ARM void func_ov017_02195748(unsigned char* arg0) {
	Struct_ov017_02195748* var0 = (Struct_ov017_02195748*)(arg0 + 0x4000);
	unsigned char* var1 = var0->unknown_41c_;
	var1[0] = 0;
	var1[1] = 0;
}
