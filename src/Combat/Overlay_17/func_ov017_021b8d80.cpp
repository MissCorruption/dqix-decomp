#if defined(jpn)
enum { Enum_ov017_021b8d80_140 = 0x4c };
#else
enum { Enum_ov017_021b8d80_140 = 0x8c };
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

extern "C" int func_020421a0();
struct Struct_0208ba54;
extern "C" void func_0208ba54(struct Struct_0208ba54* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_ov008_021845ac(void* arg0);
extern "C" void func_020dc2d0(int arg0);
struct GameResources;
void SetSubBrightness(GameResources*, int, int);
struct Struct_02061c04_11;
extern "C" void func_ov017_021b994c(struct Struct_02061c04_11* arg0);
extern "C" void func_020a0c0c(void);

extern int data_02114e20;

// USA: func_ov017_021b8d80
extern "C" ARM void func_ov017_021b8d80(unsigned char* arg0) {
    GameResources* var0 = GetGameResources();
    if (*(int*)(arg0 + 0x120) > -1) {
        int var1 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(arg0 + 0x120)));
    }

    if (arg0[0x137] == 0) {
        *(int*)((char*)func_020421a0() + Enum_ov017_021b8d80_140) = 0;
        func_0208ba54((struct Struct_0208ba54*)(arg0 + 0x30));
        SafeAllocator* var2 = (SafeAllocator*)(arg0 + 0x8);
        void* var3 = var2->GetSignedAllocator();
        if (var3) {
            var2->Destroy();
            func_02012da4((AllocatorUnion*)&data_02114e20, var3);
        }
    }

    if (arg0[0x128] != 0) {
        func_ov008_021845ac(*(void**)(arg0 + 0x118));
        SafeAllocator* var4 = (SafeAllocator*)(arg0 + 0x1c);
        void* var5 = var4->GetSignedAllocator();
        if (var5) {
            var4->Destroy();
            func_02012da4((AllocatorUnion*)&data_02114e20, var5);
        }
        *(int*)(arg0 + 0x118) = 0;

        volatile unsigned short* var6 = (volatile unsigned short*)0x4001008;
        var6[0] = (var6[0] & ~3) | 1;
        var6[1] = (var6[1] & ~3) | 2;
        var6[2] = var6[2] & ~3;

        func_020dc2d0(0);
        SetSubBrightness(var0, 0, 0xf);
    }

    func_ov017_021b994c((struct Struct_02061c04_11*)arg0);
    func_020a0c0c();
}
