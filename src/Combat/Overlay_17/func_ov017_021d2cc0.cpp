#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void func_ov017_021d2d00(void* arg0, void* arg1);

struct Struct_ov017_021d2cc0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_[16];
};

// USA: func_ov017_021d2cc0
extern "C" ARM void func_ov017_021d2cc0(void* arg0) {
    Struct_ov017_021d2cc0 var0;
    void* var1 = func_0202ae24();
    var0.unknown_0_ = 0x25;
    func_ov017_021d2d00(&var0.unknown_4_, arg0);
    func_0205e330(var1, &var0, 0);
}
