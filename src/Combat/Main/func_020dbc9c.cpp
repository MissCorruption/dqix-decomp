#include <globaldefs.h>

struct ByteHeader0204693c;
extern "C" void func_0204693c(struct ByteHeader0204693c* p);

struct Struct020dbc9c {
    signed char byte0;
    signed char pad1[7];
    signed char byte8;
    signed char pad2[3];
    int word_c;
    int word_10;
};

// USA: func_020dbc9c
extern "C" ARM void func_020dbc9c(struct Struct020dbc9c* p) {
    func_0204693c((struct ByteHeader0204693c*)p);
    p->byte0 = 0x4c;
    p->byte8 = 0;
    p->word_c = 0;
    p->word_10 = 0;
}
