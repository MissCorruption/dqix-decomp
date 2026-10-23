#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217dfb4_20=0x10 };
extern "C" void func_02046380(void*);
struct Struct_020465c0;
extern "C" void func_020465c0(Struct_020465c0*,int,int);
extern "C" void func_020465f0(unsigned char*,int,unsigned char);
extern "C" void func_020465d8(unsigned char*,int,unsigned char);
extern "C" void func_02042428(char*, int);
#else
enum { Enum_ov003_0217dfb4_20=0x14 };
#endif

struct Struct_0205c570;
struct Struct_0205d81c;
struct Struct_0205d5d0;
struct Struct_0201099c_3;

struct Struct_ov003_0217dfb4 {
    char unknown_0_[0x68];
    int unknown_68_;
};

struct Struct_ov003_0217dfb4_2 {
    char unknown_0_[Enum_ov003_0217dfb4_20];
    int unknown_14_;
    unsigned char unknown_18_[0x30 - 0x18];
    unsigned char unknown_30_;
    char unknown_31_;
    unsigned char unknown_32_;
    char unknown_33_[0x90 - 0x33];
    struct Struct_ov003_0217dfb4* unknown_90_;
    char unknown_94_[0xcc - 0x94];
    char unknown_cc_[4];
};

extern "C" void* func_02012fe4(void);
extern "C" int func_020421a0();
extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" unsigned char* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_02050400(unsigned char* arg0, int arg1);
extern "C" void func_0205042c(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02050440(unsigned char* arg0, int arg1);
extern const char data_ov003_02180c7f[];

// USA: func_ov003_0217dfb4
extern "C" ARM void func_ov003_0217dfb4(struct Struct_ov003_0217dfb4_2* arg0) {
    char var0[0x400];
    func_02012fe4();
#if defined(jpn)
    int var1 = func_020421a0();
#else
    func_020421a0();
#endif
    __clear(var0, 0x400);
    int var2;
    int var3;
    int var4 = arg0->unknown_90_->unknown_68_;
    var2 = (var4 + 1) * 6;
    if (var2 > arg0->unknown_30_) {
        var2 = arg0->unknown_30_;
    }
    if (arg0->unknown_14_ == 2) {
        func_02041c08(var0, func_0205d794((struct Struct_0205c570*)arg0->unknown_90_) % 6, 8, 5, 5, 5);
    }
    for (var3 = var4 * 6; var3 < var2; var3++) {
        const char* var5 = (const char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_cc_, (short)(arg0->unknown_18_[var3] + 100));
        func_02041b70(var0, var3 % 6, var5);
        if (var3 != var2 - 1) {
            func_02042058(var0, data_ov003_02180c7f);
        }
    }
    if (arg0->unknown_32_ > 1) {
#if defined(jpn)
        func_02046380((void*)var1);
        func_020465c0((Struct_020465c0*)var1, 0, var4 + 1);
        func_020465c0((Struct_020465c0*)var1, 1, arg0->unknown_32_);
        func_020465f0((unsigned char*)var1, 0, 2);
        func_020465f0((unsigned char*)var1, 1, 2);
        func_020465d8((unsigned char*)var1, 0, 1);
        func_020465d8((unsigned char*)var1, 1, 0);
        func_02042428(var0, 8);
        func_02042058(var0, (const char*)func_020e0434((Struct_0201099c_3*)arg0->unknown_cc_, 0xc8));
#else
        unsigned char* var6 = func_0205d81c((struct Struct_0205d81c*)arg0->unknown_90_, 0);
        if (var6 != NULL) {
            func_02050400(var6, 1);
            func_0205042c(var6, var4);
            func_02050440(var6, arg0->unknown_32_);
        }
#endif
    }
#if defined(jpn)
    func_0205d5d0((struct Struct_0205d5d0*)arg0->unknown_90_, 0, (int)var0, 1);
#else
    func_0205d5d0((struct Struct_0205d5d0*)arg0->unknown_90_, 0, (int)var0, 1, 0);
#endif
}
