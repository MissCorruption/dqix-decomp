#include "GameState/GameState.h"
#include <globaldefs.h>

struct Container020e0310;

extern "C" int func_02041c08(char *dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char *dst, int cursor);
extern "C" char *func_020e0434(struct Container020e0310 *c, int key);
extern "C" int func_020420e8(const char *text, int large);
extern "C" void func_02041a90(char *text, int x, int y);
extern "C" int func_02042058(char *dst, const char *src);
extern "C" int func_02041fac(char *dst, int str, int b);
extern "C" int func_02041b00(char *dst, int h);
extern "C" int func_02041e70(char *dst, int palette);
extern "C" int func_02041b70(char *dst, int n, const char *name);
extern "C" int func_02041a28(char *dst, int x);
extern "C" int func_02041bac(char *dst, int a, int b, int c, int d, int e);
extern "C" int func_02041cc0(char *dst, int a1);
extern "C" void *__clear(void *destination, int count);

extern "C" char data_ov002_0216d2b3[];

// USA: func_ov002_02160ce8
extern "C" ARM void func_ov002_02160ce8(unsigned char *self, char *dst, int flag) {
    unsigned char *sels[3];
    short key;
    int selX;
    unsigned char r;
    short k;
    int x;
    unsigned char c;
    if (dst == NULL) return;
    GameState::GetInstance();
    int cursor  = *(short *) (self + 0x1c0e);
    int row     = 0;
    int nameIdx = 3;
    __clear(sels, 0xc);
    sels[0] = self + 0x1c2c;
    sels[1] = self + 0x1c2d;
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);
    char *title = func_020e0434((struct Container020e0310 *) (self + 0x20), 0xfa6);
    func_02041a90(dst, (0xf0 - func_020420e8(title, 0)) >> 1, 4);
    func_02042058(dst, title);
    func_02041fac(dst, (int) data_ov002_0216d2b3, 0x10);
    key = 0x11f8;
    for (r = 0; r < 3; r++) {
        if (r == 2) {
            func_02041b00(dst, 7);
        }
        func_02041e70(dst, 0xf);
        func_02041b70(dst, row,
                      func_020e0434((struct Container020e0310 *) (self + 0x20), key++));
        if (r != 2) {
            func_02041a28(dst, 0x5a);
            k = 0x11fb;
            func_02041e70(dst, 3);
            func_02042058(
                dst, func_020e0434((struct Container020e0310 *) (self + 0x20), k++));
            x = 0x7d;
            for (c = 0; c < 5; c++) {
                func_02041a28(dst, x);
                int pal = 0xf;
                if (c + 1 == *sels[r]) {
                    pal  = 5;
                    selX = x;
                }
                func_02041e70(dst, pal);
                func_02041b70(dst, nameIdx,
                              func_020e0434((struct Container020e0310 *) (self + 0x20), k++));
                nameIdx++;
                x += 0x10;
            }
            func_02041a28(dst, 0xce);
            func_02041e70(dst, 3);
            func_02042058(
                dst, func_020e0434((struct Container020e0310 *) (self + 0x20), k));
            func_02041a28(dst, selX + 3);
            func_02041e70(dst, 0xf);
            func_02042058(
                dst, func_020e0434((struct Container020e0310 *) (self + 0x20), 0x1202));
        }
        if (r != 2) {
            func_02042058(dst, *(char **) (self + 0x1bdc));
        }
        row++;
    }
    func_02041bac(dst, 0xf, 0x4e, 0x10, 1, 0x24);
    func_02041cc0(dst, 0x34);
}
