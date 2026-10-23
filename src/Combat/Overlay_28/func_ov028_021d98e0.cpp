#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_02013fb4;
struct Struct_0201f040_2;

struct Struct_0201f040_3;

struct Struct_ov028_021d9ac0 { unsigned int unknown_0_; int unknown_4_; };
struct Struct_ov028_021d98e0 { int unknown_0_; struct Struct_ov028_021d9ac0* unknown_4_; };

struct Struct_ov028_021d9bc4_3 {
    void* unknown_0_;
    SafeAllocator* unknown_4_;
};
extern Struct_ov028_021d9bc4_3 data_ov028_021d9bc4;
extern struct Struct_ov028_021d9ac0 data_ov028_021d9ac0;

struct Struct_ov028_021d98e0_2 {
    char unknown_0_[4];
    int unknown_4_;
    short unknown_8_;
};

// USA: func_ov028_021d98e0
extern "C" ARM void func_ov028_021d98e0(Struct_ov028_021d98e0_2* arg0, SafeAllocator* arg1, struct Struct_02013fb4* arg2, int arg3) {
    char var0[0x430];
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    data_ov028_021d9bc4.unknown_4_ = arg1;
    data_ov028_021d9bc4.unknown_0_ = arg0;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_ov028_021d98e0*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov028_021d9ac0);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
