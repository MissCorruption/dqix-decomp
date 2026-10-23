#include <globaldefs.h>

struct Struct_0201099c_3;

extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02042058(char *arg0, const char *arg1);

struct Struct_ov002_02160004 {
    char unknown_0_[0x6c];
    int unknown_6c_;
    int unknown_70_;
};

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov002_02160004
extern "C" ARM void func_ov002_02160004(char *arg0, char *arg1) {
    if (arg1 == NULL) {
        return;
    }

    struct Struct_ov002_02160004 *var0 = (struct Struct_ov002_02160004 *) (arg0 + RG(0x2c8 + 0xc00, 0xe20));
    int *var1      = &var0->unknown_6c_;
    short var2   = var1[1];
    short var3    = var1[0];
    if (var2 == *(signed char *) (arg0 + RG(0x1c00 + 0x73, 0x1b00 + 0x37))) {
        return;
    }

    int var4 = func_020e0434((struct Struct_0201099c_3 *) (arg0 + RG(0x20, 8)), (short) (var3 + 0xfbe));
    func_02042058(arg1, (const char *) var4);
}
