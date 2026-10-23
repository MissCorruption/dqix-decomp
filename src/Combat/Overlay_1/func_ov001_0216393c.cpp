#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);

struct Actor0209c678;
extern "C" void func_0209c678(struct Actor0209c678* actor, int arg);

extern int data_02109bf4;

// USA: func_ov001_0216393c
extern "C" ARM int func_ov001_0216393c(void* obj, int val) {
    int arg = 0x1e;
    if (val > 0) arg = func_ov017_021d60f4(obj);
    func_0209c678((struct Actor0209c678*)&data_02109bf4, arg);
    return 1;
}
