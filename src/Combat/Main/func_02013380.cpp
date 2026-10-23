#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);

struct Struct_02013380 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_02013380
extern "C" ARM void func_02013380(Struct_02013380* arg0, int arg1, int arg2) {
    func_0205ec34();
    if (arg2 != 0)
        arg0->unknown_2_ &= ~4;
    else
        arg0->unknown_2_ |= 4;
    arg0->unknown_2_ |= 0x40;
}
