#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" int func_02088980(unsigned char* obj);
extern "C" void func_02088994(unsigned char* obj);
extern "C" void func_ov000_02159eac(void* a0, void* buf, int a2);
extern "C" unsigned short func_ov024_021da644(int idx, int a, int b);
extern "C" void* func_ov000_0215e958(void* a0);
extern "C" void func_ov000_0215a88c(void* objRaw, void* listRaw, int c);
struct Pair_021e093c { int lo; int hi; };
extern "C" void func_ov000_0215cd44(void* a, void* b, void* c, int d, struct Pair_021e093c p, int g);

struct PackedPair_021e093c {
	unsigned int a : 10;
	unsigned int b : 10;
	unsigned int c : 10;
	unsigned int hi : 2;
};

struct Flag_021e093c { unsigned char pad : 7; unsigned char flag : 1; };
struct Obj_021e093c { char pad0[0xc]; void* field0xc; void* field0x10; };
struct Range_021e093c { char pad[0x20]; struct PackedPair_021e093c f20; struct PackedPair_021e093c f24; };

// USA: func_ov024_021e093c
extern "C" ARM void* func_ov024_021e093c(struct Obj_021e093c* obj, int unused, int id, struct Range_021e093c* range, int unused2, int unused3, unsigned char flagArg) {
	GameObject* c = GetCombatantByID((int)obj->field0x10, id);
	if (!c) return 0;
	struct Pair_021e093c result;
	result.lo = 0;
	result.hi = 0;
	int active = func_02088980((unsigned char*)c->currentStats_);
	unsigned short sel;
	if (active != 0 && flagArg != 0) {
		func_02088994((unsigned char*)c->currentStats_);
		func_ov000_02159eac(obj->field0x10, &result, 0x2c);
		sel = func_ov024_021da644(id, range->f20.c, range->f24.a);
	} else {
		sel = func_ov024_021da644(id, range->f24.b, range->f24.c);
	}
	void* entry = func_ov000_0215e958(obj->field0x10);
	if (!entry) return 0;
	func_ov000_0215a88c(obj->field0x10, entry, sel);
	struct Flag_021e093c* fl = (struct Flag_021e093c*)((char*)obj->field0xc + 0x1c);
	func_ov000_0215cd44(obj->field0x10, entry, c, 0, result, fl->flag != 0);
	return entry;
}
