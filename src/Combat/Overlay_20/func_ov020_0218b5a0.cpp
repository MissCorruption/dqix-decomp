#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_0202ae18(void);
extern "C" void func_0200f3a4(void*);
extern "C" void MapVRAMBanksToMainBG(int v);
extern "C" void func_020c391c(int arg0, int arg1, int arg2);
extern "C" void func_020c3984(unsigned int arg0);
extern "C" void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" unsigned char func_0200fb9c(char* arg0);
extern "C" void func_020c5770(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, void* arg8);

struct Struct_ov020_0218b5a0 {
    char unknown_0_[0x8];
    int unknown_8_;
    #if defined(jpn)
    char unknown_c_[0x400 - 0xc];
#else
    char unknown1_c_[0x470 - 0xc];
#endif
    SafeAllocator unknown_470_;
    SafeAllocator unknown_484_;
    char unknown_498_[0x4ec - 0x498];
    int unknown_4ec_;
    int unknown_4f0_;
    int unknown_4f4_;
    char unknown_4f8_[0x4fc - 0x4f8];
    int unknown_4fc_;
    int unknown_500_;
};

// USA: func_ov020_0218b5a0
extern "C" ARM void func_ov020_0218b5a0(struct Struct_ov020_0218b5a0* arg0) {
    char* var0 = (char*)GameState::GetInstance();
    func_0202ae18();
    func_0200f3a4(var0);
    MapVRAMBanksToMainBG(4);

    volatile unsigned int* var1 = (volatile unsigned int*)0x4000000;
    *var1 = *var1 & ~0x7000000;
    *var1 = *var1 & ~0x38000000;
    func_020c391c(1, 0, 1);
    func_020c3984(0);

    volatile unsigned short* var2 = (volatile unsigned short*)0x4000008;
    var2[0] = var2[0] & ~0x3;
    var2[1] = (var2[1] & ~0x3) | 0x1;
    func_020c5588(0, 0, 0x7fff, 0x3f, 0);

    if (func_0200fb9c(var0) == 6) {
        func_020c5588(0, 0x1f, 0x7fff, 0, 0);
    }

    func_020c5770(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, 1, 0);

    *(volatile unsigned int*)0x400044c = 0;
    *(volatile unsigned short*)0x4000304 = *(volatile unsigned short*)0x4000304 & ~0x8000;
    *(volatile unsigned int*)0x4000580 = 0xbfff0000;

    arg0->unknown_470_.ResetAllocatorPointer();
    arg0->unknown_484_.ResetAllocatorPointer();

    arg0->unknown_8_ = 0;
    arg0->unknown_500_ = 0;
#if !defined(jpn)
    arg0->unknown_4f0_ = 0;
    arg0->unknown_4ec_ = 0;
    arg0->unknown_4fc_ = 0;
    arg0->unknown_4f4_ = 0;
#endif
}
