#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov017_021c3194_92 = 0x28, Enum_ov017_021c3194_6578 = 0x17e2, Enum_ov017_021c3194_2456 = 0x868 };
#else
enum { Enum_ov017_021c3194_92 = 0x5c, Enum_ov017_021c3194_6578 = 0x19b2, Enum_ov017_021c3194_2456 = 0x998 };
#endif

struct Struct_ov017_021c3194_2 {
    char unknown_0_[0x10];
    void* unknown_10_;
    char unknown_14_[Enum_ov017_021c3194_92 - 0x14];
    char* unknown_5c_;
    char unknown_60_[Enum_ov017_021c3194_2456 - Enum_ov017_021c3194_92 - sizeof(char*)];
    int unknown_998_;
    char unknown_99c_[Enum_ov017_021c3194_6578 - Enum_ov017_021c3194_2456 - sizeof(int)];
    unsigned char unknown_19b2_;
};

extern "C" Struct_ov017_021c3194_2* func_020421a0(void);
extern "C" void func_020531f0(void* arg0);
struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
extern "C" void func_02046380(void* arg0);
extern "C" int func_020e51cc(int arg0);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" void func_020e4bf4(void* arg0, int arg1);
#if !defined(jpn)
extern "C" void func_0204500c(void*, const char*, int, int);
#endif
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
extern char data_ov017_021d882c[];
#endif
extern "C" void func_020397c0(void* arg0);

struct Struct_ov017_021c3194 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

// USA: func_ov017_021c3194
extern "C" ARM void func_ov017_021c3194(Struct_ov017_021c3194* arg0) {
    GameState* var0 = GameState::GetInstance();
    GetGameResources();
    GameObject* var1 = var0->GetUnknownGameObject();
    GameObject* var2 = var0->GetPartyMemberByIndex(arg0->unknown_9_);
    Struct_ov017_021c3194_2* var3 = func_020421a0();

    if (var2 == NULL) {
        arg0->unknown_8_ = 2;
    }

    unsigned char var4 = arg0->unknown_8_;
    if (var4 == 0) {
        if (var1 != NULL) {
            func_020531f0(var1);
            func_020397cc((struct Struct_02018300_3*)var1, 1);
        }
        func_02046380(var3);
        char* var5 = var3->unknown_5c_;
#if defined(jpn)
        sprintf(var5, data_ov017_021d882c, (char*)var2->baseStats_);
        func_0204500c(var3, var5, 0);

#else
        sprintf(var5, (const char*)func_020e51cc(0x25));
        char var6[0xc];
        func_020e4bf4(var6, arg0->unknown_9_);
        var3->unknown_10_ = var6;
        func_0204500c(var3, var5, 0, 0xe3);

#endif
        var3->unknown_19b2_ = 0;
        var3->unknown_998_ = 1;
        arg0->unknown_8_ = 1;
        return;
    }
    if (var4 == 1) {
        if (var3->unknown_998_ == 0) {
            arg0->unknown_8_ = 2;
        }
        return;
    }
    if (var4 == 2) {
        func_020397c0(var1);
        arg0->unknown_1_ = 1;
    }
}
