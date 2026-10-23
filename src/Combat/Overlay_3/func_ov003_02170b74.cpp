#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02170b74_1120 = 0x35c };
#else
enum { Enum_ov003_02170b74_1120 = 0x460 };
#endif

struct Struct_020827c4;

extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void VectorizedMemset(void* dst, int val, unsigned int len);
extern "C" void func_020827c4(struct Struct_020827c4* arg0);

struct Struct_ov003_02170b74_2 {
    char unknown_0_[0xb];
    unsigned char unknown_b_0_ : 7;
    unsigned char unknown_b_7_ : 1;
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    unsigned int unknown_d_0_ : 7;
    unsigned int unknown_d_7_ : 4;
    unsigned int unknown_e_3_ : 5;
    unsigned int unknown_f_0_ : 6;
    unsigned int unknown_f_6_ : 1;
    unsigned int unknown_f_7_ : 1;
    unsigned int unknown_10_0_ : 2;
    unsigned int unknown_10_2_ : 30;
    unsigned char unknown_14_[6];
    unsigned short unknown_1a_[0xf];
    unsigned char unknown_38_[0x18];
    unsigned char unknown_50_[0x1c];
    unsigned int unknown_6c_0_ : 12;
    unsigned int unknown_6d_4_ : 4;
    unsigned int unknown_6e_0_ : 5;
    unsigned int unknown_6e_5_ : 4;
    unsigned int unknown_6f_1_ : 1;
    unsigned int unknown_6f_2_ : 1;
    unsigned int unknown_6f_3_ : 1;
    unsigned int unknown_6f_4_ : 1;
    unsigned int unknown_6f_5_ : 1;
    unsigned int unknown_6f_6_ : 1;
    unsigned int unknown_6f_7_ : 1;
    unsigned int unknown_70_0_ : 9;
    unsigned int unknown_71_1_ : 10;
    unsigned int unknown_72_3_ : 11;
    unsigned int unknown_73_6_ : 1;
    unsigned int unknown_73_7_ : 1;
    unsigned char unknown_74_;
    char unknown_75_[0xe8 - 0x75];
};

struct Struct_ov003_02170b74 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    unsigned int unknown_4_;
    unsigned char unknown_8_[0x190];
    unsigned char unknown_198_;
    char unknown_199_[Enum_ov003_02170b74_1120 - 0x199];
    Struct_ov003_02170b74_2 unknown_460_[3];
    unsigned char unknown_718_;
    char unknown_719_[3];
    int unknown_71c_;
    int unknown_720_;
    int unknown_724_;
    int unknown_728_;
    int unknown_72c_;
    char unknown_730_;
    signed char unknown_731_;
    signed char unknown_732_;
    unsigned char unknown_733_;
    unsigned char unknown_734_;
    char unknown_735_[3];
    int unknown_738_;
};

// USA: func_ov003_02170b74
extern "C" ARM void func_ov003_02170b74(struct Struct_ov003_02170b74* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    memset(arg0->unknown_8_, 0, 0x190);
    arg0->unknown_198_ = 0;
    arg0->unknown_71c_ = 0;
    arg0->unknown_720_ = 0;
    arg0->unknown_724_ = 0;
    arg0->unknown_728_ = 0;
    arg0->unknown_718_ = 0;
    arg0->unknown_72c_ = 0;
    arg0->unknown_731_ = 2;
    arg0->unknown_732_ = 3;
    arg0->unknown_733_ = 0;
    arg0->unknown_734_ = 0;
    arg0->unknown_738_ = 0;

    for (int var0 = 0; var0 < 3; var0++) {
        Struct_ov003_02170b74_2* var1 = &arg0->unknown_460_[var0];
        memset(arg0->unknown_460_[var0].unknown_0_, 0, 0xb);
        var1->unknown_c_0_ = 0;
        var1->unknown_c_4_ = 0;
        var1->unknown_b_0_ = 0;
        var1->unknown_d_7_ = 0;
        var1->unknown_e_3_ = 0;
        var1->unknown_f_0_ = 0;
        var1->unknown_f_6_ = 0;
        var1->unknown_10_0_ = 0;
        var1->unknown_f_7_ = 0;
        var1->unknown_b_7_ = 0;
        var1->unknown_10_2_ = 0;
        VectorizedMemset(var1->unknown_14_, 0, 6);
        var1->unknown_6c_0_ = 2000;
        var1->unknown_6d_4_ = 1;
        var1->unknown_6e_0_ = 1;
        var1->unknown_6f_4_ = 0;
        var1->unknown_6e_5_ = 0;
        var1->unknown_6f_3_ = 0;
        var1->unknown_6f_1_ = 0;
        var1->unknown_6f_2_ = 0;
        var1->unknown_6f_5_ = 0;
        var1->unknown_6f_6_ = 1;
        var1->unknown_6f_7_ = 0;
        var1->unknown_70_0_ = 0x1ff;
        var1->unknown_73_6_ = 0;
        var1->unknown_71_1_ = 300;
        var1->unknown_72_3_ = 706;
        arg0->unknown_460_[var0].unknown_74_ = 0;
        func_020827c4((struct Struct_020827c4*)var1->unknown_1a_);
        VectorizedMemset(var1->unknown_38_, 0, 0x18);
        VectorizedMemset(var1->unknown_50_, 0, 0x1c);
    }
}
