#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
struct Struct_ov009_021842a0;

extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_ov023_021e4f18(void* arg0);
extern "C" int func_020421a0();
struct Struct_02045cac;
extern "C" void func_02045cac(struct Struct_02045cac* arg0);
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(char* arg0);
extern "C" void func_0205a494(void* arg0);
extern "C" void* func_0203bd14();
extern "C" void func_0203c4c4(char* arg0);
struct Struct_0204b010;
extern "C" void func_0204b010(Struct_0204b010* arg0, void* arg1);
extern "C" void func_0204b04c(void* arg0, int arg1);
extern "C" void func_0204b088(void* arg0, int arg1);
struct Struct_02020cb8_3;
extern "C" void func_0204afb4(struct Struct_02020cb8_3* arg0);
struct Struct_0205d048;
extern "C" void func_0205d048(struct Struct_0205d048* arg0);
extern "C" void* __clear(void* arg0, int arg1);

// USA: func_ov009_02184848
extern "C" ARM void func_ov009_02184848(Struct_ov009_021842a0* arg0) {
    char* var0 = (char*)arg0;
    if (*(unsigned char*)(var0 + R(0xd59,0xd95)) == 1) {
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0xf);
    }

    func_ov023_021e4f18(*(void**)(var0 + R(0x7b4,0x7f0)));
    func_ov023_021e4f18(*(void**)(var0 + R(0x7b8,0x7f4)));

    void* var1 = (void*)func_020421a0();
    func_02045cac((struct Struct_02045cac*)var1);
    func_02043204((char*)var1);
    func_02043124((char*)var1);

    if (*(void**)(var0 + R(0x79c,0x7d8)) != 0) {
        func_0205a494(*(void**)(var0 + R(0x79c,0x7d8)));
    }
    if (*(void**)(var0 + R(0x7a8,0x7e4)) != 0) {
        func_0205a494(*(void**)(var0 + R(0x7a8,0x7e4)));
    }
    func_0203c4c4((char*)func_0203bd14());

    {
        void* var2[6];
        var2[0] = var0 + R(0xfc,0x138);
        var2[1] = var0 + R(0x11c,0x158);
        var2[2] = var0 + R(0x13c,0x178);
        var2[3] = var0 + R(0x15c,0x198);
        var2[4] = var0 + R(0x17c,0x1b8);
        var2[5] = var0 + R(0x19c,0x1d8);
        for (int var3 = 0; var3 < 6; var3++) {
            void* var4 = var2[var3];
            func_0204b010((Struct_0204b010*)var4, 0);
            func_0204b04c(var4, 0);
            func_0204b088(var4, 0);
            func_0204afb4((struct Struct_02020cb8_3*)var4);
        }
    }

    func_0205d048((struct Struct_0205d048*)(var0 + R(0x1bc,0x1f8)));
    func_0205d048((struct Struct_0205d048*)(var0 + R(0x278,0x2b4)));
    *(int*)(var0 + R(0xd8,0xf8)) = 0;
    *(int*)(var0 + R(0x794,0x7d0)) = 0;
    *(int*)(var0 + R(0x798,0x7d4)) = 0;

    if (*(void**)(var0 + R(0xa4,0xb8)) != 0) {
        ((SafeAllocator*)(*(void**)(var0 + R(0xa4,0xb8))))->Destroy();
        ((SafeAllocator*)((char*)(*(void**)(var0 + R(0xa4,0xb8))) + 0x14))->Destroy();
    }
    if (*(void**)(var0 + R(0xa0,0xb4)) != 0) {
        ((SafeAllocator*)(*(void**)(var0 + R(0xa0,0xb4))))->Destroy();
    }

    SafeAllocator* var5[R(9,10)];
    __clear(var5, R(0x24,0x28));
#if defined(jpn)
    var5[0] = (SafeAllocator*)(var0 + 0x8c);
    var5[1] = (SafeAllocator*)(var0 + 0x78);
    var5[2] = (SafeAllocator*)(var0 + 0x64);
    var5[3] = (SafeAllocator*)(var0 + 0x50);
    var5[4] = (SafeAllocator*)(var0 + 0x3c);
    var5[5] = (SafeAllocator*)(var0 + 0x28);
    var5[6] = (SafeAllocator*)(var0 + 0x14);
    var5[7] = (SafeAllocator*)var0;
#else
    var5[0] = (SafeAllocator*)(var0 + 0xa0);
    var5[1] = (SafeAllocator*)(var0 + 0x8c);
    var5[2] = (SafeAllocator*)(var0 + 0x78);
    var5[3] = (SafeAllocator*)(var0 + 0x64);
    var5[4] = (SafeAllocator*)(var0 + 0x50);
    var5[5] = (SafeAllocator*)(var0 + 0x3c);
    var5[6] = (SafeAllocator*)(var0 + 0x28);
    var5[7] = (SafeAllocator*)(var0 + 0x14);
    var5[8] = (SafeAllocator*)var0;
#endif

    int var6 = 0;
    while (var5[var6] != 0) {
        if (var5[var6]->GetSignedAllocator() != 0) {
            var5[var6]->Destroy();
        }
        var6++;
    }
}
