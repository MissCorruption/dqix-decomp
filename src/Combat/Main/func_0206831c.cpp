#include <globaldefs.h>
extern "C" char* func_020424ac(char*);
extern "C" int func_020d857c(signed char*, signed char*);
extern "C" int func_020d2ff0(const char*);
extern "C" int func_02005a94(const char*);
struct Struct_020e7e5c {
    signed char* unknown_0_;
    void (*unknown_4_)(signed char*, signed char**, void*, int);
};
extern Struct_020e7e5c data_020e7e5c[];
// USA: func_0206831c
extern "C" ARM void func_0206831c(void* arg0, signed char* arg1, signed char* arg2) {
    signed char* var0;
    if (!arg1 || !arg2) return;
    var0 = arg2;
    while (1) {
        if (!*arg1) break;
        if (*arg1 == '<') {
            signed char* var1 = (signed char*)func_020424ac((char*)arg1);
            if (var1) {
                int var2 = 0;
                Struct_020e7e5c* var3 = data_020e7e5c;
                signed char* var4 = arg1 + 1;
                while (var3->unknown_0_) {
                    if (func_020d857c(var4, var3->unknown_0_)) {
                        if (var3->unknown_4_) {
                            int var5 = 0;
                            int var6 = func_020d2ff0((char*)var3->unknown_0_);
                            signed char var7 = var4[var6];
                            if (var7 >= '1' && var7 <= '9') var5 = func_02005a94((char*)var4 + var6) - 1;
                            var3->unknown_4_(var4, &var0, arg0, var5);
                        }
                        arg1 = var1 + 1;
                        var2 = 1;
                        break;
                    }
                    var3++;
                }
                if (var2) continue;
            }
        }
        *var0 = *arg1++;
        var0++;
    }
    *var0 = *arg1;
}
