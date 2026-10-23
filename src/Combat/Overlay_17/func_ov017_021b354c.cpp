#include <globaldefs.h>

struct Struct_ov017_021b354c { unsigned char unknown_0_[0x56e]; unsigned char unknown_56e_; };
#if defined(jpn)
#define SUB_POINTER_OFFSET 0x144
#else
#define SUB_POINTER_OFFSET 0x150
#endif
struct Struct_ov017_021b3444 { unsigned char unknown_0_[SUB_POINTER_OFFSET]; Struct_ov017_021b354c* unknown_150_; };

// USA: func_ov017_021b354c
extern "C" ARM unsigned char func_ov017_021b354c(Struct_ov017_021b3444* arg0) {
	Struct_ov017_021b354c* var0 = arg0->unknown_150_;
	if (var0) return var0->unknown_56e_;
	return 0;
}
