#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021b8d1c(void*);
struct Struct_0206528c;
extern "C" struct Struct_0206528c_2* func_0206528c(struct Struct_0206528c* arg0, int arg1);
extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203cff4(void* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_0219593c {
	char unknown_0_[0x114];
	void* unknown_114_;
	char unknown_118_[0x124 - 0x118];
	int unknown_124_;
};

struct Struct_ov003_021638e4 { unsigned char unknown_0_[0x24]; void* unknown_24_; };
extern "C" void func_ov017_021b6b8c(Struct_ov003_021638e4* arg0);

// USA: func_ov017_0219593c
extern "C" ARM void func_ov017_0219593c(void) {
#if defined(jpn)
 enum {Enum_ov017_0219593c_1808=0x500, Enum_ov017_0219593c_1788=0x4ec, Enum_ov017_0219593c_2816=0x8e0};
#else
 enum {Enum_ov017_0219593c_1808=0x710, Enum_ov017_0219593c_1788=0x6fc, Enum_ov017_0219593c_2816=0xb00};
#endif
	char* var0 = (char*)(int)GetGameResources();
	struct Struct_ov017_0219593c* var1 = *(struct Struct_ov017_0219593c**)(var0 + 0x3000 + Enum_ov017_0219593c_1808);
	unsigned char* var2;

	void* var3 = func_0203cff4(func_0203cf4c());
	func_ov017_021b8d1c(var1);
	var1->unknown_114_ = func_0206528c((struct Struct_0206528c*)var3, 0x63);
	var1->unknown_124_ = 0xd7;
	if (var1->unknown_114_ != 0) {
		func_020469b4(*(struct Struct_0201bdac_2**)(var0 + 0x3000 + Enum_ov017_0219593c_1788), (struct Struct_0201bdac*)var1);
	}
	var2 = *(unsigned char**)(var0 + 0x3000 + Enum_ov017_0219593c_2816);
	if (var2[2] == 0) return;
	func_ov017_021b6b8c((Struct_ov003_021638e4*)var2);
}
