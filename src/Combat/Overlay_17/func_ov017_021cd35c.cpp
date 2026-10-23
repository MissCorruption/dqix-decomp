#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cd35c {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
    unsigned short unknown_3_7_ : 1;
    unsigned char unknown_4_;
    signed char unknown_5_;
};

struct Struct_ov017_021cd35c_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    signed char unknown_6_;
    unsigned char unknown_7_;
    signed char unknown_8_;
};

// USA: func_ov017_021cd35c
extern "C" ARM void func_ov017_021cd35c(unsigned short arg0, Struct_ov017_021cd35c* arg1, int arg2, signed char arg3) {
    void* var0 = func_0202ae24();
    unsigned char var1[0x14];
    var1[0] = 0x68;
    struct Struct_ov017_021cd35c_2* var2 = (struct Struct_ov017_021cd35c_2*)(var1 + 4);
    var2->unknown_0_ = arg0;
    if (arg2 != 0) {
        int var3;
        int var4 = -1;
        for (var3 = 0; var3 < arg2; var3++, arg1++) {
            var2->unknown_2_ = arg1->unknown_0_;
            var2->unknown_4_ = arg1->unknown_2_0_;
            var2->unknown_7_ = arg1->unknown_4_;
            var2->unknown_8_ = arg1->unknown_5_;
            if (var3 == arg2 - 1) var2->unknown_6_ = arg3;
            else var2->unknown_6_ = var4;
            func_0205e330(var0, var1, 0);
        }
    } else {
        var2->unknown_2_ = 0;
        var2->unknown_4_ = 0;
        var2->unknown_6_ = 0;
        var2->unknown_8_ = -1;
        func_0205e330(var0, var1, 0);
    }
}
