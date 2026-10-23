#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02167494_104 = 0x38 };
enum { Enum_ov003_02167494_116 = 0x44 };
enum { Enum_ov003_02167494_112 = 0x40 };
#else
enum { Enum_ov003_02167494_104 = 0x68 };
enum { Enum_ov003_02167494_116 = 0x74 };
enum { Enum_ov003_02167494_112 = 0x70 };
#endif


struct Struct_0207fc6c;
extern "C" void func_0207fc6c(struct Struct_0207fc6c* arg0, int arg1);

struct Struct_ov003_02167494 {
    char unknown_0_[0x10];
    void* unknown_10_;
    char unknown_14_[Enum_ov003_02167494_104 - 0x14];
    int unknown_68_;
    int unknown_6c_;
    char unknown_70_[Enum_ov003_02167494_116 - Enum_ov003_02167494_112];
    unsigned char unknown_74_;
};

// USA: func_ov003_02167494
extern "C" ARM void func_ov003_02167494(struct Struct_ov003_02167494* arg0, int arg1) {
    if (arg0->unknown_74_ == 0 || arg0->unknown_10_ == 0) return;

    if (arg1 == 0) arg1 = 1;
    func_0207fc6c((struct Struct_0207fc6c*)arg0->unknown_10_, arg1);

    *(volatile int*)0x4001010 = 0;

    arg0->unknown_68_ -= arg1 << 11;
    arg0->unknown_6c_ += arg1 << 11;

    if (arg0->unknown_68_ < -0x100000) {
        arg0->unknown_68_ += 0x100000;
    }
    if (arg0->unknown_6c_ > 0x100000) {
        arg0->unknown_6c_ -= 0x100000;
    }

    int var0 = 0x1ff;
    int var1 = arg0->unknown_6c_ >> 12;
    int var2 = var0 << 16;
    int var3 = var2 & (var1 << 16);
    int var4 = var0 & (arg0->unknown_68_ >> 12);
    *(volatile int*)0x4001014 = var4 | var3;
}
