#include <globaldefs.h>
#include "GameState/GameState.h"
struct GameResources;

extern "C" GameObject* func_0200ff1c(GameState* battleStruct, int combatantId);
extern "C" void* func_02033fa0(void* obj);
struct ColorHolder0204bd7c;
extern "C" unsigned short func_0204bd7c(struct ColorHolder0204bd7c* obj);
extern "C" void* func_02011584(void* obj);
struct SearchList02099a68;
extern "C" int func_02099a68(struct SearchList02099a68* list, unsigned short key);

// USA: func_ov017_021a26e8
extern "C" ARM int func_ov017_021a26e8(GameResources* unused0, int combatantId) {
	GameState* bs = GameState::GetInstance();
	GameObject* combatant = func_0200ff1c(bs, combatantId);
	if (combatant == NULL) {
		return 0;
	}
	void* p114 = func_02033fa0(combatant);
	if (p114 == NULL) {
		return 0;
	}
	unsigned short color = func_0204bd7c((struct ColorHolder0204bd7c*)p114);
	void* list = func_02011584(bs);
	return func_02099a68((struct SearchList02099a68*)list, color);
}
