#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_0202c508 { int unknown_0_; };
extern "C" int func_0202c508(Struct_0202c508* arg0);

struct Struct_0208ab34_2 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; unsigned char unknown_3_; };
struct Struct_020e30a4 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; unsigned char unknown_3_; };
extern "C" Struct_0208ab34_2* func_020e3054(Struct_0208ab34_2* arg0, int arg1);
extern "C" Struct_020e30a4* func_020e30a4(Struct_020e30a4* arg0);

struct Struct_020e3004_2 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; unsigned char unknown_3_; };
extern "C" void func_020e303c(Struct_020e3004_2* arg0);

extern "C" void func_ov017_021ceae4(unsigned char arg0, unsigned char arg1, unsigned char arg2);

// USA: func_020e321c
extern "C" ARM void func_020e321c(Struct_0208ab34_2* arg0, int arg1, unsigned char arg2) {
    int* var0 = (int*)func_0202ae18();
    if (!func_0202b7d8(var0)) return;

    if (func_0202c508((Struct_0202c508*)var0)) {
        unsigned char var1 = 0;
        Struct_0208ab34_2* var2 = func_020e3054(arg0, arg1);
        if (var2 && var2->unknown_2_ == 1 && var2->unknown_0_ == arg2) return;

        if (!var2 || var2->unknown_2_ == 0) {
            if (!var2) {
                var2 = (Struct_0208ab34_2*)func_020e30a4((Struct_020e30a4*)arg0);
            }
            if (var2) {
                func_020e303c((Struct_020e3004_2*)var2);
                var2->unknown_1_ = (unsigned char)arg1;
                var1 = 1;
                var2->unknown_2_ = var1;
                var2->unknown_0_ = arg2;
            }
        }

        if (arg2 == 0) return;
        func_ov017_021ceae4(var1, arg1, arg2);
    } else {
        func_ov017_021ceae4(1, arg1, arg2);
        Struct_0208ab34_2* var3 = func_020e3054(arg0, arg1);
        if (!var3) {
            var3 = (Struct_0208ab34_2*)func_020e30a4((Struct_020e30a4*)arg0);
        }
        func_020e303c((Struct_020e3004_2*)var3);
        var3->unknown_1_ = (unsigned char)arg1;
        var3->unknown_2_ = 2;
        var3->unknown_0_ = arg2;
    }
}
