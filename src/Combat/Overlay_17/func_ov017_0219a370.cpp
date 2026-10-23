#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov017_0219a370 { char unknown_0_[0xe58]; int unknown_78_; };
#else
struct Struct_ov017_0219a370 { char unknown_0_[0x78]; int unknown_78_; };
#endif

// USA: func_ov017_0219a370
extern "C" ARM int func_ov017_0219a370(unsigned char* arg0) {
#if defined(jpn)
	Struct_ov017_0219a370* var0 = (Struct_ov017_0219a370*)(arg0 + 0x3000);
#else
	Struct_ov017_0219a370* var0 = (Struct_ov017_0219a370*)(arg0 + 0x4000);
#endif
	return var0->unknown_78_ >= 4;
}
