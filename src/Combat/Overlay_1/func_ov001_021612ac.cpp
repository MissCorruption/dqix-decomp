#include <globaldefs.h>

struct Struct_ov001_021612ac { unsigned char unknown_0_[0x56b]; unsigned char unknown_56b_0_ : 4; };

// USA: func_ov001_021612ac
extern "C" ARM int func_ov001_021612ac(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_021612ac_336 = 0x144 };
#else
    enum { Enum_ov001_021612ac_336 = 0x150 };
#endif
	struct Struct_ov001_021612ac* var0 = *(struct Struct_ov001_021612ac**)((char*)arg0 + Enum_ov001_021612ac_336);
	if (!var0) return 0;
	return var0->unknown_56b_0_;
}
