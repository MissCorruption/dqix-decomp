#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov017_021a4e70 { char unknown_0_[0x34]; signed char unknown_54_; };
#else
struct Struct_ov017_021a4e70 { char unknown_0_[0x54]; signed char unknown_54_; };
#endif

// USA: func_ov017_021a4e70
extern "C" ARM int func_ov017_021a4e70(unsigned char* arg0) {
#if defined(jpn)
	Struct_ov017_021a4e70* var0 = (Struct_ov017_021a4e70*)(arg0 + 0x4100);
#else
	Struct_ov017_021a4e70* var0 = (Struct_ov017_021a4e70*)(arg0 + 0x4300);
#endif
	return var0->unknown_54_ <= 0;
}
