#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x11c
#else
#define REGION_FIELD 0x33c
#endif

struct Struct_ov017_021bdbd8 { char unknown_0_[REGION_FIELD]; int unknown_33c_; };

// USA: func_ov017_021bdbd8
extern "C" ARM int func_ov017_021bdbd8(unsigned char* arg0) {
	Struct_ov017_021bdbd8* var0 = (Struct_ov017_021bdbd8*)(arg0 + 0x4000);
	return var0->unknown_33c_;
}
