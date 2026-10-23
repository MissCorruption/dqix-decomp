#include <globaldefs.h>

extern "C" int func_ov031_0223d394(int arg0);
extern "C" void func_ov031_02225148(int arg0);
extern "C" int func_ov031_0223d354(int arg0);
extern "C" int func_ov031_0223d3d4(int arg0);
extern "C" void func_ov031_02236878(int arg0);
extern "C" void func_ov031_02224f20(int);
extern "C" ARM void func_ov031_022247bc(void);
extern "C" ARM void func_ov031_022247ec(void);

struct Struct_ov031_02224a74 {
    unsigned char unknown_0_[0x11c];
    unsigned char unknown_11c_;   // 0x11c
    unsigned char unknown_11d_;   // 0x11d
    unsigned char unknown_11e_[0x121 - 0x11e];
    signed char unknown_121_;     // 0x121
    unsigned char unknown_122_[0x123 - 0x122];
    unsigned char unknown_123_;   // 0x123
    unsigned char unknown_124_;   // 0x124
    unsigned char unknown_125_;   // 0x125
};

extern Struct_ov031_02224a74* data_ov031_02250bfc;
extern "C" unsigned char* data_ov031_0224b424[];
extern "C" unsigned char data_ov031_02248a04[];
extern "C" unsigned char data_ov031_022489b8[];

// USA: func_ov031_02224a74
extern "C" ARM void func_ov031_02224a74(void) {
    if (func_ov031_0223d394(0x20)) func_ov031_02225148(0);
    if (func_ov031_0223d394(0x40)) func_ov031_02225148(1);
    if (func_ov031_0223d394(0x10)) func_ov031_02225148(2);
    if (func_ov031_0223d394(0x80)) func_ov031_02225148(3);

    if (func_ov031_0223d354(1)) {
        Struct_ov031_02224a74* var0 = data_ov031_02250bfc;
        int var1 = var0->unknown_121_;
        if (var1 < 0x2f) {
            if (var0->unknown_124_ == 0) {
                func_ov031_02236878(9);
                return;
            }
            unsigned char var2 = var0->unknown_11d_;
            var0->unknown_11c_ = data_ov031_0224b424[var2][var1];
            if (data_ov031_02250bfc->unknown_11d_ == 1) {
                func_ov031_02224f20(0);
            }
            return;
        } else {
            int var3 = var1 - 0x2f;
            if (var3 < 4) {
                switch (var3) {
                case 0:
                    func_ov031_022247bc();
                    return;
                case 1:
                    func_ov031_022247ec();
                    return;
                case 2:
                    if (var0->unknown_124_ == 0) {
                        func_ov031_02236878(9);
                        return;
                    }
                    break;
                case 3:
                    if (var0->unknown_123_ == 0) {
                        func_ov031_02236878(9);
                        return;
                    }
                    break;
                }
                if (var0->unknown_11d_ == 1) {
                    func_ov031_02224f20(0);
                }
                data_ov031_02250bfc->unknown_11c_ = data_ov031_02248a04[var1 - 0x2f];
                return;
            } else {
                var0->unknown_11c_ = data_ov031_022489b8[var1 - 0x33];
            }
        }
    }

    if (func_ov031_0223d394(2)) {
        Struct_ov031_02224a74* var4 = data_ov031_02250bfc;
        if (var4->unknown_123_ == 0) {
            if (var4->unknown_125_ != 0) {
                return;
            }
            func_ov031_02236878(9);
            data_ov031_02250bfc->unknown_125_ = 1;
            return;
        }
        var4->unknown_11c_ = 0x80;
        goto after_field36_check;
    } else if (func_ov031_0223d3d4(2)) {
        data_ov031_02250bfc->unknown_125_ = 0;
    }
after_field36_check:

    if (func_ov031_0223d354(0x400)) {
        func_ov031_022247bc();
    }
    if (func_ov031_0223d354(0x800)) {
        func_ov031_022247ec();
    }
}
