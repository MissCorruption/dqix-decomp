#include "GameState/GameState.h"
#include <globaldefs.h>

struct StoreStruct;
struct Container020e0310;
struct Cur0215fcc0 {
    int hdr;
    unsigned short currHP;
    unsigned short currMP;
};
struct Xs0215fcc0 {
    int v[5];
};
extern "C" int func_020e0434(struct Container020e0310 *c, int key);
extern "C" int func_02041a5c(char *dst, int y);
extern "C" int func_02041a28(char *dst, int x);
extern "C" int func_02041acc(char *dst, int w);
extern "C" int func_02042058(char *dst, const char *src);
extern "C" int func_02041fac(char *buf, int a, int b);
extern "C" const char *func_020e51cc(int key);
extern "C" char *func_020421a0();
extern "C" void func_020465c0(struct StoreStruct *base, int index, int value);
extern "C" void func_020465f0(unsigned char *messages, int index, unsigned char digits);
extern "C" void func_020465d8(unsigned char *messages, int index, unsigned char value);
extern "C" void func_02046380(void *g);
extern "C" int func_020420e8(const char *text, int large);
extern "C" int sprintf(char *dst, const char *fmt, ...);
extern "C" void *__clear(void *dst, int count);
extern "C" char data_ov002_0216d285[];
extern "C" char data_ov002_0216d2ae[];
extern "C" char data_ov002_0216d2b3[];
extern "C" struct Xs0215fcc0 data_ov002_0216ca30;

// USA: func_ov002_0215fcc0
extern "C" ARM void func_ov002_0215fcc0(char *base, char *dst) {
    char line[0x200];
    char tmp[0x100];
    char numA[0x10];
    char numB[0x10];
    GameObject *m;
    if (dst == NULL) return;
    GameState *gs = GameState::GetInstance();
    short k1      = 0x10fe;
    short k2      = 0x1112;
    m             = gs->GetPartyMemberByIndex(*(signed char *) (base + 0x1c00 + 0x20));
    if (m == NULL) return;
    const char *name = *(const char **) ((char *) m + 0x134);
    int w            = func_020420e8(name, 0);
    __clear(line, 0x200);
    char *f = *(char **) ((char *) m + 0x150);
    int val;
    int lv = *(unsigned char *) (f + *(int *) (f + 0x950) + 0x186);
    val    = *(unsigned short *) (f + *(int *) (f + 0x950) * 2 + 0x16c);
    if (lv != 0) {
        const char *title =
            (const char *) func_020e0434((struct Container020e0310 *) (base + 0x20), (short) (lv + 0x8fc));
        func_02041a5c(line, 4);
        func_02042058(line, name);
        func_02041acc(line, 0x10);
        func_02042058(line, title);
        func_02041acc(line, 4);
        func_02042058(line, func_020e51cc(0x3f3));
        __clear(numA, 0x10);
        sprintf(numA, data_ov002_0216d285, val);
        func_02042058(line, numA);
    } else {
        func_02041a5c(line, 4);
        func_02042058(line, name);
        func_02041acc(line, 0x12);
        func_02042058(line, func_020e51cc(0x3f3));
        __clear(numB, 0x10);
        sprintf(numB, data_ov002_0216d285, val);
        func_02042058(line, numB);
    }
    __clear(tmp, 0x100);
    sprintf(tmp, data_ov002_0216d2ae, func_020e51cc(0x3f3), val);
    int tw = w + 0x12 + func_020420e8(tmp, 0);
    if (lv != 0) tw += 9;
    int x                             = (0x80 - tw) >> 1;
    *(short *) (base + 0x2400 + 0x5c) = w + x + 1;
    func_02041a28(dst, x);
    func_02042058(dst, line);
    func_02041fac(dst, (int) data_ov002_0216d2b3, 0x10);
    unsigned char *g = (unsigned char *) func_020421a0();
    func_02046380(g);
    struct Xs0215fcc0 xs = data_ov002_0216ca30;
    int stats[7]         = {
        (*(struct Cur0215fcc0 **) ((char *) m + 0x130))->currHP,
        m->baseStats_->primaryStats.maxHP,
        (*(struct Cur0215fcc0 **) ((char *) m + 0x130))->currMP,
        m->baseStats_->primaryStats.maxMP,
        m->baseStats_->primaryStats.attack,
        m->baseStats_->primaryStats.defense,
        m->baseStats_->primaryStats.agility,
    };
    for (int i = 0; i < 7; i++) {
        func_020465d8(g, i, 1);
        func_020465f0(g, i, 3);
        func_020465c0((struct StoreStruct *) g, i, stats[i]);
    }
    for (int i = 0; i < 5; i++) {
        func_02042058(dst, (const char *) func_020e0434((struct Container020e0310 *) (base + 0x20), k1++));
        func_02041a28(dst, xs.v[i]);
        func_02042058(dst, (const char *) func_020e0434((struct Container020e0310 *) (base + 0x20), k2++));
        if (i != 4) {
            func_02042058(dst, *(const char **) (base + 0x1000 + 0xbdc));
        }
    }
}
