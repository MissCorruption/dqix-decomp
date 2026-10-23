#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_02042638(char *buf, int str, int n);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Container020e0310;

extern "C" void *func_0202ae18(void);
extern "C" int func_ov002_02159774(void *self, int idx, int a, int b, int c);
extern "C" void func_02041c08(char *buf, int x, int a, int b, int c, int d);
extern "C" void func_02041ea4(char *buf, int x);
extern "C" const char *func_020e0434(Container020e0310 *tbl, int key);
extern "C" void func_02041fac(char *buf, int str, int n);
extern "C" void func_02041e70(char *buf, int pal);
extern "C" void func_02041b70(char *buf, int i, const char *str);
extern "C" void func_02042058(char *buf, const char *str);

// USA: func_ov002_0215c72c
extern "C" ARM void func_ov002_0215c72c(char *self, char *buf, int frame) {
    if (buf == 0) return;
    func_0202ae18();
    void *gs = GameState::GetInstance();
    short x  = *(short *) (self + RG(0x1be6, 0x1aae));
    int n    = 0;
    if (frame) func_02041c08(buf, x, 8, 5, 5, 5);
    func_02041ea4(buf, x);
    func_02041fac(
        buf, (int) func_020e0434((Container020e0310 *) (self + RG(0x20, 0x8)), 0x44c), 0x18);
    for (int i = 0; i < *(signed char *) (self + RG(0x1c73, 0x1b37)); i++) {
        unsigned char *m = (unsigned char *)((GameState*)gs)->GetPartyMemberByIndex(((signed char *) (self + RG(0x1c6e, 0x1b32)))[i]);
        if (m != 0) {
            func_02041e70(buf, func_ov002_02159774(self, ((signed char *) (self + RG(0x1c6e, 0x1b32)))[i], 0, 1, 1));
            func_02041b70(buf, n, *(const char **) (m + 0x134));
            func_02041e70(buf, 0xf);
            func_02042058(buf, *(const char **) (self + RG(0x1bdc, 0x1aa4)));
            n++;
        }
    }
    func_02041b70(buf, n, func_020e0434((Container020e0310 *) (self + RG(0x20, 0x8)), 0x44d));
    if (*(unsigned char *) (self + RG(0x2485, 0x22b5)) == 0) {
        func_02042058(buf, *(const char **) (self + RG(0x1bdc, 0x1aa4)));
        func_02041b70(buf, n + 1, func_020e0434((Container020e0310 *) (self + RG(0x20, 0x8)), 0x44e));
    }
}
