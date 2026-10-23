#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_0201099c_3;

extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" char *func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_020420e8(const char *arg0, int arg1);
extern "C" void func_02041a90(char *arg0, int arg1, int arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_02041fac(char *arg0, int arg1, int arg2);
extern "C" int func_02041b00(char *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02041a28(char *arg0, int arg1);
extern "C" int func_02041bac(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041cc0(char *arg0, int arg1);
extern "C" void *__clear(void *arg0, int arg1);

extern "C" char data_ov002_0216d2b3[];

// USA: func_ov002_02160ce8
extern "C" ARM void func_ov002_02160ce8(unsigned char *arg0, char *arg1, int arg2) {
    unsigned char *var0[3];
    short var1;
    int var2;
    unsigned char var3;
    short var4;
    int var5;
    unsigned char var6;
    if (arg1 == NULL) return;
    GameState::GetInstance();
    int var7  = *(short *) (arg0 + 0x1c0e);
    int var8     = 0;
    int var9 = 3;
    __clear(var0, 0xc);
    var0[0] = arg0 + 0x1c2c;
    var0[1] = arg0 + 0x1c2d;
    if (arg2) {
        func_02041c08(arg1, var7, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var7);
    char *var10 = func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0xfa6);
    func_02041a90(arg1, (0xf0 - func_020420e8(var10, 0)) >> 1, 4);
    func_02042058(arg1, var10);
    func_02041fac(arg1, (int) data_ov002_0216d2b3, 0x10);
    var1 = 0x11f8;
    for (var3 = 0; var3 < 3; var3++) {
        if (var3 == 2) {
            func_02041b00(arg1, 7);
        }
        func_02041e70(arg1, 0xf);
        func_02041b70(arg1, var8,
                      func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var1++));
        if (var3 != 2) {
            func_02041a28(arg1, 0x5a);
            var4 = 0x11fb;
            func_02041e70(arg1, 3);
            func_02042058(
                arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var4++));
            var5 = 0x7d;
            for (var6 = 0; var6 < 5; var6++) {
                func_02041a28(arg1, var5);
                int var11 = 0xf;
                if (var6 + 1 == *var0[var3]) {
                    var11  = 5;
                    var2 = var5;
                }
                func_02041e70(arg1, var11);
                func_02041b70(arg1, var9,
                              func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var4++));
                var9++;
                var5 += 0x10;
            }
            func_02041a28(arg1, 0xce);
            func_02041e70(arg1, 3);
            func_02042058(
                arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), var4));
            func_02041a28(arg1, var2 + 3);
            func_02041e70(arg1, 0xf);
            func_02042058(
                arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0x1202));
        }
        if (var3 != 2) {
            func_02042058(arg1, *(char **) (arg0 + 0x1bdc));
        }
        var8++;
    }
    func_02041bac(arg1, 0xf, 0x4e, 0x10, 1, 0x24);
    func_02041cc0(arg1, 0x34);
}
