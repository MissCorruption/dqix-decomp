#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#include <std_library_functions.h>
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov001_0215657c_2 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[0xa];
    unsigned short unknown_16_;
    unsigned short unknown_18_;
#if defined(jpn)
    char unknown_1a_[0x76];
#else
    char unknown1_1a_[0x7a];
#endif
    int unknown_94_;
    char unknown_98_[0xba];
    unsigned short unknown_152_;
    unsigned short unknown_154_;
    unsigned short unknown_156_;
    unsigned short unknown_158_;
};
#if defined(jpn)
struct Struct_02046574_2 {
    char unknown_0_[0x868];
    int unknown_998_;
    char unknown_86c_[0xf76];
    unsigned char unknown_19b2_;
    char unknown_17e3_[0xb];
    unsigned char unknown_19be_;
};
extern const char data_ov001_021661e8[];
#else
struct Struct_02046574_2 {
    char unknown_0_[0x998];
    int unknown_998_;
    char unknown_99c_[0x1016];
    unsigned char unknown_19b2_;
    char unknown_19b3_[0xb];
    unsigned char unknown_19be_;
};
#endif
struct Struct_02070900 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_02070900_2;
struct Struct_020707c8;
struct Struct_ov001_0215657c { char unknown_0_[0x8c]; unsigned char unknown_8c_[1]; };
extern "C" char* func_020100f8(char*);
extern "C" Struct_ov001_0215657c* func_0205ec34();
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" unsigned short* func_02012fe4();
extern "C" Struct_02046574_2* func_020421a0();
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" int func_020e51cc(int);
extern "C" void func_02046608(Struct_02046574_2*, int, int, char*, int, int, int);
#if defined(jpn)
extern "C" void func_0204500c(Struct_02046574_2*, char*, int);
#else
extern "C" void func_0204500c(Struct_02046574_2*, char*, int, int);
#endif
void SetMainBrightness(GameResources*, int, int);
extern "C" Struct_02070900_2* func_020704fc();
extern "C" void func_02070900(Struct_02070900_2*, Struct_02070900*, unsigned int);
extern "C" void func_020707c8(Struct_020707c8*);
extern "C" void func_0209c2e0(void*, int, int);
extern "C" void func_02046a8c(void*, void*);
extern "C" void func_ov017_021bb0c4(unsigned char*);
void SetBrightness(GameResources*, int, int);
extern "C" void func_020a2794(void*);
extern "C" void func_020a2718(char*);
extern "C" void func_ov017_021bb27c(void*);
extern int data_02109bf4 __attribute__((aligned(4)));

// USA: func_ov001_0215657c
extern "C" ARM int func_ov001_0215657c(Struct_ov001_0215657c_2* arg0, void* arg1) {
    if (BackgroundLoader::GetInstance()->GetNumQueuedTasks() > 0) return arg0->unknown_a_;
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    var0->GetUnknownGameObject();
    char* var2 = func_020100f8((char*)var0);
    int var3 = 0;
    int var4 = 0;
    void* var5 = var1->unknown_ptr_3718;
    if (arg0->unknown_16_ == arg0->unknown_152_) var3 = 1;
    else if (arg0->unknown_18_ == arg0->unknown_158_) var3 = 1;
    else {
        Struct_ov001_0215657c* var6 = func_0205ec34();
        if (func_0206dfb0((int)var6, var6->unknown_8c_, arg0->unknown_154_ + 0x38e)) var3 = 1;
        else if (arg0->unknown_156_ == *func_02012fe4()) var4 = 1;
    }
    if (var3) {
        GameState* var7 = GameState::GetInstance();
        GameResources* var8 = GetGameResources();
        Struct_02046574_2* var9 = func_020421a0();
        GameObject* var10 = func_0200ff1c(var7, 0);
        if (var10) {
            char* var11 = (char*)var10->baseStats_;
#if defined(jpn)
            char var12[0x50];
            sprintf(var12, data_ov001_021661e8, var11);
            func_0204500c(var9, var12, 0);
#else
            func_02046574(var9, 0, var11);
            char var13[0x100];
            int var14 = func_020e51cc(0x34);
            func_02046608(var9, 12, var14, var13, 0xe3, 0, 1);
            func_0204500c(var9, var13, 0, 0xe3);
#endif
            var9->unknown_998_ = 1;
            var9->unknown_19b2_ = 0;
            var9->unknown_19be_ = 1;
        }
        SetMainBrightness(var8, 0, 1);
        Struct_02070900_2* var15 = func_020704fc();
        Struct_02070900 var16 = {};
        func_02070900(var15, &var16, 0);
        func_020707c8((Struct_020707c8*)var15);
        return 5;
    }
    if (var4) {
        arg0->unknown_8_ = arg0->unknown_152_;
        func_0209c2e0(&data_02109bf4, arg0->unknown_94_, 0);
        func_02046a8c(arg1, var5);
        func_ov017_021bb0c4((unsigned char*)arg0);
        return 0;
    }
    SetBrightness(var1, 0, 30);
    func_020a2794(var2);
    func_020a2718(var2);
    func_0209c2e0(&data_02109bf4, arg0->unknown_94_, 0);
    func_ov017_021bb27c(arg0);
    arg0->unknown_1_ = 1;
    func_02046a8c(arg1, var5);
    return arg0->unknown_a_;
}
