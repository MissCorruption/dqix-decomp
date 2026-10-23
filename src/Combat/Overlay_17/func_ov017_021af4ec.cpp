#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void* func_020d6c00(void);
extern "C" int* func_020936f8(void);
struct StateFlags3c9;
extern "C" int func_0209494c(struct StateFlags3c9* obj);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" void* func_0202ae18(void);
extern "C" void* func_0202ae24(void);
extern "C" void func_0202b0f4(void* obj);
extern "C" void func_ov017_02195748(unsigned char* base);
extern "C" void func_ov017_02192594(unsigned char* base);
extern "C" void func_020939fc(unsigned char* obj);
struct BitArrayObj0205e854;
extern "C" void* func_0205e854(struct BitArrayObj0205e854* obj);

struct ObjResetCombatState_021af4ec {
	unsigned char pad0;
	unsigned char field1;
	unsigned char pad2[6];
	unsigned char field8;
	unsigned char pad3[6];
	unsigned char field15;
};

// USA: func_ov017_021af4ec
extern "C" ARM unsigned char func_ov017_021af4ec(ObjResetCombatState_021af4ec* obj) {
#if defined(jpn)
 enum {regionalOffset0=0x40c3, regionalOffset1=0x40c2};
#else
 enum {regionalOffset0=0x42e3, regionalOffset1=0x42e2};
#endif
	unsigned int* p = (unsigned int*)func_020d6c00();
	struct StateFlags3c9* g = (struct StateFlags3c9*)func_020936f8();
	if (func_0209494c(g)) {
		func_020466e4(p, 0x20);
		int f = (int)GetGameResources();
		void* a = func_0202ae18();
		struct BitArrayObj0205e854* d = (struct BitArrayObj0205e854*)func_0202ae24();
		obj->field15 = 0;
		SetFlags00((GameResources*)f, 2);
		func_0202b0f4(a);
		func_ov017_02195748((unsigned char*)f);
		func_ov017_02192594((unsigned char*)f);
		func_020939fc((unsigned char*)g);
		func_0205e854(d);
		ClearFlags00((GameResources*)f, 0x40);
		((unsigned char*)f)[regionalOffset0] = 0;
		((unsigned char*)f)[regionalOffset1] = 0;
		obj->field1 = 1;
	}
	return obj->field8;
}
