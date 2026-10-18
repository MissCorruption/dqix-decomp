#include <globaldefs.h>

struct Entity02223ff8 {
    unsigned char pad0[0x30];
    int* field30;
    unsigned char pad1[0x11d - 0x34];
    unsigned char field11d;
};

struct Pair02223ff8 { int off; int hi; };

extern Entity02223ff8* data_ov031_02250bfc;
extern "C" void func_ov031_02224ca4(int a, int idx, int off);
extern "C" void func_ov031_0223e2b8(void* obj, int v);
extern "C" void func_ov031_0222408c(void* obj);

// USA: func_ov031_02223ff8
extern "C" ARM void func_ov031_02223ff8(void* obj) {
    Entity02223ff8* e = data_ov031_02250bfc;
    int val = *e->field30;
    struct Pair02223ff8 p;
    struct Pair02223ff8* pp = &p;
    pp->hi = (unsigned int)(val & 0x1ff0000) >> 0x10;
    p.off = (val & 0xff) - 0xc;
    if (p.off > 0x51) {
        func_ov031_02224ca4(e->field11d, 0, p.off);
        return;
    }
    func_ov031_02224ca4(e->field11d, 0, 0x51);
    func_ov031_02224ca4(data_ov031_02250bfc->field11d, 1, 0xc0);
    func_ov031_0223e2b8(obj, (int)func_ov031_0222408c);
}
