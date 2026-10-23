#include <globaldefs.h>

struct Struct_ov017_02191b70_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};

struct Struct_ov017_02191b70 {
#if defined(jpn)
    unsigned char unknown_0_[0x41ec];
#else
    unsigned char unknown1_0_[0x449c];
#endif
    Struct_ov017_02191b70_2 unknown_449c_[4];
};

// USA: func_ov017_02191b70
extern "C" ARM void func_ov017_02191b70(void* arg0) {
    Struct_ov017_02191b70* var0 = (Struct_ov017_02191b70*)arg0;
    Struct_ov017_02191b70_2* var1 = var0->unknown_449c_;
    for (int var2 = 0; var2 < 4; ++var2) {
        var1->unknown_0_ = 0;
        var1->unknown_2_ = 0;
        ++var1;
    }
}
