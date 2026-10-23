#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct_0202c1a4;
extern "C" int func_0202c1a4(struct Struct_0202c1a4*);
extern "C" void* func_0205ec34(void);
extern "C" void func_02010774(char* arg0, int arg1);
extern "C" void func_020107a8(char* arg0, int arg1);
extern "C" void func_020107dc(char* arg0, int arg1);
extern "C" void func_0206e080(char* arg0, int arg1);
extern "C" void func_0206e0d0(char* arg0, int arg1);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

struct Struct_ov017_021ce174 {
    char unknown_0_[4];
    unsigned char unknown_4_0_ : 7;
    unsigned char unknown_4_7_ : 1;
    short unknown_6_;
    unsigned short unknown_8_;
};

// USA: func_ov017_021ce174
extern "C" ARM void func_ov017_021ce174(void* arg0, struct Struct_ov017_021ce174* arg1, char* arg2, int arg3, struct Struct_0202c1a4* arg4) {
    if (!arg1->unknown_4_7_) {
        if (func_0202c1a4(arg4) == 0) {
            return;
        }
    }

    unsigned char* var0 = (unsigned char*)func_0205ec34();

    switch (arg1->unknown_4_0_) {
    case 0:
        func_02010774(arg2, arg1->unknown_6_);
        func_020107a8(arg2, 1);
        func_020107dc(arg2, 1);
        func_0206e080((char*)var0, var0[0x332]);
        break;
    case 1:
        func_020107a8(arg2, arg1->unknown_6_);
        func_020107dc(arg2, 1);
        func_0206e0d0((char*)var0, var0[0x332]);
        break;
    case 2:
        func_020107dc(arg2, arg1->unknown_6_);
        break;
    case 3:
        func_0206df6c(var0, var0 + 0x8c, arg1->unknown_8_, arg1->unknown_6_);
        break;
    case 4:
        func_0206df6c(var0, var0 + var0[0x332] * 0x1c + 0x3, arg1->unknown_8_, arg1->unknown_6_);
        break;
    case 5:
        func_0206df6c(var0, var0 + var0[0x332] * 0x1c + 0x10, arg1->unknown_8_, arg1->unknown_6_);
        break;
    default:
        break;
    }
}
