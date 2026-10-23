#include <globaldefs.h>

extern "C" void* func_020e3808(void);
extern "C" int func_0202c508(void*);
extern "C" void func_ov017_021cebcc(int, int, int);

struct Struct_020e385c;
extern "C" void func_020e39d4(struct Struct_020e385c* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020e3a50(struct Struct_020e385c* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020e392c(struct Struct_020e385c* arg0, int arg1, int arg2);
extern "C" void func_020e3994(struct Struct_020e385c* arg0, int arg1, int arg2);

struct Struct_020e3b44 {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};
extern "C" void func_020e3b44(struct Struct_020e3b44* arg0, int arg1, struct Struct_020e3b44 arg2);

struct Struct_ov017_021cec70 {
    char unknown_0_[4];
    unsigned char unknown_4_;
    signed char unknown_5_;
    char unknown_6_[2];
    struct Struct_020e3b44 unknown_8_;
};

// USA: func_ov017_021cec70
extern "C" ARM void func_ov017_021cec70(int arg0, struct Struct_ov017_021cec70* arg1, int arg2, int arg3, void* arg4) {
    struct Struct_020e385c* var0 = (struct Struct_020e385c*)func_020e3808();
    int var1 = func_0202c508(arg4);
    int var2 = arg1->unknown_4_;

    if (var1 != 0) {
        switch (var2) {
        case 0:
            func_020e39d4(var0, arg0, arg1->unknown_8_.unknown_4_, arg1->unknown_8_.unknown_0_);
            break;
        case 1:
            func_020e3a50(var0, arg0, arg1->unknown_8_.unknown_4_, arg1->unknown_8_.unknown_0_);
            break;
        case 2:
            func_020e392c(var0, arg1->unknown_8_.unknown_4_, arg1->unknown_8_.unknown_0_);
            break;
        case 3:
            func_ov017_021cebcc(3, arg1->unknown_8_.unknown_4_, arg1->unknown_8_.unknown_0_);
            break;
        }
    } else {
        if (var2 != 3) return;
        signed char var3 = arg1->unknown_5_;
        if (var3 < 0) {
            func_020e3994(var0, arg1->unknown_8_.unknown_4_, arg1->unknown_8_.unknown_0_);
            return;
        }
        func_020e3b44((struct Struct_020e3b44*)var0, var3, arg1->unknown_8_);
    }
}
