#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov017_021c9d08_3764 = 0xe30 };
#else
enum { Enum_ov017_021c9d08_3764 = 0xeb4 };
#endif

extern "C" void* func_ov017_021b8468(void*);

struct Struct_ov017_021c9d08 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
};

struct Struct_ov017_021c9d08_2 {
    unsigned char unknown_0_[Enum_ov017_021c9d08_3764];
    unsigned char unknown_eb4_;
};

// USA: func_ov017_021c9d08
extern "C" ARM void func_ov017_021c9d08(void* arg0, void* arg1, void* arg2, void* arg3) {
	Struct_ov017_021c9d08_2* var0 = (Struct_ov017_021c9d08_2*)func_ov017_021b8468(((GameResources*)arg3)->unknown_ptr_3718);
	if (var0) {
		var0->unknown_eb4_ = ((Struct_ov017_021c9d08*)arg1)->unknown_4_;
	}
}
