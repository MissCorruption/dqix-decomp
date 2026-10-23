#include <globaldefs.h>

struct Struct_ov017_021d83f0_3 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d83f0_3 data_ov017_021d83f0;
#if defined(jpn)
#define func_ov011_02184740 func_ov011_02185840
#endif
extern "C" void func_ov011_02184740(void*);

// USA: func_ov017_021b2328
extern "C" ARM void func_ov017_021b2328(void*) {
	if (data_ov017_021d83f0.unknown_4_ != 0) {
		func_ov011_02184740((void*)data_ov017_021d83f0.unknown_4_);
	}
}
