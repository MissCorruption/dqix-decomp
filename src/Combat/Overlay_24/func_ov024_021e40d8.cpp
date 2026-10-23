#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantByID(int unused, int id);
extern "C" int func_ov024_021eae14(void* arg0, int arg1);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e40d8 { char unknown_0_[0x10]; void* unknown_10_; };

// USA: func_ov024_021e40d8
extern "C" ARM long long func_ov024_021e40d8(struct Struct_ov024_021e40d8* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
	if (!var0) return 0;
	if (func_ov024_021eae14(arg0, arg2) > 0) {
		void* var1 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, 0xcb);
		if (var1) {
			func_ov000_0215cd44(arg0->unknown_10_, var1, var0, 0, 0, 0, 0);
		}
	}
	return 0;
}
