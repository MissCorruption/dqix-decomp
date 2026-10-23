#include <globaldefs.h>

extern "C" void func_02012fe4(void* arg0);

struct Struct_02010604;
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);

struct Struct_02076d34 {
    char unknown_0_[0xb2];
    unsigned short unknown_b2_;
};

// USA: func_02076d34
extern "C" ARM int func_02076d34(struct Struct_02076d34* arg0) {
    func_02012fe4(arg0);
    arg0->unknown_b2_ = 0;
    func_02033b88((struct Struct_02010604*)arg0, 5);
    return 1;
}
