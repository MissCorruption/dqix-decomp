#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_ov002_0215a9b4(void *arg0, short arg1);
extern "C" int func_0206e3d4(int arg0, int arg1);
extern "C" void func_ov002_0215b918(unsigned char *arg0, int arg1, int arg2, int arg3);
extern "C" char *func_0205ec34(void);
extern "C" char data_ov002_0216d2b4[];

// USA: func_ov002_02160aa0
extern "C" ARM void func_ov002_02160aa0(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    short var0                                    = *(short *) (arg0 + 0x1c00 + 0xc);
    int var1                                 = var0 % 16;
    *(unsigned char *) (arg0 + 0x2000 + 0x484) = var0 / 16;
    if (arg2) {
        func_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var1);

    short var2 = 0;
    unsigned char var3;
    unsigned char var4 = *(unsigned char *) (arg0 + 0x2000 + 0x484) << 4;
    var3             = var4 + 0x10;
    char *var5      = func_0205ec34();
    for (; var4 < var3; var4++) {
        var1 = func_0206e3d4((int) var5, func_ov002_0215a9b4(arg0, var4));
        if (var1 == 0) {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) func_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 0x20), 0x119c + 1));
        } else if (*(unsigned int *) (arg0 + 0x2000 + 0x480) & (1 << (var1 - 1))) {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) func_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 0x20), (short) (var1 + 0x119d)));
        } else {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) func_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 0x20), 0x119c));
        }
        var2++;
        if (var4 & 1) {
            func_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xbdc));
        } else {
            func_02042058(arg1, data_ov002_0216d2b4);
        }
    }
    func_02041e70(arg1, 0xf);
    func_ov002_0215b918(arg0, 0x22, *(unsigned char *) (arg0 + 0x2000 + 0x484), 2);
}
