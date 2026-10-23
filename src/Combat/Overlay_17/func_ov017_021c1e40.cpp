#include <globaldefs.h>

struct ByteHeader0204693c;
extern "C" void func_0204693c(ByteHeader0204693c* p);

struct Struct021c1e40 {
    unsigned char byte0;
    unsigned char pad1[7];
    short h8;
    unsigned char ba0;
    unsigned char bb;
};

// USA: func_ov017_021c1e40
extern "C" ARM void func_ov017_021c1e40(Struct021c1e40* p) {
    func_0204693c((ByteHeader0204693c*)p);
    p->byte0 = 0x42;
    p->ba0 = 0;
    p->bb = 0;
    p->h8 = 0x42 - 0x43;
}
