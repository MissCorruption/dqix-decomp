#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02087954;
extern "C" int func_02087954(struct Struct_02087954* arg0, int arg1);
extern "C" int func_020879a8(void* arg0, signed char arg1);
void UpdateCombatantAgility(int unused, int id);
extern "C" int func_ov024_021e96e4(void* arg0, int arg1, void* arg2, unsigned char arg3, signed char arg4, unsigned char arg5, unsigned char arg6);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021e42b8 { char unknown_0_[0x10]; void* unknown_10_; };
struct Struct_ov024_021e42b8_2 { char unknown_0_[0x32]; short unknown_32_; };

// USA: func_ov024_021e42b8
extern "C" ARM unsigned long long func_ov024_021e42b8(struct Struct_ov024_021e42b8* arg0, int arg1, int arg2, struct Struct_ov024_021e42b8_2* arg3) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = arg3->unknown_32_;
	if (var1 < -2) var1 = -2;
	if (var1 > 2) var1 = 2;
	int var2 = 0;
	if (var1 < 0) var2 = 1;
	int var3 = 0;
	int var4 = 0;
	if (func_02087954((struct Struct_02087954*)var0->currentStats_, (unsigned char)var2)) {
		var4 = func_020879a8(var0->currentStats_, var1);
		UpdateCombatantAgility((int)arg0->unknown_10_, arg2);
		var3 = 1;
	}
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var5;
	var5.unknown_0_ = 0;
	var5.unknown_4_ = 0;
	if (var3) {
		int var6 = func_ov024_021e96e4(arg0, arg2, arg3, var2, var4, 1, 1);
		func_ov000_02159eac(arg0->unknown_10_, &var5, 0x1f);
		void* var7 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, var6);
		if (var7) {
			func_ov000_0215cd44(arg0->unknown_10_, var7, var0, 0, 0, 0);
		}
	}
	return var5.unknown1_0_;
}
