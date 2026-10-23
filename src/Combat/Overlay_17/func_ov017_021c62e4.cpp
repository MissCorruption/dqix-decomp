#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);

struct Struct_ov017_021c62e4 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c62e4_2 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0xd];
};

struct Struct_ov017_021c62e4_3 {
    unsigned char unknown_0_[4];
    Struct_ov017_021c62e4_2 unknown_4_[1];
};

struct Struct_ov017_021c62e4_4 {
    unsigned short unknown_0_;
    short unknown_2_;
    unsigned char unknown_4_[8];
};

struct Struct_ov017_021c62e4_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c62e4_4 unknown_4_;
};

// USA: func_ov017_021c62e4
extern "C" ARM void func_ov017_021c62e4(int arg0, Struct_ov017_021c62e4_5* arg1, void* arg2, char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c62e4_1816=0x508};
#else
 enum {Enum_ov017_021c62e4_1816=0x718};
#endif
    Struct_ov017_021c62e4_2* var0;
    int var1;
    void* var2 = *(void**)(arg3 + 0x3000 + Enum_ov017_021c62e4_1816);

    char* var3 = (char*)func_ov017_021b8470(var2);
    if (!var3) return;

    Struct_ov017_021c62e4* var4 = (Struct_ov017_021c62e4*)func_ov017_021b8478(var2);
    if (!var4) return;

    Struct_ov017_021c62e4_4* var5 = &arg1->unknown_4_;
    if (var4->unknown_8_ != var5->unknown_0_) return;

    var0 = &((Struct_ov017_021c62e4_3*)(var3 + 0x1b0 + 0x8000))->unknown_4_[var5->unknown_2_];
    for (var1 = 0; var1 < var0->unknown_a_0_; var1++) {
        var0->unknown_2_[var1] = 0;
        var0->unknown_2_[var1] = var5->unknown_4_[var1];
    }
}
