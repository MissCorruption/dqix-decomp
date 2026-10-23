#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);

struct Struct_ov017_021ce400 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    short unknown_4_;
    short unknown_6_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021ce400
extern "C" ARM void func_ov017_021ce400(int arg0, int arg1) {
    void* var0 = func_0202ae24();
    if (func_0202c508(func_0202ae18()) != 0 && arg0 > 0) {
        Struct_ov017_021ce400 var1;
        var1.unknown_0_ = 0x27;
        var1.unknown_4_ = arg0;
        var1.unknown_6_ = arg1;
        func_0205e330(var0, &var1, 0);
    }
}
