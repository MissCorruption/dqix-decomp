#include <globaldefs.h>

struct Struct_ov017_021d83f0_4 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d83f0_4 data_ov017_021d83f0;
extern "C" void func_ov011_02184750(void);

// USA: func_ov017_021b2348
extern "C" ARM void func_ov017_021b2348(void*) {
	if (data_ov017_021d83f0.unknown_4_ != 0) {
		func_ov011_02184750();
	}
}
