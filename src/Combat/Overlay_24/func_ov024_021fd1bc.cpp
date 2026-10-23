#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_021fa76c;
extern "C" int func_ov024_021fa76c(struct Struct_021fa76c* combatant);

struct TargetObj02088418;
extern "C" int func_02088418(struct TargetObj02088418* c, int index, int actionId);

struct FlagObj_021da9c8;
extern "C" int func_ov024_021da9c8(struct FlagObj_021da9c8* obj);

struct IndexedObj_021fe6b4;
extern "C" void func_ov024_021fe6b4(struct IndexedObj_021fe6b4* obj, int val);

extern "C" void func_ov024_021fd088(void* obj, float pct, int a2);

struct Field14Bits_021fd1bc { unsigned int lo : 7; unsigned int val : 7; };
struct State64c_021fd1bc {
	char pad0[4];
	unsigned int actionId : 12;
	char pad1[0x14 - 8];
	struct Field14Bits_021fd1bc bits;
	char pad2[0x30 - 0x18];
	short field30;
	short field32;
};

struct FlagsA_021fd1bc {
	char pad[0xa];
	unsigned short : 11;
	unsigned short flag11 : 1;
	unsigned short : 4;
};

struct Obj_021fd1bc {
	char pad0[0x64c];
	struct State64c_021fd1bc* state64c;
	char pad2[0x668 - 0x64c - 4];
	GameObject* ptr668;
};

// USA: func_ov024_021fd1bc
extern "C" ARM void func_ov024_021fd1bc(struct Obj_021fd1bc* obj) {
	GameObject* c = obj->ptr668;
	if (!func_ov024_021fa76c((struct Struct_021fa76c*)c)) return;
	struct State64c_021fd1bc* state = obj->state64c;
	int index = state->field32 & 0xff;
	unsigned short actionId = state->actionId;
	if (!func_02088418((struct TargetObj02088418*)c->currentStats_, index, actionId)) return;
	if (func_ov024_021da9c8((struct FlagObj_021da9c8*)c)) return;
	state = obj->state64c;
	if (state->field30 == 2 && (c->obj3D_.unknown_0_ & 0x400)) {
		struct FlagsA_021fd1bc* p = *(struct FlagsA_021fd1bc**)((char*)c + 0x144);
		if (p && p->flag11) return;
	}
	float valF = (float)state->bits.val;
	unsigned char pctBase = *(unsigned char*)((char*)c->currentStats_ + 0x4c);
	float scaled = valF * ((float)pctBase / 100.0f);
	if (scaled > 100.0f) scaled = 100.0f;
	func_ov024_021fe6b4((struct IndexedObj_021fe6b4*)obj, 1);
	func_ov024_021fd088(obj, scaled, 8);
}
