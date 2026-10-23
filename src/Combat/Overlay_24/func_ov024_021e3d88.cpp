#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_02087d24;
extern "C" int func_02087d24(struct Struct_02087d24* arg0, int arg1);
struct Struct_02087d78;
extern "C" int func_02087d78(struct Struct_02087d78* arg0, int arg1);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e3d88 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e3d88_2 { char unknown_0_[0xc]; void* unknown_c_; struct Random* unknown_10_; };
struct Struct_ov024_021e3d88_3 { char unknown_0_[0x32]; short unknown_32_; };
struct Struct_ov024_021e3d88_4 { char unknown_0_[0x52]; unsigned char unknown_52_; };

// USA: func_ov024_021e3d88
extern "C" ARM unsigned long long func_ov024_021e3d88(struct Struct_ov024_021e3d88_2* arg0, int arg1, int arg2, struct Struct_ov024_021e3d88_3* arg3, int arg4) {
	if (arg4 <= 0) return 0;
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	int var1 = NextRandomMax(arg0->unknown_10_, 100);
	int var2 = arg3->unknown_32_;
	if (var2 < -2) var2 = -2;
	if (var2 > 2) var2 = 2;
	int var3 = 0;
	if (var2 < 0) {
		unsigned char var4 = ((struct Struct_ov024_021e3d88_4*)var0->currentStats_)->unknown_52_;
		if (var4 == 0) return 0;
		struct Struct_ov024_021e3d88* var5 = (struct Struct_ov024_021e3d88*)((char*)arg0->unknown_c_ + 0x1c);
		if (!var5->unknown_0_7_) {
			float var6 = var4;
			if (var1 >= var4) return 0;
		}
		var3 = 1;
	}
	int var7 = 0;
	int var8 = 0;
	if (func_02087d24((struct Struct_02087d24*)var0->currentStats_, (unsigned char)var3)) {
		var8 = func_02087d78((struct Struct_02087d78*)var0->currentStats_, (signed char)var2);
		var7 = 1;
	}
	if (var7) {
		int var9;
		if (var2 > 0) {
			switch (var8) {
			case 2: var9 = 0xab; break;
			case 0: var9 = 0xae; break;
			default: var9 = 0xac; break;
			}
		} else {
			switch (var8) {
			case -2: var9 = 0xaf; break;
			case 0: var9 = 0xae; break;
			default: var9 = 0xad; break;
			}
		}
		void* var10 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, var9);
		if (var10) {
			func_ov000_0215cd44(arg0->unknown_10_, var10, var0, 0, 0, 0, 0);
		}
	}
	return 0;
}
