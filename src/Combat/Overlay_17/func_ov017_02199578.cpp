#if defined(jpn)
enum { Enum_ov017_02199578_17480 = 0x4198, Enum_ov017_02199578_17476 = 0x4194, Enum_ov017_02199578_17481 = 0x4199, Enum_ov017_02199578_17477 = 0x4195 };
#else
enum { Enum_ov017_02199578_17480 = 0x4448, Enum_ov017_02199578_17476 = 0x4444, Enum_ov017_02199578_17481 = 0x4449, Enum_ov017_02199578_17477 = 0x4445 };
#endif

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
extern "C" void func_ov017_0218b664(char* arg0);

struct Struct_0202c1a4 {
    char unknown_0_[0x100d];
    unsigned char unknown_100d_;
};

struct Struct_ov017_02199578 { char unknown_0_[0x34]; };

// USA: func_ov017_02199578
#pragma opt_common_subs off
extern "C" ARM void func_ov017_02199578(void* arg0, int arg1, int arg2, int arg3, signed char arg4) {
    struct Struct_0202c1a4* var0 = (struct Struct_0202c1a4*)func_0202ae18();
    signed char var1 = func_0202c1a4(var0);
    if (arg2 != var1 && arg2 != 4) return;

    if (!*((unsigned char*)arg0 + Enum_ov017_02199578_17480)) return;

    func_0202c288(var0);

    int var2 = *((unsigned char*)arg0 + Enum_ov017_02199578_17476) + 1;
    *((unsigned char*)arg0 + Enum_ov017_02199578_17476) = (unsigned char)var2;
    if ((var2 & 0xff) >= var0->unknown_100d_ - 1) *((unsigned char*)arg0 + Enum_ov017_02199578_17480) = 0;

    if (!arg4) {
        *((unsigned char*)arg0 + Enum_ov017_02199578_17481) = 0;
        void* var3 = func_0205ec34();
        Struct_ov017_02199578 var4;
        if (func_020649b0(var3, 0x1d, &var4)) {
            func_0206f81c(&var4);
        }
        func_ov017_0218b664((char*)arg0);
        return;
    }

    int var5 = *((unsigned char*)arg0 + Enum_ov017_02199578_17477) + 1;
    *((unsigned char*)arg0 + Enum_ov017_02199578_17477) = (unsigned char)var5;
    if ((var5 & 0xff) < var0->unknown_100d_ - 1) return;

    *((unsigned char*)arg0 + Enum_ov017_02199578_17481) = 1;
    void* var6 = func_0205ec34();
    Struct_ov017_02199578 var7;
    if (func_020649b0(var6, 0x1d, &var7)) {
        func_0206f81c(&var7);
    }
    func_ov017_0218b664((char*)arg0);
}
