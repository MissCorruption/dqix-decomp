#include <globaldefs.h>

extern "C" int func_020d2ff0(const char*);

struct Struct_02072a68_2;
struct Struct_0207f524 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_020808c8 {
    Struct_02072a68_2* unknown_0_;
    Struct_0207f524 unknown_4_;
};

extern "C" void* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_02042190(int arg0);
extern "C" int func_020420e8(void* arg0, int arg1);

struct Struct_020808c8_2 {
    const char* unknown_0_;
    char unknown_4_[0xa - 4];
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    char unknown_10_[0x12 - 0x10];
    unsigned char unknown_12_;
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
};

// USA: func_020808c8

extern "C" ARM void func_020808c8(void* arg0, int arg1, short* arg2, short* arg3) {
    Struct_020808c8* var0 = static_cast<Struct_020808c8*>(arg0);
    struct Struct_020808c8_2* var1 = (struct Struct_020808c8_2*)func_0207f6ac(&var0->unknown_4_, arg1);
    if (var1 == NULL) {
        return;
    }

#if !defined(jpn)
    int var2 = func_02042190(var1->unknown_13_0_);
#endif
    int var3 = var1->unknown_12_;

    switch (var3) {
    case 0: {
        void* var4 = func_02072a68(var0->unknown_0_, var1->unknown_e_);
        if (var4 == NULL) {
            return;
        }
#if defined(jpn)
        int var5 = func_020d2ff0((const char*)var4) >> 1;
        int var6 = var1->unknown_13_0_;
        *arg2 = (short)(var5 * var6);
#else
        *arg2 = (short)func_020420e8(var4, var2);
#endif
        *arg3 = var1->unknown_13_0_;
        break;
    }
    case 1:
        *arg2 = var1->unknown_a_;
        *arg3 = var1->unknown_c_;
        break;
    case 4: {
        if (var1->unknown_0_ == NULL) {
            return;
        }
#if defined(jpn)
        int var7 = func_020d2ff0(var1->unknown_0_) >> 1;
        int var8 = var1->unknown_13_0_;
        *arg2 = (short)(var7 * var8);
#else
        *arg2 = (short)func_020420e8(const_cast<char*>(var1->unknown_0_), var2);
#endif
        *arg3 = var1->unknown_13_0_;
        break;
    }
    default:
        *arg3 = 0;
        *arg2 = 0;
        break;
    }
}
