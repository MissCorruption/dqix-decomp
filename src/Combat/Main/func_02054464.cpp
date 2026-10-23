#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0203d028;
extern "C" ARM void func_0207df50(struct Struct_0203d028* arg0);
extern "C" ARM void func_0207df90(char* arg0);
extern "C" ARM void func_0207dfac(char* arg0);
extern "C" void func_0207de48(void* arg0, int arg1, int arg2);

struct Struct_020e7d30 { int unknown_0_; int unknown_4_; };
extern unsigned int data_020e7c18[];
extern struct Struct_020e7d30 data_020e7d30[];
extern struct Struct_020e7d30 data_020e7d34[];

// USA: func_02054464
extern "C" ARM int func_02054464(char* arg0, SafeAllocator* arg1, char* arg2) {
    int var0;
    unsigned int var1;
    void* var2;

    arg1->Reset();
    func_0207df50((struct Struct_0203d028*)arg2);
    func_0207df90(arg2);

    for (var0 = 0; var0 < 10; var0++) {
        var1 = data_020e7c18[var0];
        if (var1 != 0) {
            var2 = arg1->Allocate(var1);
            ((SafeAllocator*)(arg0 + 4 + var0 * 0x14))->CreateTypeA(var2, var1);
            func_0207de48(arg0 + 0xcc + var0 * 0x70, data_020e7d30[var0].unknown_0_, data_020e7d34[var0].unknown_0_);
        } else {
            ((SafeAllocator*)(arg0 + 4 + var0 * 0x14))->ResetAllocatorPointer();
        }
    }

    func_0207de48(arg0 + 0x168 + 0x400, 0x240, 0x20);
    func_0207dfac(arg2);

    var2 = arg1->Allocate(0x2000);
    ((SafeAllocator*)(arg0 + 0x12c + 0x400))->CreateTypeA(var2, 0x2000);

    var2 = arg1->Allocate(0x5400);
    ((SafeAllocator*)(arg0 + 0x540))->CreateTypeA(var2, 0x5400);

    var2 = arg1->Allocate(0x1000);
    ((SafeAllocator*)(arg0 + 0x154 + 0x400))->CreateTypeA(var2, 0x1000);

    var2 = arg1->Allocate(0xc00);
    ((SafeAllocator*)(arg0 + 0x1d8 + 0x400))->CreateTypeA(var2, 0xc00);
}
