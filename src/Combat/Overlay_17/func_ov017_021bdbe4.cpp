#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x120
#else
#define REGION_FIELD 0x340
#endif

struct Struct_ov017_021bdbe4 { char unknown_0_[REGION_FIELD]; int unknown_340_; };

// USA: func_ov017_021bdbe4
extern "C" ARM int func_ov017_021bdbe4(unsigned char* arg0) {
	Struct_ov017_021bdbe4* var0 = (Struct_ov017_021bdbe4*)(arg0 + 0x4000);
	return var0->unknown_340_;
}
