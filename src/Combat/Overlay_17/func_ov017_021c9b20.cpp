#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c9b20 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[5];
    unsigned short unknown_6_;
    unsigned char unknown_8_[2];
    unsigned char unknown_a_;
    unsigned char unknown_b_[9];
};

// USA: func_ov017_021c9b20
extern "C" ARM void func_ov017_021c9b20(int arg0, int arg1) {
    Struct_ov017_021c9b20 var0;
    void* var1 = func_0202ae24();
    var0.unknown_0_ = 0x57;
    var0.unknown_6_ = (unsigned short)arg0;
    var0.unknown_a_ = (unsigned char)arg1;
    func_0205e330(var1, &var0, 0);
}
