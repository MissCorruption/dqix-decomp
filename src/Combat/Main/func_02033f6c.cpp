#include <globaldefs.h>

struct FourHalfwords02033f7c {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
};

extern "C" void func_02033f7c(struct FourHalfwords02033f7c* dst, struct FourHalfwords02033f7c* src);

// USA: func_02033f6c
extern "C" ARM void func_02033f6c(void* obj, struct FourHalfwords02033f7c* src) {
    func_02033f7c((struct FourHalfwords02033f7c*)((char*)obj + 0x114), src);
}
