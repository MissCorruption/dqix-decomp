#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_020a7f88;
extern "C" void func_020a810c(Struct_020a7f88* arg0);
extern "C" void func_020a8128(unsigned char* arg0);

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_0201c3a4 { int unknown_0_; void* unknown_4_; };

struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

extern "C" int func_020d2ff0(const char* arg0);

struct Struct_020a825c { unsigned int unknown_0_[4]; };
struct Struct_020a7f88_2 {
    unsigned char unknown_0_, unknown_1_, unknown_2_, unknown_3_;
    unsigned int unknown_4_;
    Struct_020a825c unknown_8_;
    unsigned short unknown_18_, unknown_1a_, unknown_1c_, unknown_1e_;
    unsigned int unknown_20_, unknown_24_, unknown_28_;
};
struct Struct_020a825c_2 { Struct_020a7f88_2* unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
extern "C" void func_020a825c(Struct_020a825c_2* arg0, Struct_020a7f88_2* arg1);

struct Struct_02109fe0_2 { SafeAllocator* unknown_0_; Struct_020a825c_2* unknown_4_; };
extern Struct_02109fe0_2 data_02109fe0;
extern const char data_020f1b94;

// USA: func_020a7f88
extern "C" ARM int func_020a7f88(unsigned char* arg0) {
    Struct_020a7f88_2 var0;
    func_020a810c((Struct_020a7f88*)&var0.unknown_8_);
    func_020a8128((unsigned char*)&var0);
    func_020a8128((unsigned char*)&var0);

    var0.unknown_0_ = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)arg0))->ToInt();
    var0.unknown_2_ = (unsigned char)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x8)))->ToInt();
    char* var1 = (char*)(void*)((Script::Parameter*)((Struct_0201c3a4*)(arg0 + 0x10)))->ToString();
    var0.unknown_18_ = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x18)))->ToInt();

    char* var2 = (char*)&var0.unknown_8_;
    *(short*)(var2 + 0) = (short)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x20)))->ToInt();
    *(short*)(var2 + 2) = (short)(int)(((Script::Parameter*)((Struct_0201d530*)(arg0 + 0x28)))->ToFloat() * 4096.0f);
    *(int*)(var2 + 4) = (int)(((Script::Parameter*)((Struct_0201d530*)(arg0 + 0x30)))->ToFloat() * 4096.0f);
    *(int*)(var2 + 8) = (int)(((Script::Parameter*)((Struct_0201d530*)(arg0 + 0x38)))->ToFloat() * 4096.0f);
    *(int*)(var2 + 0xc) = (int)(((Script::Parameter*)((Struct_0201d530*)(arg0 + 0x40)))->ToFloat() * 4096.0f);

    var0.unknown_1a_ = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x48)))->ToInt();
    var0.unknown_1c_ = (unsigned short)((Script::Parameter*)((Struct_0201c1c8*)(arg0 + 0x50)))->ToInt();

    var0.unknown_20_ = (unsigned int)(int)(((Script::Parameter*)((Struct_0201d530*)(arg0 + 0x58)))->ToFloat() * 4096.0f);
    var0.unknown_24_ = (unsigned int)(int)(((Script::Parameter*)((Struct_0201d530*)(arg0 + 0x60)))->ToFloat() * 4096.0f);

    int var3 = func_020d2ff0(var1);
    var0.unknown_4_ = (unsigned int)data_02109fe0.unknown_0_->Allocate(var3 + 1);
    sprintf((char*)var0.unknown_4_, &data_020f1b94, var1);
    ((char*)var0.unknown_4_)[var3] = 0;

    func_020a825c(data_02109fe0.unknown_4_, &var0);
    return 1;
}
