#include <globaldefs.h>

struct StatStageStruct0208806c {
    char pad18[0x18];
    unsigned int flags18;
    char pad2[0x3c];
    int : 24;
    int stage : 3;
};

extern "C" void func_020880e4(void* obj);

// USA: func_0208806c
extern "C" ARM int func_0208806c(struct StatStageStruct0208806c* p, int delta) {
    int newStage = p->stage + delta;
    if (newStage > 2) newStage = 2;
    if (newStage < -2) newStage = -2;
    if (newStage == 0) {
        func_020880e4(p);
        return 0;
    }
    p->stage = newStage;
    *((unsigned char*)p + 0x76) = 5;
    *((unsigned char*)p + 0x99) = 0;
    p->flags18 |= 0x1;
    return p->stage;
}
