#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov025_021e88d8 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

struct Struct_ov000_0216fe48;

extern int data_ov025_021ef990;

extern "C" void func_ov025_021ebab4(char* arg0);
extern "C" void func_ov025_021ed124(unsigned char* arg0);
extern "C" void func_ov000_0216fe48(struct Struct_ov000_0216fe48* arg0);
extern "C" void func_ov025_021e8a20(struct Struct_ov025_021e88d8* arg0);

// USA: func_ov025_021e88d8
extern "C" ARM void func_ov025_021e88d8(void* arg0) {
    char* var0 = (char*)arg0;

    *(int*)(var0 + 0) = 0;
    *(int*)(var0 + 4) = 0;
    data_ov025_021ef990 = 0;

    for (int var1 = 0; var1 < 4; var1++) {
        *(int*)(var0 + 0x10 + var1 * 4) = 0;
        *(int*)(var0 + 0x20 + var1 * 4) = 0;
    }

    for (int var2 = 0; var2 < 3; var2++) {
        SafeAllocator* var3 = (SafeAllocator*)(var0 + 0x34) + var2;
        var3->ResetAllocatorPointer();
        void* var4 = var0 + 0x70 + var2 * 0x70;
        *(int*)(var0 + 0x10 + (var2 + 1) * 4) = (int)var3;
        *(int*)(var0 + 0x20 + (var2 + 1) * 4) = (int)var4;
    }

    var0[0x30] = 0;
    *(int*)(var0 + 0x1d8) = 0;
    *(short*)(var0 + 0x21c) = 1;
    *(short*)(var0 + 0x21e) = 0;
    *(int*)(var0 + 0x224) = 0;
    func_ov025_021ebab4(var0 + 0x22c);

    func_ov025_021ed124((unsigned char*)(var0 + 0x5e8));

    func_ov000_0216fe48((struct Struct_ov000_0216fe48*)(var0 + 0x798));

    var0[0x83c] = 0;
    var0[0x87c] = 0;
    *(int*)(var0 + 0x880) = -1;
    *(int*)(var0 + 0x884) = 0;
    *(short*)(var0 + 0x57c) = 0;
    *(short*)(var0 + 0x57e) = 0;
    *(short*)(var0 + 0x580) = 0x333;
    var0[0x582] = 0;

    struct Struct_ov025_021e88d8* var5 = (struct Struct_ov025_021e88d8*)(var0 + 0x594);
    for (unsigned char var6 = 0; var6 < 4; var6++, var5++) {
        func_ov025_021e8a20(var5);
    }

    var0[0x5c5] = 0;
    var0[0x5c6] = 0;
    *(int*)(var0 + 0xc) = 0;
    *(int*)(var0 + 0x228) = 0;
    *(short*)(var0 + 0x5c8) = 0xff;
    *(short*)(var0 + 0x5ce) = 0;
}
