#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *buf, int a, int b);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310 *c, int key);
extern "C" int func_02041c08(char *dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char *dst, int cursor);
extern "C" int func_02041fac(char *buf, int a, int b);
extern "C" int func_02041e70(char *dst, int palette);
extern "C" int func_02041b70(char *dst, int n, const char *name);
extern "C" int func_02042058(char *dst, const char *src);
extern "C" int func_ov002_02159774(void *base, int id, int a2, int a3, int a4);

// USA: func_ov002_0215d72c
extern "C" ARM void func_ov002_0215d72c(unsigned char *base, char *dst, int flag) {
    if (dst == NULL) return;

    GameState::GetInstance();
    int cursor = *(short *) (base + RG(0x1bee, 0x1ab6));

    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    int field = func_020e0434((struct Container020e0310 *) (base + RG(0x20, 0x8)), 0x514);
    func_02041fac(dst, field, 0x10);

    for (int i = 0; i < *(base + RG(0x1c6d, 0x1b31)) + 1; i++) {
        int id;
        if (i < *(base + RG(0x1c6d, 0x1b31))) {
            id = *(base + RG(0x1c68, 0x1b2c) + i);
        } else {
            id = 4;
        }
        if (id == 4) {
            func_02041b70(dst, i,
                          (const char *) func_020e0434(
                              (struct Container020e0310 *) (base + RG(0x20, 0x8)), 0x515));
            return;
        }
        int pal = func_ov002_02159774(base, id, 1, 0, 0);
        func_02041e70(dst, pal);
        func_02041b70(dst, i, (const char *) (base + RG(0x1ab0, 0x1a08) + id * RG(0x3c, 0x18)));
        func_02041e70(dst, 0xf);
        func_02042058(dst, *(const char **) (base + RG(0x1000 + 0xbdc, 0x1000 + 0xaa4)));
    }
}
