#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0204483c_2;

struct Struct_0204483c {
    unsigned char* unknown_0_;
};

extern "C" ARM const char* func_020449a4(struct Struct_0204483c_2* arg0, const char* arg1);
extern "C" ARM void func_02044974(struct Struct_0204483c* arg0, int arg1);
extern "C" ARM int func_020d85dc(const char* arg0, const char* arg1);
extern "C" ARM int func_02005a94(const char* arg0);
extern "C" ARM void func_020457e8(struct Struct_0204483c_2* arg0, int arg1);

extern char data_020f00a3[];

enum Enum_0204483c { Enum_0204483c_65281 = 0xff01, Enum_0204483c_65304 = 0xff18, Enum_0204483c_65306 = 0xff1a };

// USA: func_0204483c
extern "C" ARM void func_0204483c(struct Struct_0204483c_2* arg0, const char* arg1, struct Struct_0204483c arg2) {
    const char* var0;
    if (arg1 == 0 || arg2.unknown_0_ == 0) {
        return;
    }
    arg1 = func_020449a4(arg0, arg1);
    for (;;) {
        Enum_0204483c var1;
        Struct_0204483c* var2 = &arg2;
        var1 = Enum_0204483c_65304;
        signed char var3 = *arg1;
        if (var3 == 0) {
            break;
        }
        signed char var4 = arg1[1];
        if ((var3 == '\\' && var4 == 'n') || (var3 == '\r' && var4 == '\n')) {
            func_02044974(var2, var1);
            arg1 += 2;
            continue;
        }
        if (var3 == '\n') {
            func_02044974(var2, var1);
            arg1 += 1;
            continue;
        }
        if (var3 == '<') {
            int var5 = 1;
            var0 = strchr(arg1, '>');
            if (var0 == 0) {
                break;
            }
            const char* var6 = var0 + 1;
            if (func_020d85dc(arg1 + 1, data_020f00a3)) {
                int var7 = func_02005a94(arg1 + 6);
                if (var7 < 0) {
                    var7 = 0;
                }
                func_020457e8(arg0, var7);
                func_02044974(var2, Enum_0204483c_65306);
            } else {
                var5 = 0;
            }
            if (var5) {
                arg1 = var6;
                continue;
            }
        }
        unsigned char* var8 = arg2.unknown_0_;
        arg2.unknown_0_ = var8 + 1;
        *var8 = *arg1++;
    }
    func_02044974(&arg2, Enum_0204483c_65281);
}
