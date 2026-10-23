#include <globaldefs.h>
#include <NitroSDK/Memory.h>

struct Struct_020b1d70;
extern "C" ARM int func_ov031_0223dd34(unsigned char* arg0, int arg1);
extern "C" void func_ov031_0223c8d4(Struct_020b1d70* arg0, int arg1, int arg2, int arg3, int arg4, unsigned short* arg5, int arg6);

struct Struct_ov031_0222c45c {
    unsigned char unknown_0_[0x20];
    unsigned char unknown_20_[0xa];
};
struct Struct_ov031_0222c45c_2 {
    Struct_ov031_0222c45c* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    Struct_020b1d70* unknown_c_;
    unsigned char unknown_10_[0x41];
    unsigned char unknown_51_;
};
struct Struct_ov031_02290c8c_11 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov031_0222c45c_2* unknown_4_;
};
extern Struct_ov031_02290c8c_11 data_ov031_02290c8c;

// USA: func_ov031_0222c45c
extern "C" ARM void func_ov031_0222c45c(int arg0, int arg1) {
    unsigned short var0[0x11];
    int var1 = func_ov031_0223dd34(data_ov031_02290c8c.unknown_4_->unknown_0_[arg0].unknown_0_, 0x20);
    int var2 = arg1 * 0x1c;
    if (arg0 >= data_ov031_02290c8c.unknown_4_->unknown_51_) return;
    if (var1 <= 0x10) var2 += 6;
    VectorizedMemset(var0, 0, sizeof(var0));
    int var3 = var1 <= 0x10 ? var1 : 0x10;
    int var4;
    for (var4 = 0; var4 < var3; var4++) {
        var0[var4] = data_ov031_02290c8c.unknown_4_->unknown_0_[arg0].unknown_0_[var4];
    }
    func_ov031_0223c8d4(data_ov031_02290c8c.unknown_4_->unknown_c_, 10, var2, 2, 10, var0, 1);
    if (var1 <= 0x10) return;
    VectorizedMemset(var0, 0, sizeof(var0));
    var1 -= 0x10;
    for (var4 = 0; var4 < var1; var4++) {
        var0[var4] = data_ov031_02290c8c.unknown_4_->unknown_0_[arg0].unknown_0_[var4 + 0x10];
    }
    func_ov031_0223c8d4(data_ov031_02290c8c.unknown_4_->unknown_c_, 10, var2 + 0xc, 2, 10, var0, 1);
}
