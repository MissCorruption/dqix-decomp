#include "GameState/GameState.h"
#include <globaldefs.h>

extern "C" void *func_0202ae18(void);
extern "C" void func_ov002_02153e90(void *arg0);
extern "C" int func_ov002_02154a6c(void *arg0, int arg1, int arg2);
extern "C" int func_ov002_02154b94(void *arg0, int arg1);
extern "C" GameObject *func_0200ff1c(GameState *arg0, int arg1);
extern "C" short func_02084a64(void *arg0, int arg1);
extern "C" void func_02083e28(void *arg0, int arg1);
extern "C" int func_0202b7d8(int *arg0);
extern "C" void func_ov017_021cf078(int arg0, unsigned char arg1, int arg2);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov002_021546c8 {
    unsigned char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    char unknown_4_[2];
};

struct Struct_ov002_021546c8_2 {
    short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    signed char unknown_4_[4];
    struct Struct_ov002_021546c8 unknown_8_[4];
    struct Struct_ov002_021546c8 unknown_20_[4];
};

// USA: func_ov002_021546c8
extern "C" ARM int func_ov002_021546c8(void *arg0, struct Struct_ov002_021546c8_2 *arg1, void *arg2, int arg3) {
#if defined(jpn)
    enum { Enum_ov002_021546c8_336 = 0x144, Enum_ov002_021546c8_2384 = 0x8b8 };
#else
    enum { Enum_ov002_021546c8_336 = 0x150, Enum_ov002_021546c8_2384 = 0x950 };
#endif
    if (arg1 == NULL) return 0;
    if (arg2 == NULL) return 0;

    GameState *var0              = GameState::GetInstance();
    void *var1                    = func_0202ae18();
    int var2                    = 0;
    struct Struct_ov002_021546c8 *var3 = arg1->unknown_8_;
    if (arg3) var3 = arg1->unknown_20_;

    int var4;
    for (var4 = 0; var4 < 4; var4++) {
        func_ov002_02153e90(&var3[var4]);
    }

    for (var4 = 0; var4 < arg1->unknown_3_; var4++) {
        struct Struct_ov002_021546c8 *var5 = &var3[var4];
        int var6                  = arg1->unknown_4_[var4];
        if (!func_ov002_02154a6c(arg0, var6, arg1->unknown_2_)) {
            var5->unknown_0_ = 1;
            continue;
        }
        if (func_ov002_02154b94(arg0, var6)) {
            var5->unknown_0_ = 2;
            continue;
        }
        GameObject *var7 = func_0200ff1c(var0, var6);
        if (var7 == NULL) continue;
        var5->unknown_2_ = func_02084a64(*(void **) ((char *) var7 + Enum_ov002_021546c8_336), arg1->unknown_0_);
        if (var5->unknown_2_ <= 0) continue;
        var5->unknown_0_ = 3;
        func_02083e28(*(void **) ((char *) var7 + Enum_ov002_021546c8_336), 0);
        if (func_0202b7d8((int *) var1)) {
            func_ov017_021cf078(var6, *(int *) (*(char **) ((char *) var7 + Enum_ov002_021546c8_336) + Enum_ov002_021546c8_2384) & 0xff, 1);
            func_ov017_021c9e00(var6, 0, 0, 1);
        }
        var2 = 1;
    }
    return var2;
}
