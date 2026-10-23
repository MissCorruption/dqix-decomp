#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

namespace {
struct Struct_ov023_021e8604 {
    unsigned char unknown_0_[0x4c];
    Struct_0201099c_3 unknown_4c_;
    unsigned char unknown_54_[0x5d8 - 0x54];
    char* unknown_5d8_;
};
}

extern "C" void* func_02010828(GameState* arg0);
extern "C" int func_020421a0(void);

struct Struct_020465c0;
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

#if defined(jpn)
extern "C" void func_020474a8(void* arg0, unsigned char arg1, const char* arg2, char* arg3);
#else
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
#endif

struct Struct_ov023_021e8604_2 { char unknown_0_[0xf74]; int unknown_f74_; };

// USA: func_ov023_021e8604
// JPN: func_ov023_021e8574
extern "C" ARM void func_ov023_021e8604(void* arg0) {
    Struct_ov023_021e8604* var0 = static_cast<Struct_ov023_021e8604*>(arg0);
    GameState* var1 = GameState::GetInstance();
    Struct_ov023_021e8604_2* var2 = static_cast<Struct_ov023_021e8604_2*>(func_02010828(var1));
    int var3 = func_020421a0();
    func_020465c0((struct Struct_020465c0*)var3, 0, var2->unknown_f74_);
    func_020465d8((unsigned char*)var3, 0, 1);
    func_020465f0((unsigned char*)var3, 0, 0xa);
    int var4 = func_020e0434(&var0->unknown_4c_, 2);
#if defined(jpn)
    func_020474a8(((void*)(var3)), 0xa, ((const char*)(var4)), var0->unknown_5d8_);
#else
    func_02046608(var3, 0xa, ((void*)(var4)), var0->unknown_5d8_, 0x100, 0, 0);
#endif
}
