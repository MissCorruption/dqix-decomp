#include <globaldefs.h>

struct Struct_ov017_021bd35c { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_, unknown_8_; };
struct Struct_ov017_021bd35c_2 { unsigned char unknown_0_[
#if defined(jpn)
0x14c
#else
0x150
#endif
]; unsigned short unknown_150_, unknown_152_, unknown_154_, unknown_156_, unknown_158_; };

// USA: func_ov017_021bd35c
extern "C" ARM void func_ov017_021bd35c(Struct_ov017_021bd35c_2* arg0, Struct_ov017_021bd35c* arg1) {
	arg0->unknown_150_ = arg1->unknown_0_;
	arg0->unknown_152_ = arg1->unknown_2_;
	arg0->unknown_154_ = arg1->unknown_4_;
	arg0->unknown_156_ = arg1->unknown_6_;
	arg0->unknown_158_ = arg1->unknown_8_;
}
