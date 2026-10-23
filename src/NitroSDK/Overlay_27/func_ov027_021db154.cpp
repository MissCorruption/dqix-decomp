#include <globaldefs.h>

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" unsigned short func_ov027_021dab38(unsigned short* arg0, int arg1);
extern "C" void func_020ca390(int val, void* dst, unsigned int size);
extern "C" void func_020ca3b8(int src, void* dst, int size);
extern "C" void func_ov027_021db124(void);
extern "C" int func_020d69cc(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned char arg5);

struct Struct_0202bc00 { unsigned char unknown_0_[0x16]; };

struct Struct_ov027_021db154 {
    unsigned char unknown_0_[0x358];
    unsigned char unknown_358_;
    unsigned char unknown_359_[0x35a - 0x359];
    unsigned short unknown_35a_;
    unsigned short unknown_35c_;
    Struct_0202bc00 unknown_35e_[15];
    unsigned char unknown_4a8_[8];
    unsigned short unknown_4b0_;
    unsigned char unknown_4b2_[0x4b3 - 0x4b2];
    unsigned char unknown_4b3_;
    unsigned char unknown_4b4_;
    unsigned char unknown_4b5_;
    unsigned char unknown_4b6_[0x4b8 - 0x4b6];
    unsigned int unknown_4b8_;
};

struct Struct_ov027_021dd940_9 {
    unsigned char unknown_0_[0x10];
    unsigned int unknown_10_;
    void (*unknown_14_)(unsigned int);
    unsigned char unknown_18_[0x1c - 0x18];
    Struct_ov027_021db154* unknown_1c_;
    unsigned char unknown_20_[0x24 - 0x20];
    unsigned char unknown_24_;
    unsigned char unknown_25_[0x26 - 0x25];
    unsigned char unknown_26_;
    unsigned char unknown_27_[0x29 - 0x27];
    unsigned char unknown_29_;
    unsigned char unknown_2a_[0x40 - 0x2a];
    unsigned int unknown_40_;
    unsigned char unknown_44_;
    unsigned char unknown_45_;
    unsigned char unknown_46_;
    unsigned char unknown_47_;
    unsigned short unknown_48_;
    unsigned char unknown_4a_;
    unsigned char unknown_4b_[0x4c - 0x4b];
    unsigned short unknown_4c_;
    unsigned short unknown_4e_;
};

extern Struct_ov027_021dd940_9 data_ov027_021dd940;
extern int data_ov027_021dd980 __attribute__((aligned(32)));
extern unsigned short data_ov027_021dd988;
extern unsigned char data_ov027_021dd990[0x58];
extern unsigned char data_ov027_021dd9e8[8];

// USA: func_ov027_021db154
extern "C" ARM void func_ov027_021db154(int arg0, unsigned short arg1, unsigned char arg2) {
    if (data_ov027_021dd940.unknown_26_ != data_ov027_021dd940.unknown_1c_->unknown_4b4_) {
        func_ov027_021db124();
    }

    data_ov027_021dd940.unknown_44_ = (data_ov027_021dd940.unknown_44_ & ~3) | 2;
    Struct_ov027_021db154* var0 = data_ov027_021dd940.unknown_1c_;
    data_ov027_021dd940.unknown_45_ = var0->unknown_4b3_;
    data_ov027_021dd940.unknown_46_ = data_ov027_021dd940.unknown_26_;
    data_ov027_021dd940.unknown_40_ = var0->unknown_4b8_;
    data_ov027_021dd940.unknown_44_ = (data_ov027_021dd940.unknown_44_ & ~0xfc) | (((unsigned int)var0->unknown_4b5_ << 26) >> 24);
    unsigned char var1 = data_ov027_021dd940.unknown_29_;
    data_ov027_021dd940.unknown_29_ = var1 + 1;
    data_ov027_021dd940.unknown_47_ = var1;
    data_ov027_021dd940.unknown_4a_ = var0->unknown_358_;
    data_ov027_021dd940.unknown_4c_ = var0->unknown_35a_;
    data_ov027_021dd940.unknown_4e_ = var0->unknown_35c_;

    if (data_ov027_021dd940.unknown_10_ == 0 && data_ov027_021dd940.unknown_14_ != 0) {
        data_ov027_021dd940.unknown_14_(var0->unknown_4b8_);
    }

    int var2;
    for (var2 = 0; var2 < 8; var2++) {
        data_ov027_021dd9e8[var2] = data_ov027_021dd940.unknown_1c_->unknown_4a8_[var2];
    }

    func_020ca390(0, data_ov027_021dd990, 0x58);

    var0 = data_ov027_021dd940.unknown_1c_;
    unsigned int var3 = 0;
    unsigned short var4 = var0->unknown_4b0_ ^ var0->unknown_35a_;
    for (var2 = 0; var2 < 15; var2++) {
        if (var4 & (2 << var2)) {
            func_020ca3b8((int)((char*)data_ov027_021dd940.unknown_1c_ + 0x35e + var2 * 0x16), data_ov027_021dd990 + var3 * 0x16, 0x16);
            data_ov027_021dd940.unknown_1c_->unknown_4b0_ |= (2u << var2);
            var3++;
            if (var3 == 4) break;
        }
    }
    if (var3 < 4) {
        data_ov027_021dd990[var3 * 0x16] &= ~0xf0;
    }

    data_ov027_021dd940.unknown_48_ = 0;
    data_ov027_021dd940.unknown_48_ = func_ov027_021dab38(&data_ov027_021dd988, 0x68);

    var0 = data_ov027_021dd940.unknown_1c_;
    if (var0->unknown_4b0_ == var0->unknown_35a_) {
        data_ov027_021dd940.unknown_24_ = 1;
    }

    func_020d69cc(0, (int)&data_ov027_021dd980, 0x70, arg0, arg1, (unsigned char)(arg2 | 3));

    if (data_ov027_021dd940.unknown_10_ != 1) return;
    if (data_ov027_021dd940.unknown_14_ == 0) return;
    var0 = data_ov027_021dd940.unknown_1c_;
    data_ov027_021dd940.unknown_14_(var0->unknown_4b8_);
}
