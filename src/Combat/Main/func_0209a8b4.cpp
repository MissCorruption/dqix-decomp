#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_02086f24_6 {
    void* unknown_0_;
};
extern struct Struct_02086f24_6* data_02109ba8;
extern char data_020f1640[];

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

// USA: func_0209a8b4
extern "C" ARM void func_0209a8b4(struct Struct_02086f24_6* arg0, SafeAllocator* arg1, struct Struct_02013fb4* arg2, int arg3) {
    void* var0 = arg1->Allocate(0x550);
    arg0->unknown_0_ = var0;
    if (var0 != NULL) {
        memset(var0, 0, 0x550);
        char var1[0x430];
        data_02109ba8 = arg0;
        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)((struct Struct_0201f040*)var1))->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f1640);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(arg2, arg3);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
        data_02109ba8 = NULL;
    }
}
