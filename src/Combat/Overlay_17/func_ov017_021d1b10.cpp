#if defined(jpn)
enum { Enum_ov017_021d1b10_1804 = 0x4fc, Enum_ov017_021d1b10_1844 = 0x524, Enum_ov017_021d1b10_10100 = 0x27b4 };
#else
enum { Enum_ov017_021d1b10_1804 = 0x70c, Enum_ov017_021d1b10_1844 = 0x734, Enum_ov017_021d1b10_10100 = 0x2774 };
#endif

#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_02012fe4(void);
extern "C" void func_020a72ac(void* arg0, int arg1);

union Struct_ov017_021d1b10_2 {
    signed short unknown_0_;
    struct { signed short unknown_0_0_ : 14; signed short unknown_1_6_ : 2; } unknown1_0_;
};

struct Struct_ov017_021d1b10_3 {
    unsigned char unknown_0_[4];
    signed short unknown_4_;
    union Struct_ov017_021d1b10_2 unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    signed short unknown_e_;
    unsigned char unknown_10_;
};

struct Struct_ov017_021d1b10_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_[0xe];
    short unknown_12_;
    short unknown_14_;
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
    short unknown_1c_;
    unsigned char unknown_1e_;
};

struct Struct_ov017_021d1b10 {
    unsigned char unknown_0_[Enum_ov017_021d1b10_10100];
    Vector3i unknown_2774_;
    int unknown_2780_;
    short unknown_2784_;
    short unknown_2786_;
    unsigned char unknown_2788_;
};

// USA: func_ov017_021d1b10
extern "C" ARM void func_ov017_021d1b10(int arg0, Struct_ov017_021d1b10_3* arg1, int arg2, unsigned char* arg3, struct Struct_0202c1a4* arg4) {
    if (func_0202c1a4(arg4) == 0) return;

    Struct_ov017_021d1b10* var0 = (Struct_ov017_021d1b10*)func_02012fe4();
    Struct_ov017_021d1b10_4* var1 = *(Struct_ov017_021d1b10_4**)(arg3 + 0x3000 + Enum_ov017_021d1b10_1804);
    unsigned char* var2 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021d1b10_1844);

    if (var1->unknown_3_ != 0 && var1->unknown_1_ != 1) {
        var1->unknown_12_ = arg1->unknown_4_;
        var1->unknown_14_ = arg1->unknown_6_.unknown_0_;
        var1->unknown_16_ = arg1->unknown_8_;
        var1->unknown_18_ = arg1->unknown_a_;
        var1->unknown_1a_ = arg1->unknown_c_;
        var1->unknown_1c_ = arg1->unknown_e_;
        var1->unknown_1e_ = arg1->unknown_10_;
    } else {
        var0->unknown_2786_ = arg1->unknown_4_;
        short var3 = arg1->unknown_6_.unknown1_0_.unknown_0_0_;
        if (var3 != -1) var0->unknown_2784_ = var3;
        var0->unknown_2788_ = (unsigned char)arg1->unknown_6_.unknown1_0_.unknown_1_6_;
        Vector3i var4 = { (short)arg1->unknown_8_ << 7, (short)arg1->unknown_a_ << 7, (short)arg1->unknown_c_ << 7 };
        var0->unknown_2774_ = var4;
        var0->unknown_2780_ = arg1->unknown_e_;
        if (var2[3] == 0) {
            func_020a72ac(var0, arg1->unknown_10_);
        }
    }
}
