#include <globaldefs.h>

union Struct_ov017_021d60f4 { int unknown_0_; float unknown1_0_; };
struct Struct_ov001_0215f344 { int unknown_0_; Struct_ov017_021d60f4 unknown_4_; };

// USA: func_ov017_021d60f4
extern "C" ARM int func_ov017_021d60f4(Struct_ov001_0215f344 *arg0) {
	if (arg0->unknown_0_ != 1) {
		return arg0->unknown_4_.unknown_0_;
	}
	return (int)arg0->unknown_4_.unknown1_0_;
}
