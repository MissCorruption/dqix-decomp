#include <globaldefs.h>
#include "GameState/GameState.h"

struct Ent021ce658 {
	char pad0[4];
	signed char f4;
	signed char f5;
	unsigned char f6;
};

extern "C" GameObject* func_0200ff1c(GameState* battleStruct, int combatantId);
extern "C" int func_02053c6c(unsigned char* obj);
extern "C" void func_020e3b8c(char* mgr, int index, int p3, int p4, int p5, int p6, int p7, unsigned char p8);

// USA: func_ov017_021ce658
extern "C" ARM void func_ov017_021ce658(void* unused0, struct Ent021ce658* entry, GameState* battle, char* mgr) {
#if defined(jpn)
 enum {regionalOffset0=0x8b8};
#else
 enum {regionalOffset0=0x950};
#endif
	signed char f4 = entry->f4;
	GameObject* c = func_0200ff1c(battle, f4);
	if (c == NULL) return;

	char* field150 = (char*)func_02053c6c((unsigned char*)c);
	if (field150 == 0) return;

	int field950 = *(int*)(field150 + regionalOffset0);
	signed char f5 = entry->f5;
	unsigned short halfword = *(unsigned short*)(field150 + (field950 << 1) + 0x100 + 0x6c);
	if (f5 < 0) return;

	if (f5 == 0) {
		func_020e3b8c(mgr, f4, halfword, field950, 0, 0, 0, entry->f6);
	} else {
		func_020e3b8c(mgr, f4, f5, field950, 0, 0, 0, entry->f6);
	}
}
