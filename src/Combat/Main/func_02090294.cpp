#include <globaldefs.h>

struct Entry_02028bd0;
extern "C" struct Entry_02028bd0* func_02027ca4(void);
struct Element0x318_02028bac;
extern "C" struct Element0x318_02028bac* func_02028bac(struct Element0x318_02028bac* base, int index);

struct Obj02090294 {
#if defined(jpn)
    char pad0[0x296];
#else
    char pad0[0x276];
#endif
    signed char field276;
};

// USA: func_02090294
extern "C" ARM int func_02090294(struct Obj02090294* obj) {
    struct Element0x318_02028bac* table = (struct Element0x318_02028bac*)func_02027ca4();
    int i = 0;
    int j;
retry:
    if (obj->field276 > 4) {
        obj->field276 = 0;
    }
    for (j = i; j < 4; j++) {
        struct Element0x318_02028bac* entry = func_02028bac(table, j);
        if (entry != 0) {
            if (*((signed char*)entry + 0xd) == obj->field276) {
                obj->field276++;
                goto retry;
            }
        }
    }
    int k;
    for (k = 0; k < 4; k++) {
        func_02028bac(table, k);
    }
    signed char old = obj->field276;
    obj->field276 = old + 1;
    return old;
}
