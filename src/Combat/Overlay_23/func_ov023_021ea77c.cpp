#include <globaldefs.h>
#include "GameState/GameState.h"

struct CurrentStats_021ea77c { char pad[4]; unsigned short maxHP; };
struct Combatant_021ea77c { char pad[0x130]; struct CurrentStats_021ea77c* current; };

extern "C" int func_020100a8(GameState* battleStruct);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ea77c
extern "C" ARM int func_ov023_021ea77c(void *obj) {
	GameState *bs = GameState::GetInstance();
	int id = func_020100a8(bs);
	struct Combatant_021ea77c *combatant = (struct Combatant_021ea77c*)func_0200ff1c(bs, id);
	int flag = 0;
	if (combatant) {
		int hp = combatant->current->maxHP;
		flag = hp > 0;
	}
	if (flag) {
		func_ov017_021d6134(obj, 1);
	} else {
		func_ov017_021d6134(obj, 0);
	}
	return 1;
}
