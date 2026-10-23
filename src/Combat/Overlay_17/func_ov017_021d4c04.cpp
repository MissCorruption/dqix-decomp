#include <globaldefs.h>
#include "std_library_functions.h"

extern const char data_ov017_021d82d4[];

struct Struct_ov017_021d4c04 {
    int unknown_0_;
    char unknown_4_[0xc - 0x4];
    int unknown_c_;
    int unknown_10_;
    char unknown_14_[0x18 - 0x14];
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    char unknown_28_[0x2c - 0x28];
    int unknown_2c_;
    char unknown_30_[0x44 - 0x30];
    void* unknown_44_;
    void* unknown_48_;
};

// USA: func_ov017_021d4c04
extern "C" ARM void func_ov017_021d4c04(struct Struct_ov017_021d4c04* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5) {
    arg0->unknown_10_ = arg2;
    arg0->unknown_c_ = arg3;
    arg0->unknown_24_ = arg4;
    arg0->unknown_20_ = arg5;
    arg0->unknown_18_ = arg0->unknown_10_ + (arg3 << 3);
    arg0->unknown_2c_ = arg5 * 0xc + arg0->unknown_24_;
    arg0->unknown_44_ = arg1;
    arg0->unknown_48_ = (char*)arg1 + *(int*)((char*)arg1 + 8);
    if (strncmp((char*)arg0->unknown_44_, data_ov017_021d82d4, 3) != 0) return;
    arg0->unknown_0_ = 2;
    arg0->unknown_1c_ = arg0->unknown_10_;
    arg0->unknown_10_ = arg0->unknown_10_ + *(int*)((char*)arg0->unknown_44_ + 0x18) * 8;
    arg0->unknown_c_ = arg0->unknown_c_ - *(int*)((char*)arg0->unknown_44_ + 0x18);
    memset((void*)arg0->unknown_1c_, 0, *(int*)((char*)arg0->unknown_44_ + 0x18) * 8);
}
