#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov005_021583fc { char unknown_0_[0x144]; void* unknown_150_; };
#else
struct Struct_ov005_021583fc { char unknown_0_[0x150]; void* unknown_150_; };
#endif

// USA: func_ov005_021583fc
extern "C" ARM void func_ov005_021583fc(Struct_ov005_021583fc* arg0, char arg1) {
	char* var0 = (char*)arg0->unknown_150_;
	if (var0) {
		var0[0x56e] = arg1;
	}
}
