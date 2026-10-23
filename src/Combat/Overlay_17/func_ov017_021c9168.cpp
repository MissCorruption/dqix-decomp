#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

union Struct_ov017_021c9168 {
    struct { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; } unknown_0_;
    struct { char unknown_0_0_ : 4; char unknown_0_4_ : 4; } unknown1_0_;
};

struct Struct_ov017_021c9168_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned char unknown_6_[1];
    union Struct_ov017_021c9168 unknown_7_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
};

// USA: func_ov017_021c9168
extern "C" ARM void func_ov017_021c9168(int arg0, int arg1, int arg2, int arg3,
        int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10) {
    void* var0 = func_0202ae24();

    struct Struct_ov017_021c9168_2 var1;
    var1.unknown_0_ = 0x84;
    var1.unknown_4_ = (unsigned short)arg0;
    var1.unknown_7_.unknown_0_.unknown_0_0_ = (unsigned char)arg1;
    var1.unknown_7_.unknown1_0_.unknown_0_4_ = (char)arg10;
    var1.unknown_c_ = arg4;
    var1.unknown_10_ = arg6;
    var1.unknown_a_ = (unsigned short)arg8;
    var1.unknown_8_ = (unsigned short)arg3;

    func_0205e330(var0, &var1, 0);
}
