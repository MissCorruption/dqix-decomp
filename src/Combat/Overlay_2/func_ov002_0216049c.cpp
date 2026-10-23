#include "GameState/GameState.h"
#include <globaldefs.h>

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310 *c, int key);
extern "C" int func_02041c08(char *dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char *dst, int cursor);
extern "C" int func_02041fac(char *buf, int a, int b);
extern "C" int func_02041e70(char *dst, int palette);
extern "C" int func_02041b70(char *dst, int n, const char *name);
extern "C" int func_02042058(char *dst, const char *src);
extern "C" GameObject *func_0200ff1c(GameState *gameState, int combatantId);
extern "C" int func_ov002_02159774(void *base, int id, int a2, int a3, int a4);
extern "C" void func_ov002_02157480(void *obj, int *arr);

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *buf, const char *fmt, int b);
extern "C" char data_ov002_0216da1d[];
#else
#define RG(u, j) (u)
#endif

static inline int IsPartySlot0216049c(int id) {
    return (id >= 0 && id <= 3) ? 1 : 0;
}

// USA: func_ov002_0216049c
extern "C" ARM void func_ov002_0216049c(unsigned char *base, char *dst, int flag) {
    if (dst == NULL) return;

    GameState *gs = GameState::GetInstance();
    GameObject *m;
    int id;
    int cursor = *(short *) (base + RG(0x1c08, 0x1ad0));
    int ids[4];
    func_ov002_02157480(base, ids);

    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

#if defined(jpn)
    func_02042638(dst, data_ov002_0216da1d, 0x10);
#else
    int field = func_020e0434((struct Container020e0310 *) (base + 0x20), 0x1004);
    func_02041fac(dst, field, 0x10);
#endif

    for (int i = 0; i < 4; i++) {
        id = ids[i];
        if (!IsPartySlot0216049c(id)) continue;
        m = func_0200ff1c(gs, id);
        if (m == NULL) return;
        if (i != 0) {
            func_02042058(dst, *(const char **) (base + 0x1000 + RG(0xbdc, 0xaa4)));
        }
        int pal = func_ov002_02159774(base, id, 0, 1, 1);
        func_02041e70(dst, pal);
        func_02041b70(dst, i, *(const char **) ((char *) m + 0x134));
        func_02041e70(dst, 0xf);
    }
}
