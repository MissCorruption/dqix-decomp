#include <globaldefs.h>

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_ov017_021b8478(void* arg0);

struct Struct_ov017_021bd35c { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_, unknown_8_; };
struct Struct_ov017_021bd35c_2 {
    unsigned char unknown_0_[0x16];
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
    unsigned char unknown_1c_[0x52 - 0x1c];
    unsigned short unknown_52_;
};
struct Struct_ov017_0218e674;

extern "C" void func_ov017_021bd35c(Struct_ov017_021bd35c_2* arg0, Struct_ov017_021bd35c* arg1);
extern "C" void func_ov017_021bb9ec(void* arg0, unsigned short arg1);
extern "C" int func_ov017_021bd3a4(Struct_ov017_0218e674* arg0);
extern "C" void func_ov017_021cdd70(unsigned short arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3, unsigned short arg4, unsigned short arg5, unsigned char arg6);

struct Struct_ov017_021d6ce8 { unsigned char unknown_0_[3]; };
extern const Struct_ov017_021d6ce8 data_ov017_021d6ce8;

struct Struct_ov017_021cddd4_3 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    unsigned char unknown_10_;
};

struct Struct_ov017_021cddd4 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
};

struct Struct_ov017_021cddd4_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x3508];
#else
    unsigned char unknown1_0_[0x3718];
#endif
    void* unknown_3718_;
    unsigned char unknown_371c_[0x3734 - 0x371c];
    Struct_ov017_021bd35c_2* unknown_3734_;
};

// USA: func_ov017_021cddd4
extern "C" ARM void func_ov017_021cddd4(int arg0, Struct_ov017_021cddd4_3* arg1, int arg2, Struct_ov017_021cddd4_2* arg3, Struct_0202c1a4* arg4) {
    Struct_ov017_021cddd4* var0 = (Struct_ov017_021cddd4*)func_ov017_021b8478(arg3->unknown_3718_);
    Struct_ov017_021bd35c_2* var1 = arg3->unknown_3734_;
    if (arg0 == 0) {
        if (arg1->unknown_10_ == func_0202c1a4(arg4)) {
            Struct_ov017_021bd35c var2;
            var2.unknown_0_ = arg1->unknown_4_;
            var2.unknown_2_ = arg1->unknown_8_;
            var2.unknown_4_ = arg1->unknown_a_;
            var2.unknown_8_ = arg1->unknown_c_;
            var2.unknown_6_ = arg1->unknown_e_;
            func_ov017_021bd35c(var1, &var2);
            Struct_ov017_021d6ce8 var3 = data_ov017_021d6ce8;
            func_ov017_021bb9ec(var1, var3.unknown_0_[arg1->unknown_6_]);
        }
    } else if (func_0202c1a4(arg4) == 0) {
        int var4 = var0->unknown_c_;
        Struct_ov017_021bd35c_2* var5 = arg3->unknown_3734_;
        if (var4 == arg1->unknown_4_) {
            func_ov017_021cdd70(arg1->unknown_4_, 0, 0, 0, 0, 0, arg0);
        } else if (var4 == 0x13) {
            func_ov017_021cdd70(arg1->unknown_4_, 1, 0x71e8, 0xffff, 0x199, 0x71e8, arg0);
        } else if (func_ov017_021bd3a4((Struct_ov017_0218e674*)var5)) {
            Struct_ov017_021bd35c_2* var6 = arg3->unknown_3734_;
            func_ov017_021cdd70(arg1->unknown_4_, 1, var6->unknown_16_, var6->unknown_52_, var6->unknown_1a_, var6->unknown_18_, arg0);
        } else {
            func_ov017_021cdd70(arg1->unknown_4_, 2, 0, 0, 0, 0, arg0);
        }
    }
}
