#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0200fd0c(GameState* battleStruct);
struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int a, unsigned char* b, int c);
extern "C" int func_0202c540(void* p);
extern "C" void func_020103c8(int val, int arg);
struct Data02107930;

struct Evt021c51c0 {
	unsigned char pad0[4];
	unsigned char field4;
	unsigned char field5;
	unsigned short field6;
	unsigned short field8;
	int fieldc;
	unsigned short field10;
	unsigned short field12;
};

// USA: func_ov017_021c51c0
extern "C" ARM void func_ov017_021c51c0(int flag, Evt021c51c0* evt, GameState* battleStruct, unsigned char* obj, struct SearchStruct0202c1a4* search) {
#if defined(jpn)
 enum {regionalOffset=0x4fc};
#else
 enum {regionalOffset=0x70c};
#endif
	unsigned char* base = obj + 0x3000;
	void* h = *(void**)(base + regionalOffset);
	void* ctx = func_0200fd0c(battleStruct);
	signed char cur = func_0202c1a4(search);
	if (evt->field4 != cur) return;

	*(unsigned char*)((char*)h + 0xb) = 1;

	if (evt->field5 == 1) {
		void* work = func_0205ec34();
		if (func_0206dfb0((int)work, (unsigned char*)work + 0x8c, evt->field8 + 0x38e) == 0) {
			*(int*)((char*)ctx + 0x24) = evt->field6;
		}
	} else if (evt->field5 == 2) {
		*(int*)((char*)ctx + 0x28) = evt->field6;
		*(int*)((char*)ctx + 0x2c) = evt->field8;
	}

	if (func_0202c540(search) != 0 && flag == 0) {
		func_020103c8((int)battleStruct, evt->fieldc);
		LightingManager::GetInstance();
	}

	*(unsigned short*)((char*)h + 0xe) = evt->field10;
	*(unsigned short*)((char*)h + 0x10) = evt->field12;
}
