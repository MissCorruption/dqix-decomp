#include <globaldefs.h>

struct Struct_ov031_0222336c;
struct Struct_ov031_0222df84 { Struct_ov031_0222336c* unknown_0_; int unknown_4_; unsigned char unknown_8_[12]; };
struct Struct_ov031_02248ee0_2 { unsigned char unknown_0_[0xe]; unsigned short unknown_e_, unknown_10_; };
extern Struct_ov031_0222df84* data_ov031_02290c98;
extern Struct_ov031_02248ee0_2 data_ov031_02248ee0;
extern const unsigned char data_ov031_02248f20[12];
extern "C" void func_ov031_0223ca40(void*, int);
extern "C" void func_ov031_0223c980(Struct_ov031_0222336c*, int, int, int, int, int, int, const unsigned short*);
extern "C" void func_ov031_0223caec(void*);

// USA: func_ov031_0222df84
extern "C" ARM void func_ov031_0222df84() {
    unsigned short var0[4] __attribute__((aligned(4)));
    var0[0] = data_ov031_02248ee0.unknown_e_;
    var0[1] = data_ov031_02248ee0.unknown_10_;
    var0[2] = 11;
    var0[3] = 16;
    func_ov031_0223ca40(data_ov031_02290c98->unknown_0_, 0);
    unsigned short var1[2];
    var1[1] = 0;
    const unsigned char* var2 = data_ov031_02248f20;
    int var3 = 0;
    do {
        Struct_ov031_0222df84* var4 = data_ov031_02290c98;
        var1[0] = var4->unknown_8_[var3];
        unsigned short var5 = *var2++;
        var0[0] = var5;
        func_ov031_0223c980(var4->unknown_0_, var5, var0[1], var0[2], var0[3], 2, 0x480, var1);
    } while (++var3 < 12);
    func_ov031_0223caec(data_ov031_02290c98->unknown_0_);
}
