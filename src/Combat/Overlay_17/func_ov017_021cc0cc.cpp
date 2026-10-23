#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);

struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" void* func_02052a10(char* obj);
extern "C" void func_0205e330(void* a, void* b, int c);

struct LocalEvt021cc0cc {
	unsigned char tag;
	unsigned char pad0[3];
	signed char partySlot;
	unsigned char active;
	char name[12];
	unsigned char pad1[2];
};

// USA: func_ov017_021cc0cc
extern "C" ARM void func_ov017_021cc0cc(void) {
	GameState* bs = GameState::GetInstance();
	void* search = func_0202ae18();
	void* p = func_0202ae24();
	GameObject* c = bs->GetProtagonist();
	if (!c) return;

	LocalEvt021cc0cc buf;
	buf.tag = 0x2b;
	buf.partySlot = func_0202c1a4((struct SearchStruct0202c1a4*)search);
	buf.active = 1;
	#if defined(jpn)
    const char* name = c->baseStats_->unk;
#else
    const char* name = (const char*)func_02052a10((char*)c);
#endif
	strncpy(buf.name, name, sizeof(buf.name));
	func_0205e330(p, &buf, 0);
}
