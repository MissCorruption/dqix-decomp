#include <globaldefs.h>

extern "C" void func_02037d10(void* arg0);

struct Struct_02048104 {
    unsigned short unknown_0_;   // 0x0
};

// USA: func_02048104
extern "C" ARM void func_02048104(struct Struct_02048104* arg0) {
    func_02037d10(arg0);
    arg0->unknown_0_ |= 0x200;
}
