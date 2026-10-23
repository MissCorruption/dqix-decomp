#include "GameState/GameState.h"
#include <globaldefs.h>

struct TableA68;
struct Obj02046574;
struct StoreStruct;
struct S020466c8;
struct Container020e0310;
extern "C" void *func_02072a68(struct TableA68 *table, int key);
extern "C" GameObject *func_0200ff1c(GameState *gameState, int combatantId);
extern "C" void *func_020421a0();
extern "C" int func_02042058(char *dst, const char *src);
extern "C" int func_020e0434(struct Container020e0310 *c, int key);
extern "C" void func_02046574(struct Obj02046574 *obj, int index, char *str);
extern "C" void func_020e4bf4(void *obj, int combatantId);
extern "C" void *func_020e5294(void *p, int key);
extern "C" void func_020465c0(struct StoreStruct *base, int index, int value);
extern "C" void func_020466c8(struct S020466c8 *p, int v);
extern "C" int func_ov002_021574d4(void *base, int idx);
extern "C" void *func_0209a594(void *p, int key);
extern "C" void func_02046380(void *g);
extern "C" void func_020e4864(void *src, void *dst, int a, int b, int c, int d);
extern "C" void func_0204500c(void *obj, char *buffer, int a, int b);
extern "C" void *memset(void *dst, int c, unsigned int n);
extern "C" void *__clear(void *dst, int count);

struct Ev021685bc {
    unsigned short lo : 11;
    unsigned short k : 5;
    short item;
    unsigned int a : 5;
    unsigned int pad : 7;
    unsigned int b : 8;
    unsigned int type : 5;
    unsigned int rest : 7;
};

// USA: func_ov002_021685bc
extern "C" ARM void func_ov002_021685bc(unsigned char *base) {
    while (*(base + 0x2000 + 0x454) < *(base + 0x2000 + 0x455)) {
        struct Ev021685bc *e = (struct Ev021685bc *) func_0209a594(
            base + 0x3c + 0x2400, (*(unsigned short **) (base + 0x2000 + 0x450))[*(base + 0x2000 + 0x454)]);
        char *s = NULL;
        if (e != NULL) {
            s = (char *) func_02072a68(*(struct TableA68 **) (base + 0x2000 + 0x448), e->type);
        }
        if (s != NULL) {
            GameState *gs = GameState::GetInstance();
            int id        = func_ov002_021574d4(base, *(short *) (base + 0x1c00 + 8));
            GameObject *c = func_0200ff1c(gs, id);
            if (c != NULL) {
                char obj[0xc];
                char tmp[0x80];
                unsigned char *g = (unsigned char *) func_020421a0();
                memset(*(char **) (base + 0x1000 + 0xbd0), 0, 0x960);
                func_02042058(*(char **) (base + 0x1000 + 0xbd0), s);
                func_02042058(*(char **) (base + 0x1000 + 0xbd0),
                                     (const char *) func_020e0434((struct Container020e0310 *) (base + 0x20), 7));
                func_02046380(g);
                func_02046574((struct Obj02046574 *) g, 0, *(char **) ((char *) c + 0x134));
                func_020e4bf4(obj, id);
                *(void **) g = obj;
                if (e->type == 1) {
                    void **r            = (void **) func_020e5294(*(void **) (base + 0x2000 + 0x44c), e->item);
                    *(void ***) (g + 8) = r;
                    __clear(tmp, 0x80);
                    func_020e4864(*r, tmp, 1, 0, 0, 0);
                    func_02046574((struct Obj02046574 *) g, 1, tmp);
                } else {
                    func_02046574(
                        (struct Obj02046574 *) g, 1,
                        (char *) func_02072a68(*(struct TableA68 **) (base + 0x2000 + 0x448), (short) (e->a + 0x64)));
                }
                int slot = 2;
                if (e->type == 4 || e->type == 0x10) slot = 1;
                func_02046574(
                    (struct Obj02046574 *) g, slot,
                    (char *) func_02072a68(*(struct TableA68 **) (base + 0x2000 + 0x448), (short) (e->k + 0xc8)));
                func_020465c0((struct StoreStruct *) g, 0, e->b);
                func_020466c8((struct S020466c8 *) g, (*(int **) base)[4]);
                func_0204500c(g, *(char **) (base + 0x1000 + 0xbd0), 0, 0xe3);
                *(g + 0x1000 + 0x9b2) = 0;
                *(int *) (g + 0x998)  = 1;
                (*(base + 0x2000 + 0x454))++;
                (*(int *) (base + 0x1000 + 0xbc0))++;
                return;
            }
        }
        (*(base + 0x2000 + 0x454))++;
    }
    (*(int *) (base + 0x1000 + 0xbc0))++;
}
