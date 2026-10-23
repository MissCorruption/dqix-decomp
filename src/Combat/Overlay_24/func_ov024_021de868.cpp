#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Combat/Main/BattleList.h"
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" void func_0208902c(unsigned char* arg0, int arg1);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" float func_ov024_021db358(GameObject* arg0);
extern "C" short func_ov000_0215a16c(void* arg0, int arg1, int arg2, short* arg3);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021de868 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021de868_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021de868_3 {
	char unknown_0_[0x3a];
	unsigned char unknown_3a_;
	unsigned char unknown_3b_0_ : 1;
	unsigned char unknown_3b_1_ : 7;
};

// USA: func_ov024_021de868
extern "C" ARM void* func_ov024_021de868(struct Struct_ov024_021de868_2* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	short var1 = 0;
	union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var2;
	var2.unknown_0_ = 0;
	var2.unknown_4_ = 0;
	int var3;
	if (func_02010088((struct Struct_02010088*)var0)) {
		func_0208902c((unsigned char*)var0->currentStats_, var0->currentStats_->primaryStats.maxHP);
		func_ov000_02159eac(arg0->unknown_10_, &var2, 3);
		((struct Struct_ov024_021de868_3*)var0->currentStats_)->unknown_3b_0_ = 1;
		var3 = 0x20;
		int var4 = (arg2 >= 0 && arg2 <= 3);
		if (var4) {
			GameObject* var5 = func_0200ff1c(GameState::GetInstance(), arg2);
			if (var5) {
				((struct Struct_ov024_021de868_3*)var5->currentStats_)->unknown_3a_ = 1;
			}
		}
	} else if (func_ov024_021db358(var0) < 1.0f) {
		func_ov000_0215a16c(arg0->unknown_10_, arg2, var0->currentStats_->primaryStats.maxHP, &var1);
		func_ov000_02159eac(arg0->unknown_10_, &var2, 0x25);
		var3 = 0x16;
	} else {
		var3 = 0x1f;
	}
	void* var6 = func_ov000_0215e958(arg0->unknown_10_);
	if (!var6) return 0;
	func_ov000_0215a88c(arg0->unknown_10_, var6, var3);
	struct Struct_ov024_021de868* var7 = (struct Struct_ov024_021de868*)((char*)arg0->unknown_c_ + 0x1c);
	func_ov000_0215cd44(arg0->unknown_10_, var6, var0, (short)-var1, var2.unknown1_0_, var7->unknown_0_7_ != 0);
	return var6;
}
