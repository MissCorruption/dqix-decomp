#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *arg0, int arg1, int arg2);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_02041fac(char *arg0, int arg1, int arg2);
extern "C" void __clear(void *arg0, int arg1);

struct Struct_ov002_0215b8c8 {
    char *unknown_0_;
};
extern "C" void func_ov002_0215b8c8(struct Struct_ov002_0215b8c8 *arg0, const char *arg1,
                                                                        int arg2);

// USA: func_ov002_0215cd98
extern "C" ARM void func_ov002_0215cd98(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    short var0   = 0x4b0;
    int var1 = *(short *) (arg0 + RG(0x1bea, 0x1ab2));

    if (arg2) {
        func_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var1);

    const char *var2 =
        (const char *) func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), var0++);
#if defined(jpn)
    func_02041fac(arg1, (int) var2, 0x10);
#else
    char var3[0x80];
    __clear(var3, 0x80);
    struct Struct_ov002_0215b8c8 var4;
    var4.unknown_0_ = var3;
    func_ov002_0215b8c8(&var4, var2, 0);
    func_02041fac(arg1, (int) var3, 0x10);
#endif

    for (int var5 = 0; var5 < 4; var5++) {
        int var6 = func_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), var0++);
        func_02041b70(arg1, var5, (const char *) var6);
        if (var5 != 3) {
            func_02042058(arg1, *(char **) (arg0 + RG(0x1bdc, 0x1aa4)));
        }
    }
}
