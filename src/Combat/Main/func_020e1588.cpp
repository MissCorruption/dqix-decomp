#include <globaldefs.h>

struct Struct_020e1568;
extern "C" void func_020e1354(unsigned char* arg0);
extern "C" void func_020e1568(struct Struct_020e1568* arg0);

// USA: func_020e1588
extern "C" ARM void func_020e1588(unsigned char* arg0) {
    *(int*)(arg0 + 0x0) = 0;
    *(int*)(arg0 + 0x4) = 0;
    *(int*)(arg0 + 0x8) = 0;
    func_020e1354(arg0 + 0xc);
    func_020e1354(arg0 + 0x18);
    func_020e1568((struct Struct_020e1568*)(arg0 + 0x24));
    *(int*)(arg0 + 0x30) = 0;
    *(int*)(arg0 + 0x34) = 0;
    arg0[0x39] = 0;
    arg0[0x38] = 0;
    arg0[0x3b] = 0;
    arg0[0x3a] = 0;
    arg0[0x3c] = 0;
    arg0[0x3d] = 0;
    arg0[0x3e] = 0;
    struct Struct_020e1588 { unsigned char unknown_0_0_ : 1; unsigned char unknown_0_1_ : 1; unsigned char unknown_0_2_ : 6; };
    struct Struct_020e1588* var0 = (struct Struct_020e1588*)(arg0 + 0x3f);
    var0->unknown_0_0_ = 0;
    var0->unknown_0_1_ = 0;
}
