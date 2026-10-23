#include <globaldefs.h>

extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" void func_ov031_0223ca40(void* arg0, int arg1);
extern "C" void func_ov031_0223caec(void* arg0);
extern "C" void func_ov031_0222c45c(int, int);
extern "C" void func_ov031_0222c5d4(int, int);
extern "C" void func_ov031_0222c660(void);

struct Struct_ov031_0222c3b4 {
    unsigned char unknown_0_[0xc];
    void* unknown_c_;
    unsigned char unknown_10_[0x51 - 0x10];
    unsigned char unknown_51_;
};
struct Struct_ov031_02290c8c_10 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    Struct_ov031_0222c3b4* unknown_4_;
};
extern Struct_ov031_02290c8c_10 data_ov031_02290c8c;

// USA: func_ov031_0222c3b4
extern "C" ARM void func_ov031_0222c3b4(void) {
    int var0 = FastIntDivide(data_ov031_02290c8c.unknown_2_, 0x1c);
    int var1 = data_ov031_02290c8c.unknown_4_->unknown_51_;
    func_ov031_0223ca40(data_ov031_02290c8c.unknown_4_->unknown_c_, 0);
    if (var1 > 5) var1 = 5;

    int var2 = var0;
    int var3 = 0;
    if (var1 > 0) {
        do {
            func_ov031_0222c45c(var2, var3);
            var3++;
            var2++;
        } while (var3 < var1);
    }
    int var4 = var0;
    int var5 = 0;
    if (var1 > 0) {
        do {
            func_ov031_0222c5d4(var4, var5);
            var5++;
            var4++;
        } while (var5 < var1);
    }

    func_ov031_0223caec(data_ov031_02290c8c.unknown_4_->unknown_c_);
    func_ov031_0222c660();
}
