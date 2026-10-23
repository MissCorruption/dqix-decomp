#include <globaldefs.h>

extern "C" int func_ov031_0223d49c(void*);
extern "C" int func_ov031_0223d5ac(void*);
extern "C" void func_ov031_02222e20(int);
extern "C" void func_ov031_0222c8cc(void);
extern "C" int func_ov031_0223d354(int);
extern "C" void func_ov031_0223521c(void);
extern "C" int func_ov031_0223d394(int);
extern "C" void func_ov031_0222cad8(void);
extern "C" int func_ov031_0223d3d4(int);
extern "C" void func_ov031_0222ca64(void);
extern "C" int func_ov031_02236878(int);
extern "C" void func_ov031_0222c918(int);

struct Struct_ov031_0222bb58 {
    unsigned char unknown_0_[0x38];
    void* unknown_38_;
    unsigned char unknown_3c_[0x14];
    signed char unknown_50_;
    unsigned char unknown_51_;
    unsigned char unknown_52_[5];
    unsigned char unknown_57_;
    unsigned char unknown_58_;
    unsigned char unknown_59_;
};
struct Struct_ov031_02290c8c_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov031_0222bb58* unknown_4_;
};
extern Struct_ov031_02290c8c_5 data_ov031_02290c8c;
extern unsigned char data_ov031_022493b8;
extern unsigned char data_ov031_02248e5c;

// USA: func_ov031_0222bb58
extern "C" ARM void func_ov031_0222bb58(void) {
    if (data_ov031_02290c8c.unknown_4_->unknown_38_ != 0 || data_ov031_02290c8c.unknown_4_->unknown_57_ != 0) {
        return;
    }

    if (func_ov031_0223d49c(&data_ov031_022493b8)) {
        data_ov031_02290c8c.unknown_4_->unknown_50_ = -1;
        int var0 = 0;
        unsigned char* var1 = &data_ov031_02248e5c;
        do {
            if (func_ov031_0223d49c(var1)) {
                if (var0 < 4) {
                    data_ov031_02290c8c.unknown_4_->unknown_50_ = (signed char)var0;
                    break;
                }
                func_ov031_02222e20(1);
                data_ov031_02290c8c.unknown_0_ = (unsigned char)var0;
                func_ov031_0222c8cc();
                return;
            }
            var0++;
            var1 += 8;
        } while ((unsigned int)var0 < 5);
    }

    if (func_ov031_0223d5ac(&data_ov031_022493b8)) {
        unsigned char* var2 = &data_ov031_02248e5c;
        int var3 = 0;
        do {
            if (func_ov031_0223d5ac(var2)) {
                signed char var4 = data_ov031_02290c8c.unknown_4_->unknown_50_;
                if (var4 != var3) break;
                unsigned char var5 = data_ov031_02290c8c.unknown_4_->unknown_51_;
                if (var3 >= var5) {
                    func_ov031_02236878(9);
                    break;
                }
                func_ov031_02222e20(1);
                data_ov031_02290c8c.unknown_0_ = (unsigned char)var3;
                func_ov031_0222c8cc();
                return;
            }
            var3++;
            var2 += 8;
        } while (var3 < 4);
    }

    if (func_ov031_0223d354(1)) {
        func_ov031_02222e20(1);
        func_ov031_0223521c();
        return;
    }
    if (func_ov031_0223d354(2)) {
        func_ov031_02222e20(0);
        return;
    }
    if (func_ov031_0223d394(0x200)) {
        func_ov031_0222cad8();
        return;
    }
    if (func_ov031_0223d3d4(0x200)) {
        data_ov031_02290c8c.unknown_4_->unknown_59_ = 0;
        return;
    }
    if (func_ov031_0223d394(0x100)) {
        func_ov031_0222ca64();
        return;
    }
    if (func_ov031_0223d3d4(0x100)) {
        data_ov031_02290c8c.unknown_4_->unknown_59_ = 0;
        return;
    }
    if (func_ov031_0223d394(0x40)) {
        func_ov031_0222c918(1);
        return;
    }
    if (func_ov031_0223d3d4(0x40)) {
        data_ov031_02290c8c.unknown_4_->unknown_59_ = 0;
        return;
    }
    if (func_ov031_0223d394(0x80)) {
        func_ov031_0222c918(3);
        return;
    }
    if (func_ov031_0223d3d4(0x80)) {
        data_ov031_02290c8c.unknown_4_->unknown_59_ = 0;
    }
}
