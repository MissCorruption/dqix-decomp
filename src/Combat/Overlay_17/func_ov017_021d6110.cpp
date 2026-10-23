#include <globaldefs.h>

union Struct_ov017_021d6110 { int unknown_0_; float unknown1_0_; };
struct Struct_ov017_021d6110_2 { int unknown_0_; Struct_ov017_021d6110 unknown_4_; };

// USA: func_ov017_021d6110
extern "C" ARM float func_ov017_021d6110(Struct_ov017_021d6110_2 *arg0) {
	if (arg0->unknown_0_ != 0) {
		return arg0->unknown_4_.unknown1_0_;
	}
	return (float)arg0->unknown_4_.unknown_0_;
}
