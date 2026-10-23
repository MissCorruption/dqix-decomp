#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *buf, int a, int b);
#define func_02041fac func_02042638
extern "C" char data_ov002_0216d92c[];
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

// USA: func_ov002_0215c348
extern "C" ARM void func_ov002_0215c348(unsigned char *base, char *dst, int flag) {
    GameState *bs = GameState::GetInstance();
    int cursor    = *(short *) (base + RG(0x1be2, 0x1aaa));
    int n         = 0;

    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

#if defined(jpn)
    int field = (int) data_ov002_0216d92c;
#else
    int field = func_020e0434((struct Container020e0310 *) (base + 0x20), 0x5dc);
#endif
    func_02041fac(dst, field, 0x16);

    unsigned char count = *(base + RG(0x1c73, 0x1b37));
    unsigned char *ids  = base + RG(0x1c6e, 0x1b32);
    for (unsigned char i = 0; i < count; i++) {
        int id        = ids[i];
        GameObject *m = bs->GetPartyMemberByIndex(id);
        if (m != NULL) {
            int pal = func_ov002_02159774(base, id, 0, 1, 1);
            func_02041e70(dst, pal);
            func_02041b70(dst, n, *(const char **) ((char *) m + 0x134));
            func_02041e70(dst, 0xf);
            n++;
            if (i != count - 1) {
                func_02042058(dst, *(const char **) (base + 0x1000 + RG(0xbdc, 0xaa4)));
            }
        }
    }
}
