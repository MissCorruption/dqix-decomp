#include <globaldefs.h>

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

extern "C" int func_0202c508(struct Struct_0202c1a4* arg0);
extern "C" int func_ov017_021a23e4(char* arg0, int arg1, unsigned int arg2, unsigned int arg3);

extern "C" void func_ov017_021d09cc(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov017_021d0a18 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov017_021d0a18_2 {
    unsigned char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned short unknown_12_;
};

// USA: func_ov017_021d0a18
extern "C" ARM void func_ov017_021d0a18(int arg0, struct Struct_ov017_021d0a18* arg1, int arg2, char* arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021d0a18_2988=0x98c};
#else
 enum {Enum_ov017_021d0a18_2988=0xbac};
#endif
    if (func_0202c508(arg4) != 0) {
        int var0 = func_ov017_021a23e4(arg3, arg0, arg1->unknown_8_, arg1->unknown_c_);
        func_ov017_021d09cc(var0, arg0, 0, arg1->unknown_c_);
        return;
    }
    if (arg0 != 0) return;
    signed char var1 = func_0202c1a4(arg4);
    if (arg1->unknown_6_ != var1) return;
    struct Struct_ov017_021d0a18_2* var2 = *(struct Struct_ov017_021d0a18_2**)(arg3 + 0x3000 + Enum_ov017_021d0a18_2988);
    if (arg1->unknown_4_ != 0) {
        var2->unknown_10_ = 5;
        var2->unknown_12_ = arg1->unknown_4_;
    } else {
        var2->unknown_10_ = 2;
    }
}
