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

// USA: func_ov017_02191ba0
extern "C" ARM void func_ov017_02191ba0(char* arg0, int arg1, int arg2) {
    int var0 = arg1 >= 0 && arg1 <= 3;
    if (!var0) return;
    Struct_ov017_02191b70* var1 = (Struct_ov017_02191b70*)arg0;
    var1->unknown_449c_[arg1].unknown_2_ = arg2;
    var1->unknown_449c_[arg1].unknown_0_ = 1;
}
