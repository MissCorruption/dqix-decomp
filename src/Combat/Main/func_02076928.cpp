#include <globaldefs.h>

extern int data_02114e50;

struct Struct_02076080 {
    char unknown_0_[0x20];
    int* unknown_20_;           // 0x20
    char unknown_24_[0x30];    // 0x24..0x53
    int unknown_54_;            // 0x54
    char unknown_58_[0x7];     // 0x58..0x5e
    unsigned char unknown_5f_;  // 0x5f
    int unknown_60_;            // 0x60
    int unknown_64_;            // 0x64
    int unknown_68_;            // 0x68
    int unknown_6c_;            // 0x6c
};

// USA: func_02076928
extern "C" ARM void func_02076928(struct Struct_02076080* arg0, int arg1) {
    int* var0;
    if (arg0->unknown_5f_ == 0) return;
    if (arg0->unknown_54_ <= 0) return;
    if (arg0->unknown_64_ == arg1 || arg1 == 0) return;
    arg0->unknown_60_ = 0;
    arg0->unknown_64_ = arg1;
    arg0->unknown_68_ = data_02114e50;
    var0 = arg0->unknown_20_;
    arg0->unknown_6c_ = ((int*)var0[arg0->unknown_64_])[arg0->unknown_60_];
}
