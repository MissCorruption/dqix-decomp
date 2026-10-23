#include <globaldefs.h>

struct ByteHeader0204693c { signed char byte0, byte1, byte2, byte3; };
extern "C" void func_0204693c(ByteHeader0204693c* p);
extern int data_ov017_021d8478;

struct Obj021c1350 {
    ByteHeader0204693c header;
    unsigned char pad[0x18];
    unsigned char f1c;
    unsigned char f1d;
    unsigned char f1e;
    unsigned char f1f;
};

// USA: func_ov017_021c1350
extern "C" ARM void func_ov017_021c1350(Obj021c1350* obj, unsigned char a, unsigned char b) {
    func_0204693c(&obj->header);
    obj->header.byte0 = 0x2e;
    data_ov017_021d8478 = 0;
    obj->f1c = 0;
    obj->f1e = a;
    obj->f1f = b;
    obj->f1d = 0xff;
}
