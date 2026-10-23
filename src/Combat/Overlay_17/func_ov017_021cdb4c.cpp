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
extern "C" void* func_02012fe4(void);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);
extern "C" void func_0201bf84(unsigned char* arg0, int arg1);

struct Struct_ov017_021cdb4c {
    char unknown_0_[4];
    signed char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
    int unknown_8_;
};

// USA: func_ov017_021cdb4c
extern "C" ARM void func_ov017_021cdb4c(void* arg0, struct Struct_ov017_021cdb4c* arg1, int arg2, int arg3, struct Struct_0202c1a4* arg4) {
    if (arg1->unknown_4_ >= 0 && arg1->unknown_4_ != func_0202c1a4(arg4)) {
        return;
    }

    unsigned char* var0 = (unsigned char*)func_0205ec34();
    unsigned char* var1 = (unsigned char*)func_02012fe4();

    switch (arg1->unknown_5_) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        break;
    case 1:
        func_0206df6c(var0, var0 + 0x8c, arg1->unknown_6_ + 0x212, arg1->unknown_8_);
        break;
    case 8:
        func_0206df6c(var0, var0 + 0x8c, arg1->unknown_6_ + 0x79e, arg1->unknown_8_);
        break;
    case 7:
        func_0206df6c(var0, var0 + 0x8c, arg1->unknown_6_ + 0x33e, arg1->unknown_8_);
        func_0201bf84(var1, 1);
        break;
    default:
        break;
    }
}
