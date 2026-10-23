#include <globaldefs.h>

struct Struct_ov000_021735d0_2 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct Struct_ov000_021735d0_3 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x17c - 0x70];
    int unknown_17c_;
};

// USA: func_ov000_0217f8c0
extern "C" ARM struct Struct_ov000_021735d0_2* func_ov000_0217f8c0(struct Struct_ov000_021735d0_3* arg0) {
    int var0;
    for (var0 = 0; var0 < 4; var0++) {
        struct Struct_ov000_021735d0_2* var1 = (struct Struct_ov000_021735d0_2*)((char*)arg0 + 0x958) + arg0->unknown_6c_[var0];
        if (arg0->unknown_17c_ == var1->unknown_4c_) {
            return var1;
        }
    }
    return 0;
}
