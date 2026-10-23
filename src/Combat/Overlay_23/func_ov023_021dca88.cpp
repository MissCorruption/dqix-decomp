#include <globaldefs.h>

extern "C" void func_ov023_021db2e4(volatile int* arg0);

#if defined(jpn)
enum { Enum_ov023_021dca88_1844 = 0x6b0, Enum_ov023_021dca88_1848 = 0x6b4, Enum_ov023_021dca88_1910 = 0x6f2, Enum_ov023_021dca88_1779 = 0x6f3 };
#else
enum { Enum_ov023_021dca88_1844 = 0x734, Enum_ov023_021dca88_1848 = 0x738, Enum_ov023_021dca88_1910 = 0x776, Enum_ov023_021dca88_1911 = 0x777 };
#endif

struct Struct_ov023_021dca88 {
    unsigned char unknown_0_[Enum_ov023_021dca88_1844];
    int unknown_734_;
    int unknown_738_[7];
    unsigned char unknown_754_[Enum_ov023_021dca88_1910 - Enum_ov023_021dca88_1848 - 7 * sizeof(int)];
    unsigned char unknown_776_;
    unsigned char unknown_777_;
};

// USA: func_ov023_021dca88
extern "C" ARM void func_ov023_021dca88(void* arg0) {
    Struct_ov023_021dca88* var0 = (Struct_ov023_021dca88*)arg0;
    if (var0->unknown_776_ == 2) return;
    func_ov023_021db2e4(&var0->unknown_734_);
    for (int var1 = 0; var1 < 7; var1++) {
        func_ov023_021db2e4(&var0->unknown_738_[var1]);
    }
    var0->unknown_776_ = 2;
    var0->unknown_777_ = 0;
}
