#include <globaldefs.h>

struct Struct_ov031_02223268_2 { int unknown_0_, unknown_4_; };
struct Struct_ov031_022269d8 { int unknown_0_, unknown_4_; Struct_ov031_02223268_2* unknown_8_; };

// USA: func_ov031_0223baa0
extern "C" ARM Struct_ov031_02223268_2* func_ov031_0223baa0(Struct_ov031_022269d8* arg0, int arg1) {
	return &arg0->unknown_8_[arg1];
}
