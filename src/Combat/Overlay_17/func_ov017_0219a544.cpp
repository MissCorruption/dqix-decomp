#if defined(jpn)
enum { Enum_ov017_0219a544_16516 = 0x3e64, Enum_ov017_0219a544_0 = 10 };
#else
enum { Enum_ov017_0219a544_16516 = 0x4084, Enum_ov017_0219a544_0 = 0 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02041f70(char* arg0, int arg1, int arg2);
extern "C" int func_02041a28(char* arg0, int arg1);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02039730(void* arg0, int arg1);
extern "C" int func_02042084(char* arg0, char* arg1, int arg2, int arg3);

struct Struct_ov017_021d6470 { int unknown_0_[5]; };
extern struct Struct_ov017_021d6470 data_ov017_021d6470;
extern int data_ov017_021d6460[4];

// USA: func_ov017_0219a544
extern "C" ARM void func_ov017_0219a544(unsigned char* arg0, char* arg1, int arg2, int arg3) {
	if (!arg1) return;
	if (arg2 == 3 && arg3 > 0) {
		func_02041f70(arg1, 3, 2);
	}
	int var0 = arg3;
	if (arg2 == 3 && arg3 <= 0) {
		struct Struct_ov017_021d6470 var1 = data_ov017_021d6470;
		GameObject* var2;
		int var3 = 0;
		GameState* var4 = GameState::GetInstance();
		var2 = var4->GetProtagonist();
		while (((volatile int*)var1.unknown_0_)[var3] != 7) {
			var0 = (signed char)func_02039730(var2, ((volatile int*)var1.unknown_0_)[var3]);
			if (var0 > 0) break;
			var3 = (var3 + 1) & 0xff;
		}
	}
	int var5 = (var0 < 0) ? 0 : var0;
	struct Struct_0201099c_3* var6 = *(struct Struct_0201099c_3**)(arg0 + Enum_ov017_0219a544_16516);
	int var7 = func_020e0434(var6, var5);
	if (!var7) return;
	func_02041a28(arg1, 0);
	int var8 = data_ov017_021d6460[arg2];
	func_02042084(arg1, (char*)var7, var8, Enum_ov017_0219a544_0);
}
