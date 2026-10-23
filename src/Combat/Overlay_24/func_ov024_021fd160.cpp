#include <globaldefs.h>

struct Struct_ov024_021f6a1c;
extern "C" void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1);

struct Struct_ov024_021fd160 { unsigned int unknown_0_[3]; };
struct Struct_ov024_021fd160_2 {
    float unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_, unknown_a_, unknown_b_;
};
union Struct_ov024_021fd160_3 {
    Struct_ov024_021fd160 unknown_0_;
    Struct_ov024_021fd160_2 unknown1_0_;
};

// USA: func_ov024_021fd160
extern "C" ARM void func_ov024_021fd160(char* arg0, unsigned char arg1) {
    union Struct_ov024_021fd160_3 var0;
    var0.unknown_0_ = *(Struct_ov024_021fd160*)(arg0 + 0x65c);
    short var1 = *(short*)(*(char**)(arg0 + 0x64c) + 0x32);
    float var2 = (float)var1;
    var0.unknown1_0_.unknown_4_ = arg1;
    var0.unknown1_0_.unknown_7_ = 0x64;
    var0.unknown1_0_.unknown_8_ = 8;
    var0.unknown1_0_.unknown_0_ = var2;
    func_ov024_021f6a1c(*(struct Struct_ov024_021f6a1c**)(arg0 + 0x658), &var0);
}
