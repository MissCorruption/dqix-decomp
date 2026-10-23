#include <globaldefs.h>

struct Reloc02b02d0 {
    unsigned short count;
    unsigned short pad;
    unsigned int *arr;
};

extern "C" void func_020b02d0(struct Reloc02b02d0 *h);

// USA: func_020b0094
extern "C" ARM void func_020b0094(char *base) {
    func_020b02d0((struct Reloc02b02d0 *)(base + 8));
}
