#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0202ae18(void);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_0202c288(void* arg0);
extern "C" void* func_0205ec34(void);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);
struct Struct_02061c04_11;
extern "C" void func_ov017_021b994c(struct Struct_02061c04_11* arg0);

struct Struct_0202c1a4 {
    char unknown_0_[0x100d];
    unsigned char unknown_100d_;
};

struct Struct_02061c04_11 {
    char unknown_0_[0x12c];
    unsigned int unknown_12c_;
    unsigned char unknown_130_;
    unsigned char unknown_131_;
    unsigned char unknown_132_;
    unsigned char unknown_133_;
    char unknown_134_[0x136 - 0x134];
    unsigned char unknown_136_;
};

struct Struct_ov017_021b9a98 { char unknown_0_[0x34]; };

// USA: func_ov017_021b9a98
extern "C" ARM void func_ov017_021b9a98(Struct_02061c04_11* arg0, int arg1, unsigned char arg2, unsigned char arg3, unsigned short arg4) {
    Struct_0202c1a4* var0 = (Struct_0202c1a4*)func_0202ae18();
    signed char var1 = func_0202c1a4(var0);
    if (arg2 != var1 && arg2 != 4) return;

    if (arg0->unknown_130_ == 0) return;

    func_0202c288(var0);

    int var2 = arg0->unknown_131_ + 1;
    arg0->unknown_131_ = (unsigned char)var2;
    if ((var2 & 0xff) >= var0->unknown_100d_ - 1) arg0->unknown_130_ = 0;

    if (arg0->unknown_136_ == 0) {
        if (arg4 == 0) {
            arg0->unknown_133_ = 0;
            *(short*)((char*)arg0 + 0x134) = (short)arg0->unknown_12c_;
            void* var3 = func_0205ec34();
            Struct_ov017_021b9a98 var4;
            if (func_020649b0(var3, 0x1a, &var4)) {
                func_0206f81c(&var4);
            }
            func_ov017_021b994c(arg0);
            arg0->unknown_136_ = 1;
        } else {
            int var5 = arg0->unknown_132_ + 1;
            arg0->unknown_132_ = (unsigned char)var5;
            if ((var5 & 0xff) < var0->unknown_100d_ - 1) return;

            arg0->unknown_133_ = 1;
            *(short*)((char*)arg0 + 0x134) = (short)arg0->unknown_12c_;
            void* var6 = func_0205ec34();
            Struct_ov017_021b9a98 var7;
            if (func_020649b0(var6, 0x1a, &var7)) {
                func_0206f81c(&var7);
            }
            func_ov017_021b994c(arg0);
            arg0->unknown_136_ = 1;
        }
    }
}
