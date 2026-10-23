#include <globaldefs.h>
#include "GameState/GameState.h"

struct EntryFlags_0219e0ec { unsigned short pad0 : 2; unsigned short flag2 : 1; unsigned short pad3 : 13; };
struct Element0x318_02028bac { unsigned char data[0x318]; };
extern "C" struct Element0x318_02028bac* func_02028bac(struct Element0x318_02028bac* base, int index);
struct Entry_02028bd0;
extern "C" struct Entry_02028bd0* func_02027ca4(void);
extern "C" void func_02076a8c(void* obj);

// USA: func_ov017_0219e0ec
extern "C" ARM void func_ov017_0219e0ec(void*) {
	int base;
	GameState* battleStruct;
	struct Element0x318_02028bac* table;
	battleStruct = GameState::GetInstance();
	table = (struct Element0x318_02028bac*)func_02027ca4();
	for (int outer = 0; outer < 4; outer++) {
		struct Element0x318_02028bac* elem = func_02028bac(table, outer);
		if (!elem) continue;
		struct EntryFlags_0219e0ec* flags = (struct EntryFlags_0219e0ec*)((unsigned char*)elem + 2);
		if (flags->flag2) continue;
		base = outer * 0xc + 0x70;
		for (int inner = 0; inner < 0xc; inner++) {
			GameObject* combatant = battleStruct->GetMaybeFieldMonsterByIndex(inner + base);
			if (combatant) {
				func_02076a8c(combatant);
				((Object3D*)((unsigned char*)combatant))->MakeHidden();
			}
		}
	}
}
