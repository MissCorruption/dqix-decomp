#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021da670_6;
extern "C" int func_ov024_021da998(struct Struct_ov024_021da670_6* arg0);
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(struct Struct_ov024_021dd028_5* arg0);

extern "C" void func_02088234(void* arg0);
extern "C" void func_020881ac(void* arg0);
extern "C" void func_02088914(unsigned char* arg0);
extern "C" void func_020889b4(void* arg0);
extern "C" void func_02088a04(void* arg0);
extern "C" void func_02088a54(unsigned char* arg0);
extern "C" void func_02088aa8(unsigned char* arg0);
extern "C" void func_02088b34(unsigned char* arg0);
extern "C" void func_02088964(unsigned char* arg0);
extern "C" void func_02088b84(unsigned char* arg0);
extern "C" void func_020888c4(unsigned char* arg0);
extern "C" void func_02088af0(unsigned char* arg0);
extern "C" void func_02088bd4(unsigned char* arg0);
struct Struct_02088674;
extern "C" void func_02088674(struct Struct_02088674* arg0);
extern "C" void func_02088cf4(unsigned char* arg0);
extern "C" void func_02088d4c(unsigned char* arg0);
extern "C" void func_02088c38(unsigned char* arg0);
extern "C" void func_02088c9c(unsigned char* arg0);
extern "C" void func_020890f4(unsigned char* arg0);
extern "C" void func_02089144(unsigned char* arg0);
extern "C" void func_02089194(unsigned char* arg0);
extern "C" void func_02088d9c(unsigned char* arg0);
extern "C" void func_02087838(void* arg0);
extern "C" void func_0208792c(void* arg0);
extern "C" void func_02087a20(void* arg0);
extern "C" void func_02087b14(void* arg0);
extern "C" void func_02087c08(void* arg0);
extern "C" void func_02087cfc(void* arg0);
extern "C" void func_02087df0(void* arg0);
extern "C" void func_02087efc(unsigned char* arg0);
extern "C" void func_020880e4(void* arg0);
extern "C" void func_02087ff0(void* arg0);

void ApplyCombatantBuffs(int unused, int combatantId);

struct Struct_ov024_021ddc80_5;
extern "C" void* func_ov024_021e8cfc(struct Struct_ov024_021ddc80_5* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);

extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021ea85c { char unknown_0_[0x10]; void* unknown_10_; };

// USA: func_ov024_021ea85c
extern "C" ARM void* func_ov024_021ea85c(struct Struct_ov024_021ea85c* arg0, int arg1, int arg2) {
	GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
	if (!var0) return 0;
	int var1 = func_ov024_021da998((struct Struct_ov024_021da670_6*)var0);
	int var2 = func_ov024_021dd260((struct Struct_ov024_021dd028_5*)var0);
	func_02088234(var0->currentStats_);
	func_020881ac(var0->currentStats_);
	func_02088914((unsigned char*)var0->currentStats_);
	func_020889b4(var0->currentStats_);
	func_02088a04(var0->currentStats_);
	func_02088a54((unsigned char*)var0->currentStats_);
	func_02088aa8((unsigned char*)var0->currentStats_);
	func_02088b34((unsigned char*)var0->currentStats_);
	func_02088964((unsigned char*)var0->currentStats_);
	func_02088b84((unsigned char*)var0->currentStats_);
	func_020888c4((unsigned char*)var0->currentStats_);
	func_02088964((unsigned char*)var0->currentStats_);
	func_02088af0((unsigned char*)var0->currentStats_);
	func_02088bd4((unsigned char*)var0->currentStats_);
	func_02088674((struct Struct_02088674*)var0->currentStats_);
	func_02088cf4((unsigned char*)var0->currentStats_);
	func_02088d4c((unsigned char*)var0->currentStats_);
	func_02088c38((unsigned char*)var0->currentStats_);
	func_02088c9c((unsigned char*)var0->currentStats_);
	func_020890f4((unsigned char*)var0->currentStats_);
	func_02089144((unsigned char*)var0->currentStats_);
	func_02089194((unsigned char*)var0->currentStats_);
	func_02088d9c((unsigned char*)var0->currentStats_);
	func_02087838(var0->currentStats_);
	func_0208792c(var0->currentStats_);
	func_02087a20(var0->currentStats_);
	func_02087b14(var0->currentStats_);
	func_02087c08(var0->currentStats_);
	func_02087cfc(var0->currentStats_);
	func_02087df0(var0->currentStats_);
	func_02087efc((unsigned char*)var0->currentStats_);
	func_020880e4(var0->currentStats_);
	func_02087ff0(var0->currentStats_);
	ApplyCombatantBuffs((int)arg0->unknown_10_, arg1);
	void* var3 = 0;
	if (var1) {
		var3 = func_ov024_021e8cfc((struct Struct_ov024_021ddc80_5*)arg0, var0, 0, arg2);
	} else if (var2 && !func_ov024_021dd260((struct Struct_ov024_021dd028_5*)var0)) {
		var3 = func_ov024_021e8cfc((struct Struct_ov024_021ddc80_5*)arg0, var0, 8, arg2);
	}
	if (arg2 != 0 && var3 == 0) {
		void* var4 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, 0xf1);
		var3 = var4;
		func_ov000_0215cd44(arg0->unknown_10_, var4, var0, 0, 0, 0, 0);
	}
	return var3;
}
