#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0215caa4_1012 = 0x40c };
#else
enum { Enum_ov003_0215caa4_1012 = 0x3f4 };
#endif
struct Struct_ov003_0215caa4 { char unknown_0_[Enum_ov003_0215caa4_1012]; unsigned char unknown_3f4_; };

// USA: func_ov003_0215caa4
extern "C" ARM void func_ov003_0215caa4(struct Struct_ov003_0215caa4* arg0) {
	arg0->unknown_3f4_ = 1;
}
