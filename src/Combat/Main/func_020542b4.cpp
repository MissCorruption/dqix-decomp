#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Memory/SafeAllocator.h"

extern "C" ARM void func_020543ec(char* arg0, char* arg1);

extern unsigned int data_020e7c40[];

struct Struct_020542b4 {
    unsigned char unknown_0_[4];
    SafeAllocator unknown_4_[10];
};

// USA: func_020542b4
extern "C" ARM void func_020542b4(struct Struct_020542b4* arg0, SafeAllocator* arg1, char* arg2) {
    int var0;
    void* var1;
    unsigned int var2;

    arg1->Reset();

    for (var0 = 0; var0 < 10; var0++) {
        var2 = data_020e7c40[var0];
        var1 = arg1->Allocate(var2);
        VectorizedMemset(var1, 0, var2);
        arg0->unknown_4_[var0].CreateTypeA(var1, var2);
    }

    func_020543ec((char*)arg0, arg2);

    var1 = arg1->Allocate(0x2000);
    VectorizedMemset(var1, 0, 0x2000);
    ((SafeAllocator*)((char*)arg0 + 0x52c))->CreateTypeA(var1, 0x2000);

    var1 = arg1->Allocate(0x5400);
    VectorizedMemset(var1, 0, 0x5400);
    ((SafeAllocator*)((char*)arg0 + 0x540))->CreateTypeA(var1, 0x5400);

    var1 = arg1->Allocate(0x1000);
    VectorizedMemset(var1, 0, 0x1000);
    ((SafeAllocator*)((char*)arg0 + 0x554))->CreateTypeA(var1, 0x1000);

    var1 = arg1->Allocate(0xc00);
    VectorizedMemset(var1, 0, 0xc00);
    ((SafeAllocator*)((char*)arg0 + 0x5d8))->CreateTypeA(var1, 0xc00);
}
