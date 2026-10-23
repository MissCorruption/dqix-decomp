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

struct GameState;
extern "C" unsigned char func_02011804(GameState* gameState);
extern "C" void func_02041c08(char *buf, int x, int a, int b, int c, int d);
extern "C" void func_02041ea4(char *buf, int x);
extern "C" const char *func_020e0434(Container020e0310 *tbl, int key);
extern "C" void func_02041fac(char *buf, int str, int n);
extern "C" void func_02041b70(char *buf, int i, const char *str);
extern "C" void func_02042058(char *buf, const char *str);

// USA: func_ov002_0215c52c
extern "C" ARM void func_ov002_0215c52c(unsigned char *self, char *buf, int frame) {
    if (buf == 0) return;
    short key = 0x3ea;
    int n     = 3;
    short x   = *(short *) (self + RG(0x1be4, 0x1aac));
    if (func_02011804(GameState::GetInstance()) == 0) n = 2;
    if (frame) func_02041c08(buf, x, 8, 5, 5, 5);
    func_02041ea4(buf, x);
    func_02041fac(
        buf, (int) func_020e0434((Container020e0310 *) (self + RG(0x20, 0x8)), 1000), 0x18);
    for (int i = 0; i < n; i++) {
        func_02041b70(buf, i, func_020e0434((Container020e0310 *) (self + RG(0x20, 0x8)), key++));
        if (i != n - 1) func_02042058(buf, *(const char **) (self + RG(0x1bdc, 0x1aa4)));
    }
}
