#include <globaldefs.h>

struct FourHalfwords02033f7c {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
};

extern "C" void func_02033f7c(struct FourHalfwords02033f7c* dst, struct FourHalfwords02033f7c* src);

// USA: func_02033fa8
extern "C" ARM void func_02033fa8(void* obj, struct FourHalfwords02033f7c* src) {
    *((unsigned char*)obj + 0xe0) |= 0x80;
    func_02033f7c((struct FourHalfwords02033f7c*)((char*)obj + 0x11c), src);
}
