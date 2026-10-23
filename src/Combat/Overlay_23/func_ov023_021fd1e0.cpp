#include <globaldefs.h>

struct Struct_ov011_02186548 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0xc];
    int unknown_20_;
    int unknown_24_;
    unsigned char unknown_28_;
    unsigned char unknown_29_;
};

struct Struct_ov011_02186548_2 { int unknown_0_, unknown_4_; };
struct Struct_ov011_02186548_3 { unsigned char unknown_0_, unknown_1_; };

extern "C" void func_ov023_021f6ed8(void*);

// USA: func_ov023_021fd1e0
extern "C" ARM int func_ov023_021fd1e0(struct Struct_ov011_02186548* arg0, int arg1, int arg2, int arg3, struct Struct_ov011_02186548_2* arg4, struct Struct_ov011_02186548_3* arg5) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0xd;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_20_ = arg4->unknown_0_;
    arg0->unknown_24_ = arg4->unknown_4_;
    arg0->unknown_28_ = arg5->unknown_0_;
    arg0->unknown_29_ = arg5->unknown_1_;
    return 1;
}
