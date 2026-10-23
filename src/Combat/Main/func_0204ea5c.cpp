#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0204ea5c_21 = 31, Enum_0204ea5c_22 = 32, Enum_0204ea5c_24 = 34, Enum_0204ea5c_23 = 33 };
#else
enum { Enum_0204ea5c_21 = 21, Enum_0204ea5c_22 = 22, Enum_0204ea5c_24 = 24, Enum_0204ea5c_23 = 23 };
#endif

struct Struct_0204cd60 {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    short unknown_c_[18];
    short unknown_30_[18];
    short unknown_54_[18];
    short unknown_78_[18];
    char unknown_9c_[4];
    int unknown_a0_;
    int unknown_a4_;
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[4];
    short unknown_b0_;
    short unknown_b2_;
    char unknown_b4_[2];
    short unknown_b6_;
    char unknown_b8_[2];
    short unknown_ba_;
    short unknown_bc_;
    short unknown_be_;
    char unknown_c0_[5];
    unsigned char unknown_c5_;
    unsigned char unknown_c6_;
    unsigned char unknown_c7_;
    char unknown_c8_[0x10];
    unsigned char unknown_d8_0_ : 2;
    unsigned char unknown_d8_2_ : 1;
    unsigned char unknown_d8_3_ : 5;
    char unknown_d9_[2];
    signed char unknown_db_[4];
};

extern "C" int func_0204fd00(Struct_0204cd60* arg0, int arg1);
extern "C" void func_0204f914(Struct_0204cd60* arg0, int arg1, short arg2, short arg3, short arg4, short arg5);
extern "C" void* func_020421b0(int arg0);
extern "C" void func_0204e1c8(Struct_0204cd60* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);

// USA: func_0204ea5c
extern "C" ARM void func_0204ea5c(Struct_0204cd60* arg0) {
    if (arg0->unknown_c5_ & 0x10) {
        return;
    }
    if (!func_0204fd00(arg0, 1)) {
        func_0204f914(arg0, 0, 0, 0, 8, 8);
        char* var0 = (char*)func_020421b0(Enum_0204ea5c_21);
        if (var0) {
            func_0204e1c8(arg0, var0, 0, 0, 8, 8, 0xf0, 0xf);
        }
    }
    if (!func_0204fd00(arg0, 2)) {
        func_0204f914(arg0, 0, (short)((arg0->unknown_a8_ - 1) << 3), 0, (short)(arg0->unknown_a8_ << 3), 8);
        char* var1 = (char*)func_020421b0(Enum_0204ea5c_22);
        if (var1) {
            func_0204e1c8(arg0, var1, (short)((arg0->unknown_a8_ - 1) << 3), 0, 8, 8, 0xf0, 0xf);
        }
    }
    if (!func_0204fd00(arg0, 4)) {
        func_0204f914(arg0, 0, 0, (short)((arg0->unknown_aa_ - 1) << 3), 8, (short)(arg0->unknown_aa_ << 3));
        char* var2 = (char*)func_020421b0(Enum_0204ea5c_24);
        if (var2) {
            func_0204e1c8(arg0, var2, 0, (short)((arg0->unknown_aa_ - 1) << 3), 8, 8, 0xf0, 0xf);
        }
    }
    if (!func_0204fd00(arg0, 8)) {
        func_0204f914(arg0, 0, (short)((arg0->unknown_a8_ - 1) << 3), (short)((arg0->unknown_aa_ - 1) << 3), (short)(arg0->unknown_a8_ << 3), (short)(arg0->unknown_aa_ << 3));
        char* var3 = (char*)func_020421b0(Enum_0204ea5c_23);
        if (var3) {
            func_0204e1c8(arg0, var3, (short)((arg0->unknown_a8_ - 1) << 3), (short)((arg0->unknown_aa_ - 1) << 3), 8, 8, 0xf0, 0xf);
        }
    }
}
