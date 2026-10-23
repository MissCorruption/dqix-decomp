#include <globaldefs.h>

struct ByteHeader0204693c;
extern "C" void func_0204693c(ByteHeader0204693c* p);

struct Struct021a942c {
    unsigned char byte0;
    unsigned char pad1[7];
    int w8;
    int wc;
    int w10;
};

// USA: func_ov017_021a942c
extern "C" ARM void func_ov017_021a942c(Struct021a942c* p) {
    func_0204693c((ByteHeader0204693c*)p);
    p->byte0 = 0x39;
    p->w8 = 0;
    p->wc = 0;
    p->w10 = 0;
}
