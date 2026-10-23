#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Combat/Main/BattleList.h>

struct Struct_0205c508;
struct Struct_0201099c_3;
struct Struct_0201099c_10;
struct Struct_02054000;
struct Struct_ov000_0217831c {
    unsigned int unknown_0_;
    const char* unknown_4_;
};
struct Struct_ov000_0217831c_2 {
    unsigned char unknown_0_[0x18];
    short unknown_18_;
};

struct Struct_ov000_0217831c_3 {
    unsigned char unknown_0_[0x26];
    short unknown_26_[37];
    signed char unknown_70_[0x48];
    unsigned char unknown_b8_[0x48];
    unsigned char unknown_100_[0xdc];
#if defined(jpn)
    unsigned char unknown_1dc_[0x1dc7];
#else
    unsigned char unknown_1dc_[0x1b8f];
#endif
    signed char unknown_1d6b_;
    unsigned char unknown_1d6c_[3];
    signed char unknown_1d6f_;
};

extern "C" void func_0205c508(struct Struct_0205c508* arg0, int* arg1, int* arg2);
extern "C" const char* func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" struct Struct_ov000_0217831c_2* func_02054000(struct Struct_02054000* arg0);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" struct Struct_ov000_0217831c* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void func_0206819c(const char* arg0, char* arg1, int arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
#if defined(jpn)
extern "C" int func_02042158(char* arg0, int arg1);
#define func_02041acc func_02042158
#else
extern "C" int func_02041acc(char* arg0, int arg1);
#endif
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" void __clear(void* arg0, unsigned int arg1);

// USA: func_ov000_0217831c
extern "C" ARM void func_ov000_0217831c(Struct_ov000_0217831c_3* arg0, char* arg1)
{
    int var0;
    int var1;
    func_0205c508((struct Struct_0205c508*)arg0->unknown_1dc_, &var0, &var1);
    signed char var2 = var0;
    signed char var3 = var1;
    struct Struct_0201099c_3* var4 = (struct Struct_0201099c_3*)arg0->unknown_b8_;
    const char* var5 = func_020e0434(var4, 0);
    signed char var6 = arg0->unknown_1d6f_;
    const char* var7 = func_020e0434(var4, 5);
    int var8 = 0;
    signed char var9 = arg0->unknown_70_[arg0->unknown_1d6b_];
    int var10 = -1;
    GameState* var11 = GameState::GetInstance();
    GameObject* var12 = func_0200ff1c(var11, var9);
    struct Struct_ov000_0217831c_2* var13 = func_02054000((struct Struct_02054000*)var12);
    if (var13 != NULL) {
        var10 = var13->unknown_18_;
    }
    if (func_ov000_0217542c(arg0)) {
        func_02041c08(arg1, var6 - var2, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var6 - var2);
    for (signed char var14 = var2; var14 < var3; var14++) {
        char var15[0x40];
        __clear(var15, sizeof(var15));
        int var16 = arg0->unknown_26_[var14];
        struct Struct_ov000_0217831c* var17 = func_020dedd0((struct Struct_0201099c_10*)arg0->unknown_100_, var16);
        const char* var18 = var7;
        if (var17 != NULL) {
#if defined(jpn)
            var18 = var17->unknown_4_;
#else
            char var19[0x100];
            __clear(var19, sizeof(var19));
            func_0206819c(var17->unknown_4_, var19, 0);
            var18 = var19;
#endif
        }
        if (var10 == var16) {
            func_02042058(var15, func_020e0434(var4, 0x13));
#if !defined(jpn)
            func_02041acc(var15, 3);
#endif
        } else {
            func_02041acc(var15, 8);
        }
        func_02042058(var15, var18);
        func_02041b70(arg1, var8, var15);
        if (var14 != var3 - 1) {
            func_02042058(arg1, var5);
        }
        var8++;
    }
}
