#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_021fa76c;
extern "C" int func_ov024_021fa76c(struct Struct_021fa76c* combatant);
extern "C" int func_020883ac(unsigned char* obj);
struct FlagObj_021de25c;
extern "C" int func_ov024_021de25c(struct FlagObj_021de25c* obj);
extern "C" void func_ov024_021fd088(void* obj, float pct, int a2);
struct IndexedObj_021fe6b4;
extern "C" void func_ov024_021fe6b4(struct IndexedObj_021fe6b4* obj, int val);

struct Field14Bits_021fd5c4 { unsigned int lo : 7; unsigned int val : 7; };
struct State64c_021fd5c4 { char pad[0x14]; struct Field14Bits_021fd5c4 bits; };

struct Obj_021fd5c4 {
	char pad0[0x64c];
	struct State64c_021fd5c4* state64c;
	char pad2[0x668 - 0x64c - 4];
	GameObject* ptr668;
};

// USA: func_ov024_021fd5c4
extern "C" ARM void func_ov024_021fd5c4(struct Obj_021fd5c4* obj) {
	GameObject* c = obj->ptr668;
	if (!func_ov024_021fa76c((struct Struct_021fa76c*)c)) return;
	if (!func_020883ac((unsigned char*)c->currentStats_)) return;
	if (func_ov024_021de25c((struct FlagObj_021de25c*)c)) return;
	float valF = (float)obj->state64c->bits.val;
	unsigned char pctBase = *(unsigned char*)((char*)c->currentStats_ + 0x4a);
	float scaled = valF * ((float)pctBase / 100.0f);
	if (scaled > 100.0f) scaled = 100.0f;
	func_ov024_021fe6b4((struct IndexedObj_021fe6b4*)obj, 1);
	func_ov024_021fd088(obj, scaled, 7);
}
