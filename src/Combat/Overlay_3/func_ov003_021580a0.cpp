#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021580a0_512 = 0x118 };
#else
enum { Enum_ov003_021580a0_512 = 0x200 };
#endif
#include "std_library_functions.h"

struct Struct_020a1180;
extern "C" void func_020a1380(struct Struct_020a1180* arg0);

struct Struct_ov003_021575dc {
	char unknown_0_[4];
	void* unknown_4_;      // 0x4
	char unknown_8_[4];
	char unknown_c_[0x38]; // 0xc
	char unknown_44_[Enum_ov003_021580a0_512];
};

// USA: func_ov003_021580a0
extern "C" ARM void func_ov003_021580a0(struct Struct_ov003_021575dc* arg0) {
	func_020a1380((struct Struct_020a1180*)arg0);
	memset(arg0->unknown_c_, 0, sizeof(arg0->unknown_c_));
	memset(arg0->unknown_44_, 0, sizeof(arg0->unknown_44_));
	arg0->unknown_4_ = arg0->unknown_44_;
}
