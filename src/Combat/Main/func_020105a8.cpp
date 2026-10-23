#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" long long _ll_udiv(long long arg0, long long arg1);

struct Struct_020105a8 {
    unsigned char unknown_0_[0x3e8];
    long long unknown_3e8_;   // 0x3e8
};

// USA: func_020105a8
extern "C" ARM void func_020105a8(Struct_020105a8* arg0, int* arg1) {
    *arg1 = (int)(_ll_udiv(GetCurrentTimestamp() << 6, 0x1ff6210)
               - _ll_udiv(arg0->unknown_3e8_ << 6, 0x1ff6210));
}
