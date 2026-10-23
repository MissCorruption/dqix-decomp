#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_02069234;

struct Struct_02069234_2 {
    void* unknown_0_;
    char* unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int : 28;
    char unknown_c_[0xc];
    short unknown_18_;
};

struct Struct_02000c9c_23 {
    char unknown_0_[0x294];
    Struct_02069234_2 unknown_294_;
    Struct_02069234_2* inline_02069234() { return &unknown_294_; }
};

struct Struct_02069234_4 {
    char unknown_0_[0x150];
    Struct_02000c9c_23* unknown_150_;
};

struct Struct_02069234 {
    void* unknown_0_[2];
    void* unknown_8_[2];
    void* unknown_10_[2];
    void* unknown_18_[2];
    void* unknown_20_[2];
    void* unknown_28_;
    void* unknown_2c_;
    char unknown_30_[0x37c];
    char unknown_3ac_[0x14d4];
    signed char unknown_1880_;
};

extern "C" char* func_020424ac(char* arg0);
extern "C" int func_020d857c(signed char* arg0, signed char* arg1);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_02005a94(void* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" char* func_020e4958(char** arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);

typedef void (*Type_02000c9c_14)(char* tag, char** dst, Struct_02069234* sb, int index);

struct Struct_020e7e8c {
    char* unknown_0_;
    Type_02000c9c_14 unknown_4_;
};

struct Struct_02069234_3 {
    char* unknown_0_;
    signed char unknown_4_;
    signed char unknown_5_;
    char unknown_6_[2];
};

struct Struct_020e7f04 {
    Struct_02069234_3 unknown_0_[16];
};

extern Struct_020e7e8c data_020e7e8c[];
extern Struct_020e7f04 data_020e7f04;
extern char data_020f0904[4];
extern char data_020f0909[6];
extern char data_020f0910[];

// USA: func_02069234
extern "C" ARM void func_02069234(Struct_02069234* arg0, char* arg1, char* arg2) {
    char* var0;
    if (arg1 == 0 || arg2 == 0) {
        return;
    }
    var0 = arg2;

    for (;;) {
        char var1 = *arg1;
        if (var1 == 0) {
            break;
        }
        if (var1 == '<') {
            char* var2 = func_020424ac(arg1);
            if (var2 == 0) {
                goto copy_char;
            }
            int var3 = 0;
            char* var4 = arg1 + 1;
            struct Struct_020e7e8c* var5 = data_020e7e8c;
            for (; var5->unknown_0_ != 0; var5++) {
                if (!func_020d857c((signed char*)var4, (signed char*)var5->unknown_0_)) {
                    continue;
                }
                if (var5->unknown_4_ != 0) {
                    int var6 = 0;
                    int var7 = func_020d2ff0(var5->unknown_0_);
                    signed char var8 = var4[var7];
                    if (var8 >= '1' && var8 <= '9') {
                        var6 = func_02005a94(var4 + var7) - 1;
                    }
                    var5->unknown_4_(var4, &var0, arg0, var6);
                }
                arg1 = var2 + 1;
                var3 = 1;
                break;
            }
            if (var3) {
                continue;
            }

            int var9;
            int var10;
            int var11;
            int var12;
            var12 = var11 = var9 = -1;
            void* var13;
            var10 = 0;
            var13 = 0;
            struct Struct_020e7f04 var14 = data_020e7f04;
            var3 = 0;
            struct Struct_02069234_3* var15 = var14.unknown_0_;
            for (;;) {
                char* var16 = var15->unknown_0_;
                if (var16 == 0) {
                    break;
                }
                int var17 = func_020d2ff0(var16);
                if (func_02001aec(var4, var16, var17) == 0) {
                    var3 = 1;
                    var4 += var17;
                    int var18 = 0;
                    if (var15->unknown_5_ < 0) {
                        signed char var19 = *var4;
                        if (var19 >= '1' && var19 <= '9') {
                            var18 = func_02005a94(var4) - 1;
                        }
                    }
                    switch (var15->unknown_4_) {
                        case 0: var9 = var15->unknown_5_; break;
                        case 1: var10 = var15->unknown_5_; break;
                        case 2: var11 = var15->unknown_5_; break;
                        case 3: var12 = var15->unknown_5_; break;
                        case 4: var13 = arg0->unknown_18_[var18]; break;
                        case 5: var13 = arg0->unknown_20_[var18]; break;
                        case 6: var13 = arg0->unknown_0_[var18]; break;
                        case 7: var13 = arg0->unknown_10_[var18]; break;
                        case 8: var13 = arg0->unknown_8_[var18]; break;
                        case 9: var13 = arg0->unknown_2c_; break;
                    }
                }
                var15++;
            }

            if (var13 != 0) {
                var0 = func_020e4958(&var0, var13, var9, var10, var11, var12);
            }
            if (!var3) {
                goto copy_char;
            }
            arg1 = var2 + 1;
            continue;
        }
        if (var1 == '[') {
            if (func_02001aec(arg1, data_020f0904, 4) == 0) {
                arg1 += 4;
                GameState* var20 = GameState::GetInstance();
                Struct_02069234_4* var21 = (Struct_02069234_4*)func_0200ff1c(var20, arg0->unknown_1880_);
                if (var21 != 0) {
                    Struct_02069234_2* var22 = var21->unknown_150_->inline_02069234();
                    if (var22 != 0) {
                        if (var22->unknown_18_ > 0) {
                            if (var22->unknown_8_0_ == 0) {
                                var0 += sprintf(var0, var22->unknown_4_);
                            }
                        }
                    }
                }
                goto skip_bracket;
            }
            if (func_02001aec(arg1, data_020f0909, 6) == 0) {
                arg1 += 6;
                var0 += sprintf(var0, arg0->unknown_3ac_);
                goto skip_bracket;
            }
            *var0 = var1;
            var0++;
            arg1++;
            continue;
        }
        goto copy_char;
    skip_bracket:
        while (*arg1 != ']' && *arg1 != 0) {
            arg1++;
        }
        if (*arg1 == 0) {
            var0 += sprintf(var0, data_020f0910);
            break;
        }
        arg1++;
        continue;
    copy_char:
        *var0 = *arg1++;
        var0++;
    }
    *var0 = 0;
}
