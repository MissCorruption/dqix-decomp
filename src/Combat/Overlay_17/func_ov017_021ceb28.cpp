#include <globaldefs.h>

extern "C" void* func_020e2ff8(void);
extern "C" int func_0202c508(void*);
extern "C" void func_020e321c(void*, int, int);
extern "C" void func_020e33b4(void*, int, int);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_0208ab34_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern "C" struct Struct_0208ab34_2* func_020e3054(struct Struct_0208ab34_2* arg0, int arg1);

struct Struct_ov017_021ceb28 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

// USA: func_ov017_021ceb28
extern "C" ARM void func_ov017_021ceb28(int arg0, struct Struct_ov017_021ceb28* arg1, int arg2, int arg3, struct Struct_0202c1a4* arg4) {
    void* var0 = func_020e2ff8();
    int var1 = func_0202c508(arg4);
    if (var1 != 0 && arg0 > 0) {
        if (arg1->unknown_4_ != 0) {
            func_020e321c(var0, arg1->unknown_5_, arg1->unknown_7_);
        } else {
            func_020e33b4(var0, arg1->unknown_5_, arg1->unknown_7_);
        }
        return;
    }
    if (arg0 != 0) return;
    signed char var2 = func_0202c1a4(arg4);
    if (arg1->unknown_7_ != var2) return;
    struct Struct_0208ab34_2* var3 = func_020e3054((struct Struct_0208ab34_2*)var0, arg1->unknown_5_);
    if (var3 == NULL) return;
    if (arg1->unknown_4_ != 0) {
        var3->unknown_2_ = 1;
    } else {
        var3->unknown_2_ = 3;
    }
}
