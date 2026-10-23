#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/TryApplyElemFields.h"
#include "Resource/CharacterCreationUI.h"

namespace {
struct Struct_ov023_021e7eb0 {
    unsigned char unknown_0_[0x78];
    Struct_ov023_021d9c7c unknown_78_;
    unsigned char unknown_134_[0x5d8 - 0x78 - sizeof(Struct_ov023_021d9c7c)];
    char* unknown_5d8_;
};
}

class Struct_ov023_021e7eb0_2 { public: virtual void inline_ov023_021e7eb0(); };
typedef void (Struct_ov023_021e7eb0_2::*Type_0200f3a4_4)();
struct Struct_ov023_021fd7e4 { Type_0200f3a4_4 unknown_0_[3]; };
#if defined(jpn)
#define data_ov023_021fd7e4 data_ov023_021fca68
#endif
extern const Struct_ov023_021fd7e4 data_ov023_021fd7e4;

extern "C" void func_02046380(void*);
extern "C" int func_020421a0(void);

// USA: func_ov023_021e7eb0
// JPN: func_ov023_021e8094
extern "C" ARM void func_ov023_021e7eb0(Struct_ov023_021e7eb0_2 *arg0) {
	Struct_ov023_021e7eb0* var0 = ((Struct_ov023_021e7eb0*)(arg0));
	Struct_ov023_021fd7e4 var1 = data_ov023_021fd7e4;
	int var2 = func_020421a0();
	for (unsigned char var3 = 0; var3 < 3; var3++) {
		func_02046380((void*)var2);
#if defined(jpn)
		memset(var0->unknown_5d8_, 0, 0x800);
#else
		memset(var0->unknown_5d8_, 0, 0x960);
#endif
		(arg0->*var1.unknown_0_[var3])();
		func_0205d5d0(((Struct_0205d5d0*)(&var0->unknown_78_)), var3, ((int)(var0->unknown_5d8_)), 1
#if !defined(jpn)
			, 0
#endif
		);
	}
}

#if defined(jpn)
#undef data_ov023_021fd7e4
#endif
