#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cbbd0 { unsigned char unknown_0_[0x8]; unsigned short unknown_8_; };
struct Struct_ov017_021cbbd0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned char unknown_6_[14];
};

// USA: func_ov017_021cbbd0
extern "C" ARM void func_ov017_021cbbd0(unsigned char* arg0) {
    Struct_ov017_021cbbd0_2 var0;
    void* var1 = func_0202ae24();
    var0.unknown_0_ = 0x63;
    Struct_ov017_021cbbd0* var2 = *(Struct_ov017_021cbbd0**)(arg0 + 0x8e18);
    var0.unknown_4_ = var2->unknown_8_;
    func_0205e330(var1, &var0, 1);
}
