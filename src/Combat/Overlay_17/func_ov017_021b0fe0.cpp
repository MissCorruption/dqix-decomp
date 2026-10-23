#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov017_021b0fe0_1788 = 0x4ec, Enum_ov017_021b0fe0_1816 = 0x508, Enum_ov017_021b0fe0_1096 = 0x488 };
#else
enum { Enum_ov017_021b0fe0_1788 = 0x6fc, Enum_ov017_021b0fe0_1816 = 0x718, Enum_ov017_021b0fe0_1096 = 0x448 };
#endif

extern "C" void func_ov017_021c45b4(int arg0);
extern "C" void func_ov017_021cc97c(int arg0);
extern "C" void func_ov017_021cee78(int arg0, unsigned char arg1);
extern "C" void func_ov017_021ce32c(int arg0);

extern "C" void func_ov017_021c41fc(int arg0, int arg1);
extern "C" void func_ov017_021c4418(int arg0, int arg1);
extern "C" void func_ov017_021c3fb4(int arg0, int arg1);
extern "C" void func_ov017_021ce704(int arg0);
extern "C" void func_ov017_021cf078(int arg0, unsigned char arg1, int arg2);
extern "C" void func_ov017_021cc730(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021cca5c(int arg0, int arg1);
extern "C" void func_ov017_021ccb58(int arg0, int arg1);
extern "C" void func_ov017_021ccc34(int arg0);
extern "C" void func_ov017_021ccdac(int arg0);
extern "C" void func_ov017_021ccfd0(int arg0);
extern "C" void func_ov017_021cff8c(int arg0, int arg1);
extern "C" void func_ov017_021d0e00(int arg0);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021d25f4(int arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void func_ov000_0217616c(void* arg0);

extern "C" void* func_ov000_02160f08(void* arg0);

struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150* arg0, int arg1);

struct Struct_02038598_5;
extern "C" int func_02046b60(struct Struct_02038598_5* arg0, int arg1);

// USA: func_ov017_021b0fe0
extern "C" ARM void func_ov017_021b0fe0(int arg0) {
	func_ov017_021c41fc(arg0, -1);
	func_ov017_021c45b4(arg0);
	func_ov017_021c4418(arg0, -1);
	func_ov017_021c3fb4(arg0, 0);
	func_ov017_021ce704(arg0);

	for (int var0 = 0; var0 < 0xd; var0++) {
		func_ov017_021cf078(arg0, (unsigned char)var0, 0);
	}

	func_ov017_021cc730(arg0, 1, 1, 1);
	func_ov017_021cc97c(arg0);
	func_ov017_021cca5c(arg0, 0);
	func_ov017_021cca5c(arg0, 1);
	func_ov017_021ccb58(arg0, 1);
	func_ov017_021ccb58(arg0, 4);
	func_ov017_021ccb58(arg0, 7);
	func_ov017_021ccb58(arg0, 0xa);
	func_ov017_021ccc34(arg0);
	func_ov017_021ccdac(arg0);
	func_ov017_021ccfd0(arg0);
	func_ov017_021cff8c(arg0, 1);
	func_ov017_021ce32c(arg0);
	func_ov017_021cee78(arg0, 0);
	func_ov017_021d0e00(arg0);
	func_ov017_021c9e00(arg0, 1, 0, 1);
	func_ov017_021d25f4(arg0 & 0xff);

	if (!func_02086ef0((Struct_02048150*)func_02010828(GameState::GetInstance()), arg0)) {
		return;
	}

	int var1 = ((int)GetGameResources());
	struct Struct_02038598_5* var2 = *(struct Struct_02038598_5**)((char*)var1 + 0x3000 + Enum_ov017_021b0fe0_1788);
	if (!func_02046b60(var2, 0xa)) {
		return;
	}

	void* var3 = *(void**)((char*)var1 + 0x3000 + Enum_ov017_021b0fe0_1816);
	void* var4 = func_ov017_021b8468(var3);
	void* var5 = func_ov000_02160f08(var4);

	int var6 = (arg0 >= 0 && arg0 <= 3) ? 1 : 0;

	if (var6) {
		for (int var7 = 0; var7 < 4; var7++) {
			int var8 = var7 * Enum_ov017_021b0fe0_1096;
			int var9 = *(int*)((char*)var5 + var8 + 0x9a4);
			if (arg0 == var9) {
				var5 = (char*)var5 + 0x958 + var8;
				goto lookupDone;
			}
		}
	}
	var5 = 0;
lookupDone:
	func_ov000_0217616c(var5);
}
