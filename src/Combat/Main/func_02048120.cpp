#include <globaldefs.h>

extern "C" void func_02032e58(void* arg0);

struct Struct_02048120 {
    unsigned short unknown_0_;   // 0x0
    char unknown_2_[0x12e];        // 0x2..0x12f
    void* unknown_130_;         // 0x130
};

// USA: func_02048120
extern "C" ARM void func_02048120(struct Struct_02048120* arg0) {
    func_02032e58(arg0);
    arg0->unknown_0_ |= 0x40;
    arg0->unknown_130_ = 0;
}
