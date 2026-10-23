#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310 *c, int key);
extern "C" int func_02041c08(char *dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char *dst, int cursor);
extern "C" int func_02041e70(char *dst, int palette);
extern "C" int func_02041b70(char *dst, int n, const char *name);
extern "C" int func_02042058(char *dst, const char *src);
extern "C" int func_ov002_0215a9b4(void *base, short i);
extern "C" int func_0206e3d4(int a, int b);
extern "C" void func_ov002_0215b918(unsigned char *self, int a, int b, int c);
extern "C" char *func_0205ec34(void);
extern "C" char data_ov002_0216d2b4[];

// USA: func_ov002_02160aa0
extern "C" ARM void func_ov002_02160aa0(unsigned char *base, char *dst, int flag) {
    if (dst == NULL) return;

    short c                                    = *(short *) (base + 0x1c00 + 0xc);
    int cursor                                 = c % 16;
    *(unsigned char *) (base + 0x2000 + 0x484) = c / 16;
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    short n = 0;
    unsigned char end;
    unsigned char i = *(unsigned char *) (base + 0x2000 + 0x484) << 4;
    end             = i + 0x10;
    char *save      = func_0205ec34();
    for (; i < end; i++) {
        cursor = func_0206e3d4((int) save, func_ov002_0215a9b4(base, i));
        if (cursor == 0) {
            func_02041e70(dst, 0xf);
            func_02041b70(dst, n,
                          (const char *) func_020e0434(
                              (struct Container020e0310 *) (base + 0x20), 0x119c + 1));
        } else if (*(unsigned int *) (base + 0x2000 + 0x480) & (1 << (cursor - 1))) {
            func_02041e70(dst, 0xf);
            func_02041b70(dst, n,
                          (const char *) func_020e0434(
                              (struct Container020e0310 *) (base + 0x20), (short) (cursor + 0x119d)));
        } else {
            func_02041e70(dst, 0xf);
            func_02041b70(dst, n,
                          (const char *) func_020e0434(
                              (struct Container020e0310 *) (base + 0x20), 0x119c));
        }
        n++;
        if (i & 1) {
            func_02042058(dst, *(const char **) (base + 0x1000 + 0xbdc));
        } else {
            func_02042058(dst, data_ov002_0216d2b4);
        }
    }
    func_02041e70(dst, 0xf);
    func_ov002_0215b918(base, 0x22, *(unsigned char *) (base + 0x2000 + 0x484), 2);
}
