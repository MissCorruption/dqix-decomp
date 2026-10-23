#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov003_02160e34_792 = 0x200 };
enum { Enum_ov003_02160e34_1124 = 0x28c };
enum { Enum_ov003_02160e34_796 = 0x204 };
enum { Enum_ov003_02160e34_1192 = 0x2d0 };
enum { Enum_ov003_02160e34_1128 = 0x290 };
#else
enum { Enum_ov003_02160e34_792 = 0x318 };
enum { Enum_ov003_02160e34_1124 = 0x464 };
enum { Enum_ov003_02160e34_796 = 0x31c };
enum { Enum_ov003_02160e34_1192 = 0x4a8 };
enum { Enum_ov003_02160e34_1128 = 0x468 };
#endif

extern "C" void* func_020d6c00(void);
struct GameResources;
void SetSubBrightness(GameResources*, int, int);
int IsSubBrightnessTransitionActive(GameResources*);
extern "C" void func_ov003_02167370(void* arg0);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020dc2d0(int);

struct Struct_ov003_02160e34 {
	char unknown_0_[Enum_ov003_02160e34_792];
	void* unknown_318_;
	char unknown_31c_[Enum_ov003_02160e34_1124 - Enum_ov003_02160e34_796];
	int unknown_464_;
	char unknown_468_[Enum_ov003_02160e34_1192 - Enum_ov003_02160e34_1128];
	unsigned char unknown_4a8_;
};

// USA: func_ov003_02160e34
extern "C" ARM int func_ov003_02160e34(struct Struct_ov003_02160e34* arg0) {
	int var0 = 0;
	void* var1 = func_020d6c00();
	GameResources* var2 = GetGameResources();
	unsigned char var3 = arg0->unknown_4a8_;

	if (var3 == 0) {
		SetSubBrightness(var2, -16, 8);
		arg0->unknown_4a8_ = arg0->unknown_4a8_ + 1;
		goto end;
	}
	if (var3 != 1) {
		goto end;
	}
	if (IsSubBrightnessTransitionActive(var2) != 0) {
		goto end;
	}

	func_ov003_02167370(arg0->unknown_318_);
	arg0->unknown_4a8_ = 0;
	var0 = 1;
	func_020466f4((struct Struct_02038598_4*)var1, 0x41);
	func_020dc2d0(0);
	arg0->unknown_464_ &= ~0x800;
end:
	return var0;
}
