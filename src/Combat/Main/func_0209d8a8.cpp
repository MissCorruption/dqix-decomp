#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0209d8a8_1816 = 0x508 };
#else
enum { Enum_0209d8a8_1816 = 0x718 };
#endif

#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" void* func_0209dccc();
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_ov017_021b8468(int arg0);
extern "C" void* func_ov000_02160f08(void* arg0);
extern "C" void* func_020de824(void* arg0);
extern "C" void func_0207cbe8(char* arg0);

struct Struct_0201099c_10;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);

struct Struct_0207ccf0_4;
extern "C" int func_0207d200(struct Struct_0207ccf0_4* arg0, short arg1, int arg2);

struct Struct_0209d8a8 {
    char unknown_0_[0x2c];
    struct Struct_0201099c_10* unknown_2c_;
    void* unknown_30_;
    char unknown_34_[4];
};

struct Struct_0209d8a8_2 {
    char unknown_0_[0x90];
    int unknown_90_;
    int unknown_94_;
};

// USA: func_0209d8a8
extern "C" ARM int func_0209d8a8(void* arg0) {
    Struct_0209d8a8 var0;
    int var1;
    int var2;
    func_02010828(GameState::GetInstance());
    Struct_0209d8a8_2* var3 = (Struct_0209d8a8_2*)func_0209dccc();
    if (var3 == NULL) {
        return 0;
    }
    var1 = func_ov017_021d60f4(arg0);
    var2 = func_ov017_021d60f4((char*)arg0 + 8);
    void* var4 = GetGameResources();
    int var5 = *(int*)((char*)var4 + 0x3000 + Enum_0209d8a8_1816);
    void* var6 = func_ov017_021b8468(var5);
    if (var6 == NULL) {
        return 1;
    }
    void* var7 = func_ov000_02160f08(var6);
    if (var7 == NULL) {
        return 1;
    }
    struct Struct_0201099c_10* var8 = (struct Struct_0201099c_10*)((char*)var7 + 0xd0);
    ((SafeAllocator*)&var0)->ResetAllocatorPointer();
    func_020de824(var0.unknown_0_ + 0x14);
    func_0207cbe8(var0.unknown_0_);
    if (func_020dedd0(var8, (short)var1) != NULL) {
        var0.unknown_2c_ = var8;
        func_0207d200((struct Struct_0207ccf0_4*)&var0, var1, (char)var2);
    }
    var3->unknown_90_ = var1;
    var3->unknown_94_ = var2;
    return 1;
}
