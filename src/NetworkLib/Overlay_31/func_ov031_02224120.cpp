#include <globaldefs.h>

struct Entity02224120 {
    unsigned char pad0[0x90];
    int* field90;
    unsigned char pad1[0x11d - 0x94];
    unsigned char field11d;
};

struct Pair02224120 { int off; int hi; };

extern Entity02224120* data_ov031_02250bfc;
extern "C" void func_ov031_02224ca4(int a, int idx, int off);
extern "C" void func_ov031_0223e2b8(void* obj, int v);
extern "C" void func_ov031_022241b4(void* obj);

// USA: func_ov031_02224120
extern "C" ARM void func_ov031_02224120(void* obj) {
    Entity02224120* e = data_ov031_02250bfc;
    int val = *e->field90;
    struct Pair02224120 p;
    struct Pair02224120* pp = &p;
    pp->hi = (unsigned int)(val & 0x1ff0000) >> 0x10;
    p.off = (val & 0xff) - 0xc;
    if (p.off > 0x7d) {
        func_ov031_02224ca4(e->field11d, 2, p.off);
        return;
    }
    func_ov031_02224ca4(e->field11d, 2, 0x7d);
    func_ov031_02224ca4(data_ov031_02250bfc->field11d, 3, 0xc0);
    func_ov031_0223e2b8(obj, (int)func_ov031_022241b4);
}
