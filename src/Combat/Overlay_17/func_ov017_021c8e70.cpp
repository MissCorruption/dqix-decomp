#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" int func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);

struct Struct_ov017_021c8e70 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c8e70_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_[3];
    unsigned char unknown_b_;
};

struct Struct_ov017_021c8e70_3 {
    unsigned char unknown_0_[4];
    Struct_ov017_021c8e70_2 unknown_4_;
};

struct Struct_ov017_021c8e70_4 {
    unsigned char unknown_0_[0xa];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0x18 - 0xb];
};

struct Struct_ov017_021c8e70_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 4;
    unsigned char unknown_2_[2];
    Struct_ov017_021c8e70_4 unknown_4_[1];
};

struct Struct_ov017_021c8e70_6 {
    unsigned char unknown_0_[0x81b0];
    Struct_ov017_021c8e70_5 unknown_81b0_;
};

// USA: func_ov017_021c8e70
extern "C" ARM void func_ov017_021c8e70(int arg0, Struct_ov017_021c8e70_3* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c8e70_1816=0x508};
#else
 enum {Enum_ov017_021c8e70_1816=0x718};
#endif
    Struct_ov017_021c8e70_2* var0;
    int var1;
    int var2;
    Struct_ov017_021c8e70_5* var3;
    void* var4 = *(void**)(arg3 + 0x3000 + Enum_ov017_021c8e70_1816);
    Struct_ov017_021c8e70* var5 = (Struct_ov017_021c8e70*)func_ov017_021b8478(var4);
    if (!var5) return;
    if (!func_ov017_021b8468(var4)) return;
    Struct_ov017_021c8e70_6* var6 = (Struct_ov017_021c8e70_6*)func_ov017_021b8470(var4);
    if (!var6) return;
    if (var5->unknown_8_ != arg1->unknown_4_.unknown_0_) return;
    var3 = &var6->unknown_81b0_;
    var0 = &arg1->unknown_4_;
    var1 = 0;
    for (var2 = 0; var2 < var0->unknown_b_; var2++) {
        Struct_ov017_021c8e70_4* var7 = &var3->unknown_4_[var2];
        var7->unknown_a_4_ = var0->unknown_8_[var2];
        var1 += var7->unknown_a_4_;
    }
    var3->unknown_1_0_ = (unsigned char)var1;
}
