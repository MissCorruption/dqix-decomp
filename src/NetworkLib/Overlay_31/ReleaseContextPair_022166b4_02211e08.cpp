#include <globaldefs.h>

extern "C" ARM void func_ov031_022166b4(void);
extern "C" int func_ov031_02216360(void);
extern "C" ARM void func_ov031_02211d54(int, int, int, int, int);
extern "C" int func_ov031_02212ee8(void);
extern "C" int func_ov031_0220d540(void);

struct Struct_ov031_02211e08 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[4];
    unsigned char unknown_c_;
    unsigned char unknown_d_[3];
    int unknown_10_;
};
struct Struct_ov031_0224e5b4 { void* unknown_0_; Struct_ov031_02211e08* unknown_4_; };
extern Struct_ov031_0224e5b4 data_ov031_0224e5b4;

// USA: func_ov031_02211e08
extern "C" ARM void func_ov031_02211e08(void) {
    if (data_ov031_0224e5b4.unknown_4_ == 0) return;
    switch (data_ov031_0224e5b4.unknown_4_->unknown_10_) {
    case 1:
        data_ov031_0224e5b4.unknown_4_->unknown_0_ = 0;
        data_ov031_0224e5b4.unknown_4_->unknown_10_ = func_ov031_02216360();
        return;
    case 2: {
        func_ov031_022166b4();
        char* var0 = (char*)data_ov031_0224e5b4.unknown_4_;
        func_ov031_02211d54((int)(var0 + 0x14), (int)(var0 + 0x34), *(int*)(var0 + 0x54), (int)(var0 + 0x58), 8);
        data_ov031_0224e5b4.unknown_4_->unknown_10_ = 0;
        return;
    }
    case 3:
        func_ov031_022166b4();
        data_ov031_0224e5b4.unknown_4_->unknown_0_ = -1;
        data_ov031_0224e5b4.unknown_4_->unknown_c_ = 1;
        return;
    case 4:
    case 5:
        return;
    default:
        break;
    }
    unsigned short var1 = data_ov031_0224e5b4.unknown_4_->unknown_4_;
    if (var1 == 2) {
        data_ov031_0224e5b4.unknown_4_->unknown_0_ = func_ov031_02212ee8();
        return;
    }
    if (var1 != 4) return;
    if (data_ov031_0224e5b4.unknown_4_->unknown_6_ == 0) return;
    if (func_ov031_0220d540() == 9) return;
    data_ov031_0224e5b4.unknown_4_->unknown_6_ = 0;
    data_ov031_0224e5b4.unknown_4_->unknown_4_ = 6;
}
