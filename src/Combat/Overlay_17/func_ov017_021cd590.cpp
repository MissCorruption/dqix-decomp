#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cd590 {
    unsigned short unknown_0_;
    unsigned short unknown_2_[4];
    unsigned char unknown_a_[4];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

// USA: func_ov017_021cd590
extern "C" ARM void func_ov017_021cd590(unsigned short arg0, unsigned int* arg1, unsigned char arg2, unsigned char arg3) {
    void* var0 = func_0202ae24();
    unsigned char var1[0x14];
    Struct_ov017_021cd590* var2 = (Struct_ov017_021cd590*)(var1 + 4);
    var2->unknown_e_ = arg2;
    var1[0] = 0x6a;
    var2->unknown_0_ = arg0;
    for (int var3 = 0; var3 < 4; var3++) {
        unsigned int var4 = arg1[var3];
        unsigned int var5 = var4 & 0xff0000;
        var2->unknown_2_[var3] = var4;
        var5 >>= 16;
        var2->unknown_a_[var3] = var5;
    }
    var2->unknown_f_ = arg3;
    func_0205e330(var0, var1, 0);
}
