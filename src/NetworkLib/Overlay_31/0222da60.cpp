#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_0222da60 {
    unsigned char unknown_0_[4];
    unsigned int* unknown_4_;
    unsigned char unknown_8_[12];
    unsigned char unknown_14_;
    unsigned char unknown_15_;
};
extern Struct_ov031_0222da60* data_ov031_02290c98;
extern "C" unsigned char func_ov031_02225c24(void);
extern "C" void func_ov031_02225c38(int);
extern "C" void func_ov031_02225c4c(unsigned char);
extern "C" void func_ov031_02225c60(unsigned char);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222de08(void);
extern "C" void func_ov031_02236878(int);
extern "C" int func_ov031_0222dd70(int);
extern "C" void func_ov031_0222df84(void);
extern "C" void func_ov031_0222e048(void);
extern "C" void func_ov031_0222e1ac(void);
extern "C" int func_ov031_0222e224(void);

// USA: func_ov031_0222da60
extern "C" ARM void func_ov031_0222da60(void) {
    int var0 = func_ov031_02225c24();
    switch (var0) {
    case 0:
        return;
    case 16:
        if (data_ov031_02290c98->unknown_14_ == 0 && data_ov031_02290c98->unknown_8_[2] == 0) break;
        func_ov031_02236878(3);
        if (data_ov031_02290c98->unknown_8_[data_ov031_02290c98->unknown_14_ * 3 + 2] == 0)
            --data_ov031_02290c98->unknown_14_;
        VectorizedMemset(data_ov031_02290c98->unknown_8_ + data_ov031_02290c98->unknown_14_ * 3, 0, 3);
        if (data_ov031_02290c98->unknown_14_ == 0 && data_ov031_02290c98->unknown_8_[2] == 0)
            func_ov031_02225c38(0);
        func_ov031_02225c4c(1);
        func_ov031_02225c60(0);
        break;
    case 17:
        if (data_ov031_02290c98->unknown_14_ >= 3) break;
        if (data_ov031_02290c98->unknown_8_[data_ov031_02290c98->unknown_14_ * 3 + 2] == 0) break;
        func_ov031_02236878(1);
        ++data_ov031_02290c98->unknown_14_;
        func_ov031_02225c60(0);
        break;
    case 18:
        data_ov031_02290c98->unknown_15_ = 0;
        func_ov031_02236878(7);
        func_ov031_022274c0((int)func_ov031_0222de08);
        return;
    case 19:
        if (func_ov031_0222e224()) {
            func_ov031_02236878(6);
            data_ov031_02290c98->unknown_15_ = 1;
        } else {
            data_ov031_02290c98->unknown_15_ = 2;
            func_ov031_02236878(9);
        }
        data_ov031_02290c98->unknown_14_ = 3;
        *data_ov031_02290c98->unknown_4_ = (*data_ov031_02290c98->unknown_4_ & 0xc1fffcff) | 0x200;
        func_ov031_0222e048();
        func_ov031_0222e1ac();
        func_ov031_022274c0((int)func_ov031_0222de08);
        return;
    default:
        if (data_ov031_02290c98->unknown_14_ == 3 && func_ov031_0222dd70(26)) break;
        func_ov031_02236878(1);
        unsigned char* var1 = data_ov031_02290c98->unknown_8_;
        int var2 = data_ov031_02290c98->unknown_14_ * 3;
        if (var1[var2 + 2] == 0) {
            var1[var2 + 2] = var0;
        } else if (var1[var2 + 1] == 0) {
            var1[var2 + 1] = var1[var2 + 2];
            var1[var2 + 2] = var0;
            if (func_ov031_0222dd70(26)) {
                if (data_ov031_02290c98->unknown_14_ < 3) ++data_ov031_02290c98->unknown_14_;
            }
        } else {
            var1[var2] = var1[var2 + 1];
            var1[var2 + 1] = var1[var2 + 2];
            var1[var2 + 2] = var0;
            if (data_ov031_02290c98->unknown_14_ < 3) ++data_ov031_02290c98->unknown_14_;
        }
        func_ov031_02225c38(1);
        if (data_ov031_02290c98->unknown_14_ < 3) func_ov031_02225c60(1);
        else func_ov031_02225c60(0);
        if (data_ov031_02290c98->unknown_14_ == 3 && func_ov031_0222dd70(26))
            func_ov031_02225c4c(0);
        break;
    }
    func_ov031_0222df84();
    func_ov031_0222e048();
}
