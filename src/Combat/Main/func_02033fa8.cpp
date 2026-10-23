#include <globaldefs.h>

struct Struct_02033f6c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

extern "C" void func_02033f7c(struct Struct_02033f6c* arg0, struct Struct_02033f6c* arg1);

// USA: func_02033fa8
extern "C" ARM void func_02033fa8(void* arg0, struct Struct_02033f6c* arg1) {
    *((unsigned char*)arg0 + 0xe0) |= 0x80;
    func_02033f7c((struct Struct_02033f6c*)((char*)arg0 + 0x11c), arg1);
}
