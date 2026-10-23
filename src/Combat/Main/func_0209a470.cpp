#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0209a470 {
    void* unknown_0_;
};
extern struct Struct_0209a470* data_02109ba4;
extern char data_020f15e8[];

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

// USA: func_0209a470
extern "C" ARM void func_0209a470(struct Struct_0209a470* arg0, SafeAllocator* arg1, struct Struct_02013fb4* arg2, int arg3) {
    void* var0 = arg1->Allocate(0xd74);
    arg0->unknown_0_ = var0;
    if (var0 != NULL) {
        char var1[0x430];
        data_02109ba4 = arg0;
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)((struct Struct_0201f040*)var1))->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f15e8);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(arg2, arg3);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
        data_02109ba4 = NULL;
    }
}
