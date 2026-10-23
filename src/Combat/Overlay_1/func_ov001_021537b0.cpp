#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201f040;
struct Struct_0201f040_2;
struct Struct_02013fb4;
struct Struct_0201f040_3;

struct Struct_ov001_02165800_3 { int unknown_0_; SafeAllocator* unknown_4_; void* unknown_8_; };
extern Struct_ov001_02165800_3 data_ov001_02165800;
extern int data_ov001_02164b80;
extern int data_ov001_02164b90;

struct Struct_ov001_021537b0 { int unknown_0_; int unknown_4_; };

// USA: func_ov001_021537b0
extern "C" ARM void func_ov001_021537b0(Struct_ov001_021537b0* arg0, SafeAllocator* arg1, struct Struct_02013fb4* arg2, int arg3) {
    char var0[0x430];
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    data_ov001_02165800.unknown_0_ = 0;
    data_ov001_02165800.unknown_4_ = arg1;
    data_ov001_02165800.unknown_8_ = arg0;

    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov001_02164b80);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();

    arg0->unknown_4_ = data_ov001_02165800.unknown_0_;
    data_ov001_02165800.unknown_0_ = 0;
    void* var1 = arg1->Allocate(arg0->unknown_4_ * 8);
    arg0->unknown_0_ = (int)var1;
    if (var1 == NULL) {
        arg0->unknown_4_ = 0;
        return;
    }

    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov001_02164b90);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
