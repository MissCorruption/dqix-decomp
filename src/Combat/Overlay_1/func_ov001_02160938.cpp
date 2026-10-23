#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov017_021917f0(int arg0, int arg1);

struct Struct_ov001_02160938 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
struct Struct_ov001_02165880_43 { char unknown_0_[4]; Struct_ov001_02160938* unknown_4_; };
extern struct Struct_ov001_02165880_43 data_ov001_02165880;

// USA: func_ov001_02160938
extern "C" ARM int func_ov001_02160938(void* arg0) {
	int var0 = func_ov017_021d60f4(arg0);
	int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
	if (data_ov001_02165880.unknown_4_[var0].unknown_0_ != 4 && data_ov001_02165880.unknown_4_[var0].unknown_0_ != 0 && data_ov001_02165880.unknown_4_[var0].unknown_0_ != 5) {
		return 0;
	}
	if (var1 != 0) {
		func_ov017_021917f0(data_ov001_02165880.unknown_4_[var0].unknown_4_, 1);
	} else {
		func_ov017_021917f0(data_ov001_02165880.unknown_4_[var0].unknown_4_, 0);
	}
	return 1;
}
