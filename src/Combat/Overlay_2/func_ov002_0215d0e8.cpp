#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *buf, int a, int b);
#define AppendFormatted02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Container020e0310;
int GetFieldByKey020e0434(struct Container020e0310 *c, int key);
int AppendFrameTag02041c08(char *dst, int a1, int a2, int a3, int a4, int a5);
int AppendCursorTag_02041ea4(char *dst, int cursor);
int AppendFormatted02041fac(char *buf, int a, int b);
int AppendPaletteTag_02041e70(char *dst, int palette);
int AppendNameTag_02041b70(char *dst, int n, const char *name);
int AppendString02042058(char *dst, const char *src);
extern "C" int func_ov002_02159774(void *base, int id, int a2, int a3, int a4);

// USA: func_ov002_0215d0e8
extern "C" ARM void func_ov002_0215d0e8(unsigned char *base, char *dst, int flag) {
    if (dst == NULL) return;

    int cursor = *(short *) (base + RG(0x1bec, 0x1ab4));
    GameState::GetInstance();

    if (flag) {
        AppendFrameTag02041c08(dst, cursor, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(dst, cursor);

    int field = GetFieldByKey020e0434((struct Container020e0310 *) (base + RG(0x20, 0x8)), 0x514);
    AppendFormatted02041fac(dst, field, 0x10);

    int count          = *(base + RG(0x1c6d, 0x1b31));
    unsigned char *ids = base + RG(0x1c68, 0x1b2c);
    if (*(base + RG(0x1c84, 0x1b48)) == 7) {
        count = *(base + RG(0x1c73, 0x1b37));
        ids   = base + RG(0x1c6e, 0x1b32);
    }

    for (int i = 0; i < count; i++) {
        unsigned char id = ids[i];
        int pal          = func_ov002_02159774(base, id, 1, 1, 1);
        AppendPaletteTag_02041e70(dst, pal);
        AppendNameTag_02041b70(dst, i, (const char *) (base + RG(0x1ab0, 0x1a08) + id * RG(0x3c, 0x18)));
        AppendPaletteTag_02041e70(dst, 0xf);
        if (i != count - 1) {
            AppendString02042058(dst, *(const char **) (base + RG(0x1000 + 0xbdc, 0x1000 + 0xaa4)));
        }
    }
}
