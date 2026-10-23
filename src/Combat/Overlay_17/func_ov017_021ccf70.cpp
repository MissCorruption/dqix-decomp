#include <globaldefs.h>

#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* battleStruct, int combatantId);
extern "C" int func_02053c6c(unsigned char* obj);
extern "C" void func_02083b60(unsigned char* obj, int index);

struct Hdr021ccf70 {
	unsigned char id : 3;
	unsigned char count : 4;
	unsigned char pad : 1;
};

struct ByteBitList {
    Hdr021ccf70 header;
    unsigned char bitIndices[15];
};

struct ByteBitListEvent {
    unsigned char unknown0[4];
    ByteBitList payload;
};

// USA: func_ov017_021ccf70
extern "C" ARM void func_ov017_021ccf70(int unused0, unsigned char* obj, GameState* battleStruct) {
    ByteBitList* list = &((ByteBitListEvent*)obj)->payload;
    Hdr021ccf70* hdr = &list->header;
	GameObject* c = func_0200ff1c(battleStruct, hdr->id);
	if (!c) return;

	unsigned char* base = (unsigned char*)func_02053c6c((unsigned char*)c);
	if (!base) return;

	for (int i = 0; i < hdr->count; i++) {
        func_02083b60(base, list->bitIndices[i]);
	}
}
