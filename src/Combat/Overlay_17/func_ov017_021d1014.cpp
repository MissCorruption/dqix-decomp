#include <globaldefs.h>

extern "C" void* func_0202ae24();
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d1014 {
    unsigned char unknown_0_0_ : 7;
    unsigned char unknown_0_7_ : 1;
    unsigned char unknown_1_;
};

struct Struct_ov017_021d1014_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021d1014 unknown_4_;
    unsigned char unknown_6_[0x14 - 6];
};

// USA: func_ov017_021d1014
extern "C" ARM void func_ov017_021d1014(int arg0, unsigned char arg1, int arg2) {
    void* var0 = func_0202ae24();
    struct Struct_ov017_021d1014_2 var1;
    struct Struct_ov017_021d1014* var2 = &var1.unknown_4_;
    var2->unknown_0_0_ = arg0;
    var1.unknown_0_ = 0x19;
    var2->unknown_0_7_ = arg1;
    var2->unknown_1_ = arg2;
    func_0205e330(var0, &var1, 0);
}
