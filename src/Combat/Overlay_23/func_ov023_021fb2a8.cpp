#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021fb2a8_74 = 0x4e };
#else
enum { Enum_ov023_021fb2a8_74 = 0x4a };
#endif

struct Struct_ov023_021fb2a8 { char unknown_0_[Enum_ov023_021fb2a8_74]; unsigned char unknown_4a_; };

// USA: func_ov023_021fb2a8
extern "C" ARM void func_ov023_021fb2a8(struct Struct_ov023_021fb2a8 *arg0, unsigned char arg1) {
	arg0->unknown_4a_ = arg1;
}
