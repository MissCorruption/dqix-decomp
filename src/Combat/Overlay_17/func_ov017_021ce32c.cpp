#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* a, void* b, int c);
extern "C" int func_020546a8(void* obj);
extern "C" int func_020546bc(void* obj);
extern "C" int func_02039860(void* obj);
extern "C" int func_02039874(void* obj);
extern "C" GameObject* func_0200ff58(GameState* battleStruct, int combatantId);

struct LocalEvt021ce32c {
	unsigned char tag;
	unsigned char pad0[3];
	unsigned short field4;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char fielda;
	unsigned char pad1[9];
};

// USA: func_ov017_021ce32c
extern "C" ARM void func_ov017_021ce32c(int id) {
#if defined(jpn)
 enum {regionalOffset0=0x2c6};
#else
 enum {regionalOffset0=0x2d2};
#endif
	void* p = func_0202ae24();
	GameObject* c = func_0200ff58(GameState::GetInstance(), id);
	if (c == NULL) {
		return;
	}
	LocalEvt021ce32c buf;
	buf.tag = 0x26;
	buf.field4 = id;
	buf.field6 = func_020546a8(c);
	buf.field7 = func_020546bc(c);
	buf.field8 = func_02039860(c);
	buf.field9 = func_02039874(c);
	buf.fielda = *(unsigned char*)((char*)c + regionalOffset0);
	func_0205e330(p, &buf, 0);
}
