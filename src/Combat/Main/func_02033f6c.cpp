#include <globaldefs.h>

struct Struct_02033f6c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

extern "C" void func_02033f7c(struct Struct_02033f6c* arg0, struct Struct_02033f6c* arg1);

// USA: func_02033f6c
extern "C" ARM void func_02033f6c(void* arg0, struct Struct_02033f6c* arg1) {
    func_02033f7c((struct Struct_02033f6c*)((char*)arg0 + 0x114), arg1);
}
