#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"
#include "Resource/CharacterCreationUI.h"

#if defined(jpn)
enum { Enum_ov002_0215bf34_3784 = 0xe20, Enum_ov002_0215bf34_7120 = 0x1a98, Enum_ov002_0215bf34_2400 = 0x800, Enum_ov002_0215bf34_41 = 44 };
#else
enum { Enum_ov002_0215bf34_3784 = 0xec8, Enum_ov002_0215bf34_7120 = 0x1bd0, Enum_ov002_0215bf34_2400 = 0x960, Enum_ov002_0215bf34_41 = 41 };
#endif

namespace {
struct Struct_ov002_0215bf34 {
    unsigned char unknown_0_[Enum_ov002_0215bf34_3784];
    Struct_ov023_021d9c7c unknown_ec8_;
    unsigned char unknown_f84_[Enum_ov002_0215bf34_7120 - Enum_ov002_0215bf34_3784 - sizeof(Struct_ov023_021d9c7c)];
    char* unknown_1bd0_;
};

struct Struct_ov002_0215bf34_2 {
    unsigned char unknown_0_[0xf6c];
    int unknown_f6c_;
};
}

struct Struct_020465c0;
extern "C" int func_020421a0();
extern "C" void func_020465c0(Struct_020465c0*, int, int);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" int func_020e51cc(int);
extern "C" void func_ov002_0215be00(void*, int, short, short);
extern "C" void func_02046380(void*);
extern "C" void func_0205d0e0(void*, int);
#if defined(jpn)
extern const char data_ov002_0216d908[];
extern "C" void func_020474a8(void*, unsigned char, const char*, char*);
#else
extern "C" void func_02046608(void*, int, int, int, int, int, int);
#endif
extern "C" void func_0205d304(void*, const char*, int, unsigned char, unsigned char, unsigned char, void*
#if !defined(jpn)
                            , unsigned char
#endif
);

// USA: func_ov002_0215bf34
// JPN: func_ov002_0215d060
extern "C" ARM void func_ov002_0215bf34(char* arg0) {
    Struct_ov002_0215bf34* var0 = ((Struct_ov002_0215bf34*)(arg0));
    func_ov002_0215be00(var0, Enum_ov002_0215bf34_41, 0x15, 0x15);

    Struct_ov002_0215bf34_2* var1 = static_cast<Struct_ov002_0215bf34_2*>(func_02010828(GameState::GetInstance()));
    Struct_020465c0* var2 = ((Struct_020465c0*)(func_020421a0()));
    func_02046380(var2);
    func_020465c0(var2, 0, var1->unknown_f6c_);
    unsigned char* var3 = ((unsigned char*)(var2));
    func_020465d8(var3, 0, 1);
    func_020465f0(var3, 0, 7);
    memset(var0->unknown_1bd0_, 0, Enum_ov002_0215bf34_2400);
#if defined(jpn)
    func_020474a8(var2, 8, data_ov002_0216d908, var0->unknown_1bd0_);
#else
    int var4 = func_020e51cc(0x3f1);
    func_02046608(var2, 8, var4, ((int)(var0->unknown_1bd0_)), 0x100, 0, 0);
#endif
    func_0205d304(&var0->unknown_ec8_, var0->unknown_1bd0_, 0, 0, 0,
#if defined(jpn)
                 1, 0);
#else
                 0, 0, 0);
#endif
    func_0205d0e0(&var0->unknown_ec8_, 4);
}
