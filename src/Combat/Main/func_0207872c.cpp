#include <globaldefs.h>

extern "C" int func_0207964c(void* obj);

struct Obj02033b68 {
    char pad[0xbe];
    unsigned char fbe;
    unsigned char fbf;
};
extern "C" void func_02033b68(struct Obj02033b68* obj, int newVal);

// USA: func_0207872c
extern "C" ARM int func_0207872c(struct Obj02033b68* p) {
    if (p->fbe != 2) {
        func_02033b68(p, 2);
    }
    return func_0207964c(p);
}
