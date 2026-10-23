#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
extern "C" void func_ov017_02195398(int, int);
extern "C" void func_ov017_02191234(int);
extern "C" void func_ov017_021905b8(int, int, int);

extern "C" void func_ov017_02195618(unsigned char* obj);
extern "C" int func_020100a8(GameState* battleStruct);

struct SearchStruct;
extern "C" void func_0202c660(struct SearchStruct* obj, int value);

struct S021b1454;
extern "C" void func_ov017_021b1454(struct S021b1454* obj, int bit);

// USA: func_ov017_0219558c
extern "C" ARM void func_ov017_0219558c(unsigned char* obj, int value) {
#if defined(jpn)
 enum {regionalOffset0=0x914};
#else
 enum {regionalOffset0=0xb34};
#endif
	GameState* battleStruct = GameState::GetInstance();
	int x = ((int)GetGameResources());
	struct SearchStruct* search = (struct SearchStruct*)func_0202ae18();
	if (value == 0) {
		func_ov017_02195618(obj);
		return;
	}
	if (value == func_020100a8(battleStruct)) return;
	func_ov017_02195398(x, value);
	func_0202c660(search, value);
	func_ov017_02191234(x);
	func_ov017_021905b8(x, value, 1);
	func_ov017_021b1454(*(struct S021b1454**)((char*)obj + 0x3000 + regionalOffset0), value & 0xff);
}
