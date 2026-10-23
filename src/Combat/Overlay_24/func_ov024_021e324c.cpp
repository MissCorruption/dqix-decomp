#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Combatant_20885b4;
extern "C" int func_020885b4(struct Combatant_20885b4* obj);
struct S88514;
extern "C" int func_02088514(struct S88514* obj);
struct Combatant_2088644;
extern "C" void func_02088644(struct Combatant_2088644* obj);
extern "C" void func_ov000_02159eac(void* a0, void* buf, int a2);
struct Obj_021e8ca0;
extern "C" void* func_ov024_021e8ca0(struct Obj_021e8ca0* obj, int id);
extern "C" void func_ov000_0215cd44(void* a, void* b, void* c, int d, int e, int f, int g);

struct Obj_021e324c { char pad0[0xc]; void* field0xc; void* field0x10; };

// USA: func_ov024_021e324c
extern "C" ARM unsigned long long func_ov024_021e324c(struct Obj_021e324c* obj, int unused, int id) {
	GameObject* c = GetCombatantByID((int)obj->field0x10, id);
	if (!c) return 0;
	union { struct { int lo; int hi; }; unsigned long long v; } local;
	local.lo = 0;
	local.hi = 0;
	if (func_020885b4((struct Combatant_20885b4*)c->currentStats_) || func_02088514((struct S88514*)c->currentStats_)) {
		func_02088644((struct Combatant_2088644*)c->currentStats_);
		func_ov000_02159eac(obj->field0x10, &local, 0x11);
		void* entry = func_ov024_021e8ca0((struct Obj_021e8ca0*)obj, 0x54);
		if (entry) {
			func_ov000_0215cd44(obj->field0x10, entry, c, 0, 0, 0, 0);
		}
	}
	return local.v;
}
