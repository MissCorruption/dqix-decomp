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

extern "C" void func_ov002_02157424(void *self, int *slots);
extern "C" int func_ov002_02159774(void *self, int idx, int a, int b, int c);
extern "C" void func_02041c08(char *buf, int x, int a, int b, int c, int d);
extern "C" void func_02041ea4(char *buf, int x);
extern "C" const char *func_020e0434(Container020e0310 *tbl, int key);
extern "C" void func_02041fac(char *buf, int str, int n);
extern "C" void func_02041e70(char *buf, int pal);
extern "C" void func_02041b70(char *buf, int i, const char *str);
extern "C" void func_02042058(char *buf, const char *str);

// USA: func_ov002_0215db8c
extern "C" ARM void func_ov002_0215db8c(char *self, char *buf, int frame) {
    int slots[7];
    if (buf == 0) return;
    void *gs  = GameState::GetInstance();
    short x   = *(short *) (self + RG(0x1bf0, 0x1ab8));
    short key = 0x76d;
    func_ov002_02157424(self, slots);
    if (frame) func_02041c08(buf, x, 8, 5, 5, 5);
    func_02041ea4(buf, x);
    func_02041fac(
        buf, (int) func_020e0434((Container020e0310 *) (self + RG(0x20, 0x8)), 0x76c), 0x10);
    int slot;
    int n = *(int *) (self + RG(0x1c38, 0x1afc)) + 1;
    int i;
    for (i = 0; i < n; i++) {
        slot   = slots[i];
        int ok = (slot >= 0 && slot <= 3);
        if (ok) {
            unsigned char *m = (unsigned char *)((GameState*)gs)->GetPartyMemberByIndex(slot);
            if (m != 0) {
                func_02041e70(buf, func_ov002_02159774(self, slot, 0, 1, 1));
                func_02041b70(buf, i, *(const char **) (m + 0x134));
                func_02041e70(buf, 0xf);
            }
        } else {
            func_02041b70(buf, i, func_020e0434((Container020e0310 *) (self + RG(0x20, 0x8)), key++));
        }
        if (i != n - 1) func_02042058(buf, *(const char **) (self + RG(0x1bdc, 0x1aa4)));
    }
}
