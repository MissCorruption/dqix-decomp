#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void __clear(void*, int);
extern "C" char* func_020424ac(char* arg0);
extern "C" int func_020d85dc(const char* arg0, const char* arg1);
extern "C" char* func_02068e1c(char* arg0, char* arg1, char* arg2, char* arg3);
extern "C" ARM void func_02068ea0(signed char* arg0, char* arg1);

extern char data_020e833c[];
extern char data_020f08ff[];

struct Struct_02068f40 {
    signed char unknown_0_[4];
    signed char unknown_4_[4];
    signed char unknown_8_[4];
    signed char unknown_c_[4];
    int (*unknown_10_)(void*, void*, int);
};

// USA: func_02068f40
extern "C" ARM int func_02068f40(void* arg0, char* arg1, char* arg2, int arg3) {
    char var0[0x30];
    char var1[0x30];
    char var2[0x30];
    char var3[0x30];
    void* var4 = GameState::GetInstance();
    for (;;) {
        char var5 = *arg1;
        if (var5 == 0) {
            break;
        }
        if (var5 == '<' && func_020d85dc(arg1, data_020f08ff) != 0
            && func_020424ac(arg1) != 0) {
            char* var6 = arg1;
            Struct_02068f40* var7 = (Struct_02068f40*)data_020e833c;
            while (var7->unknown_10_ != 0) {
                __clear(var0, 0x30);
                func_02068ea0(var7->unknown_0_, var0);
                if (func_020d85dc(arg1, var0) != 0) {
                    int var8 = var7->unknown_10_(var4, arg0, arg3);
                    __clear(var1, 0x30);
                    __clear(var2, 0x30);
                    __clear(var3, 0x30);
                    func_02068ea0(var7->unknown_4_, var1);
                    func_02068ea0(var7->unknown_8_, var2);
                    func_02068ea0(var7->unknown_c_, var3);
                    switch (var8) {
                    case 0:
                        arg1 = func_02068e1c(arg1, var0, var1, var3);
                        break;
                    case 1:
                        if (var2[0] != 0) {
                            arg1 = func_02068e1c(arg1, var1, var2, var3);
                        } else {
                            arg1 = func_02068e1c(arg1, var1, var3, var3);
                        }
                        break;
                    case 2:
                        arg1 = func_02068e1c(arg1, var2, var3, var3);
                        break;
                    default:
                        arg1 = func_02068e1c(arg1, var0, var1, var3);
                        break;
                    }
                    break;
                }
                ++var7;
            }
            if (arg1 != var6) {
                continue;
            }
        }
        *arg2++ = var5;
        ++arg1;
    }
    *arg2 = 0;
    return 0;
}
