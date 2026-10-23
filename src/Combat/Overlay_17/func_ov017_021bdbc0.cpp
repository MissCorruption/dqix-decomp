#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x114
#else
#define REGION_FIELD 0x334
#endif

struct Struct_ov017_021bdbc0 { char unknown_0_[REGION_FIELD]; int unknown_334_; };

// USA: func_ov017_021bdbc0
extern "C" ARM int func_ov017_021bdbc0(unsigned char* arg0) {
	Struct_ov017_021bdbc0* var0 = (Struct_ov017_021bdbc0*)(arg0 + 0x4000);
	return var0->unknown_334_;
}
