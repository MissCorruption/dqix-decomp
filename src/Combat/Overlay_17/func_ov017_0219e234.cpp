#include <globaldefs.h>
#include "GameState/GameState.h"
struct Battle0219d250;
struct Entry0219d250;
struct Request0219d250;

extern "C" int func_020100f8(char* obj);
extern "C" void func_020a28a0(unsigned char* obj, unsigned char mask);
extern "C" void func_020a289c(void);
typedef void (*BlankFn020a289c)(void*, int);
extern "C" void func_020a28b0(unsigned char* obj, int mask);

struct Field12Bits0219e234 {
	unsigned char nibble : 4;
	unsigned char mid : 3;
	unsigned char high : 1;
};

// USA: func_ov017_0219e234
extern "C" ARM void func_ov017_0219e234(Battle0219d250* a0, Request0219d250* a1, Entry0219d250* a2, void* obj) {
	GameState* battle = GameState::GetInstance();
	int f = func_020100f8((char*)battle);
	if (!f) return;
	struct Field12Bits0219e234* b = (struct Field12Bits0219e234*)((char*)obj + 0xc);
	if (b->nibble == 0 || b->high == 0) {
		func_020a28a0((unsigned char*)f, 0x10);
		((BlankFn020a289c)&func_020a289c)((void*)f, 2);
		return;
	}
	func_020a28b0((unsigned char*)f, 0x10);
}
