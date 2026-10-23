#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02000c9c_8;
extern "C" int func_0200fb08(Struct_02000c9c_8*);
extern "C" int func_020d2ff0(const char*);
extern "C" int func_02001aec(const char*, const char*, unsigned int);
extern "C" int sprintf(char*, const char*, ...);
extern "C" void* memset(void*, int, unsigned int);
extern "C" void* memcpy(void*, const void*, unsigned int);
extern "C" void __clear(void*, unsigned int);
extern "C" void func_020e4864(char*, char*, int, int, int, int);
extern void (*data_020ee9f0[])(char*, int);
struct Struct_020eea50 {
    signed char unknown_0_[4];
    const char* unknown_4_;
    signed char unknown_8_;
    char unknown_9_[3];
};
extern Struct_020eea50 data_020eea50[];
struct Struct_020eea08 { char unknown_0_[6]; };
extern Struct_020eea08 data_020eea08[];
extern char data_020f2dcf[];

// USA: func_020e4958
extern "C" ARM void func_020e4958(char** arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    int var0;
    char var1[0x100] = {0};
    var0 = 1 - arg2;
    if (arg2 == -1) var0 = 0;
    int var2 = arg4;
    if (var2 == -1) var2 = 0;
    var2 = var2 * 3;
    data_020ee9f0[var2 + (var0 + arg3)](var1, arg1);
    char var3[0x100];
    var0 = 1 - var0;
    __clear(var3, 0x100);
    if (arg5 == -1 && func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance()) == 3) arg5 = 0;
    char* var4;
    char* var5 = var3;
    var4 = var1;
    for (;;) {
        if (*var4 == 0) break;
        if (*var4 == '[') {
            int var6 = 0;
            Struct_020eea50* var7 = data_020eea50;
            int var8;
            while ((var8 = var7->unknown_8_) != 0) {
                if (func_02001aec(var4 + 1, var7->unknown_4_, var8) == 0) {
                    if (arg5 != -1) {
                        var5 += sprintf(var5, data_020eea08[var7->unknown_0_[arg5]].unknown_0_);
                        var4 += var7->unknown_8_ + 1;
                        if (*var4 != ' ') var5 += sprintf(var5, data_020f2dcf);
                    } else {
                        if (*(var4 += var8 + 1) == ' ') var4++;
                    }
                    var6 = 1;
                    break;
                }
                var7++;
            }
            if (var6) continue;
        }
        *var5 = *var4;
        var4++;
        var5++;
    }
    *var5 = *var4;
    memset(var1, 0, 0x100);
    func_020e4864(var3, var1, var0, arg3, var2, arg5);
    int var9 = func_020d2ff0(var1);
    memcpy(*arg0, var1, var9);
    *arg0 += var9;
}
