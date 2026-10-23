#include <globaldefs.h>

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" void func_020ca390(int val, void* dst, unsigned int nBytes);
extern "C" int func_020ca3b8(int src, int dst, int nBytes);
extern "C" unsigned short func_ov027_021dab38(unsigned short* arg0, int arg1);
extern "C" int func_020d69cc(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned char arg5);

struct Struct_ov027_021dd940_7 {
    unsigned char unknown_0_[0x1c];
    unsigned char* unknown_1c_;
    unsigned char* unknown_20_;
    unsigned char unknown_24_;
    unsigned char unknown_25_[0x26 - 0x25];
    unsigned char unknown_26_;
    unsigned char unknown_27_;
    unsigned char unknown_28_;
    unsigned char unknown_29_;
    unsigned char unknown_2a_[0x40 - 0x2a];
    unsigned int unknown_40_;
    unsigned char unknown_44_0_:2;
    unsigned char unknown_44_2_:6;
    unsigned char unknown_45_;
    unsigned char unknown_46_;
    unsigned char unknown_47_;
    unsigned short unknown_48_;
    unsigned char unknown_4a_;
    unsigned char unknown_4b_;
    unsigned char unknown_4c_;
};

extern Struct_ov027_021dd940_7 data_ov027_021dd940;
extern int data_ov027_021dd980;
extern unsigned short data_ov027_021dd988;
extern unsigned char data_ov027_021dd98e;

#pragma opt_common_subs off
#pragma optimize_for_size off
// USA: func_ov027_021dafc0
extern "C" ARM int func_ov027_021dafc0(int arg0, unsigned short arg1, int arg2) {
    unsigned char* var0 = data_ov027_021dd940.unknown_1c_ + 0x358;
    if (data_ov027_021dd940.unknown_20_ + 0x62 <= var0) {
        data_ov027_021dd940.unknown_4c_ = 0x62;
    } else {
        data_ov027_021dd940.unknown_4c_ = var0 - data_ov027_021dd940.unknown_20_;
        {
            unsigned int var1 = data_ov027_021dd940.unknown_4c_;
            func_020ca390(0, &data_ov027_021dd98e + var1, 0x62 - var1);
        }
    }

    func_020ca3b8((int)data_ov027_021dd940.unknown_20_, (int)&data_ov027_021dd98e, data_ov027_021dd940.unknown_4c_);

    data_ov027_021dd940.unknown_4a_ = data_ov027_021dd940.unknown_27_;
    data_ov027_021dd940.unknown_4b_ = data_ov027_021dd940.unknown_28_;
    data_ov027_021dd940.unknown_44_0_ = data_ov027_021dd940.unknown_1c_[0x4b2];
    data_ov027_021dd940.unknown_45_ = data_ov027_021dd940.unknown_1c_[0x4b3];
    data_ov027_021dd940.unknown_46_ = data_ov027_021dd940.unknown_26_;
    data_ov027_021dd940.unknown_40_ = *(unsigned int*)(data_ov027_021dd940.unknown_1c_ + 0x4b8);
    data_ov027_021dd940.unknown_44_2_ = data_ov027_021dd940.unknown_1c_[0x4b5];
    data_ov027_021dd940.unknown_47_ = data_ov027_021dd940.unknown_29_++;
    data_ov027_021dd940.unknown_48_ = 0;
    data_ov027_021dd940.unknown_48_ = func_ov027_021dab38(&data_ov027_021dd988, 0x68);

    data_ov027_021dd940.unknown_27_ = data_ov027_021dd940.unknown_27_ + 1;
    if (data_ov027_021dd940.unknown_27_ < data_ov027_021dd940.unknown_28_) {
        data_ov027_021dd940.unknown_20_ = data_ov027_021dd940.unknown_20_ + 0x62;
    } else {
        data_ov027_021dd940.unknown_24_ = 4;
    }

    return func_020d69cc(0, (int)&data_ov027_021dd980, 0x70, arg0, arg1, (arg2 | 3) & 0xff);
}
