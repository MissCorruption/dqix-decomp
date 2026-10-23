#if defined(jpn)
enum {regionalOffset0=0x568, regionalOffset1=0x120, regionalOffset2=0x11c, regionalOffset3=0x228, regionalOffset4=0x22c, regionalOffset5=0x230};
#else
enum {regionalOffset0=0x630, regionalOffset1=0x124, regionalOffset2=0x120, regionalOffset3=0x2d8, regionalOffset4=0x2dc, regionalOffset5=0x2e0};
#endif
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_020d6c00(void);
struct FlagWord020466f4;
extern "C" void func_020466f4(struct FlagWord020466f4*, unsigned int);
extern "C" void func_ov005_02154198(void*);
extern "C" void* func_02012fe4(void);
extern "C" void func_02017d68(void* obj);
extern "C" void func_ov023_021e4f18(void* obj);
extern "C" void func_0205a494(void* obj);
extern "C" int func_020421a0(void);
struct CombatSlots02045cac;
extern "C" void func_02045cac(struct CombatSlots02045cac*);
extern "C" void func_02043204(char*);
extern "C" void func_02043124(int);

// USA: func_ov023_021e2f38
extern "C" ARM void func_ov023_021e2f38(void* obj) {
    char* o = (char*)obj;

    func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0xf);

    int data4 = (int)BackgroundLoader::GetInstance();
    if (*(int*)(o + regionalOffset0) > 0) {
        ((BackgroundLoader*)(data4))->RemoveTask((int)(*(int*)(o + regionalOffset0)));
        *(int*)(o + regionalOffset0) = -1;
    }

    FontBankLoader* g = func_02094a00();
    func_02094b40(g);
    func_02094ab0(g);

    if (*(void**)(o + 0x0) != 0) {
        func_ov005_02154198(*(void**)(o + 0x0));
        *(void**)(o + 0x0) = 0;
        func_02017d68(func_02012fe4());
    }

    func_ov023_021e4f18(*(void**)(o + regionalOffset1));
    if (*(void**)(o + regionalOffset2) != 0) {
        func_ov023_021e4f18(*(void**)(o + regionalOffset2));
    }
    if (*(void**)(o + 0xc8) != 0) {
        func_0205a494(*(void**)(o + 0xc8));
    }

    ((SafeAllocator*)(o + 0x90))->Destroy();
    ((SafeAllocator*)(o + 0x7c))->Destroy();
    ((SafeAllocator*)(o + 0x68))->Destroy();
    ((SafeAllocator*)(o + 0x54))->Destroy();
    ((SafeAllocator*)(o + 0x40))->Destroy();
    ((SafeAllocator*)(o + 0x2c))->Destroy();

    *(int*)(o + 0xc0) = 0;
    *(int*)(o + 0xc4) = 0;

    int gg = func_020421a0();
    func_02045cac((struct CombatSlots02045cac*)gg);
    func_02043204((char*)gg);
    func_02043124(gg);

    *(int*)((char*)gg + regionalOffset3) = 0;
    *(int*)((char*)gg + regionalOffset4) = 0;
    *(int*)((char*)gg + regionalOffset5) = 0;
}
