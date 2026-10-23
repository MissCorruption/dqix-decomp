#include <globaldefs.h>

struct Struct_ov031_022489c4_2 { unsigned short unknown_0_, unknown_2_; };
struct Struct_ov031_022493b8_2 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };

extern "C" void func_ov031_0223cb34(Struct_ov031_022489c4_2*, Struct_ov031_022489c4_2*, Struct_ov031_022493b8_2*);
extern "C" int func_ov031_0223d5ac(Struct_ov031_022493b8_2*);
extern "C" void func_ov031_02224f20(int);
extern "C" void func_ov031_0222506c(void);
extern "C" void func_ov031_022247bc(void);
extern "C" void func_ov031_022247ec(void);

struct Struct_ov031_022244d4 {
    unsigned char unknown_0_[0x11c];
    unsigned char unknown_11c_;
    unsigned char unknown_11d_;
    signed char unknown_11e_;
    unsigned char unknown_11f_[0x121 - 0x11f];
    signed char unknown_121_;
};
extern Struct_ov031_022244d4* data_ov031_02250bfc;

extern Struct_ov031_022493b8_2 data_ov031_022493b8;
extern Struct_ov031_022489c4_2 data_ov031_02248a0c[47];
extern Struct_ov031_022489c4_2 data_ov031_022489c8;
extern unsigned char* data_ov031_0224b424[];
extern Struct_ov031_022489c4_2 data_ov031_022489ec[2];
extern Struct_ov031_022489c4_2 data_ov031_022489fc[2];
extern unsigned char data_ov031_02248a04[];
extern Struct_ov031_022489c4_2 data_ov031_022489dc[2];
extern Struct_ov031_022489c4_2 data_ov031_022489c4;
extern unsigned char data_ov031_022489b8[];
extern Struct_ov031_022489c4_2 data_ov031_022489e4;
extern Struct_ov031_022489c4_2 data_ov031_022489f4;
extern Struct_ov031_022489c4_2 data_ov031_022489e8;
extern Struct_ov031_022489c4_2 data_ov031_022489f8;

// USA: func_ov031_022244d4
extern "C" ARM void func_ov031_022244d4(void) {
    data_ov031_02250bfc->unknown_11c_ = 0;
    if (!func_ov031_0223d5ac(&data_ov031_022493b8)) return;
    Struct_ov031_022493b8_2 var0;
    int var1;
    for (var1 = 0; var1 < 47; var1++) {
        func_ov031_0223cb34(&data_ov031_02248a0c[var1], &data_ov031_022489c8, &var0);
        if (func_ov031_0223d5ac(&var0)) {
            Struct_ov031_022244d4* var2 = data_ov031_02250bfc;
            if (var2->unknown_11e_ != var1) return;
            var2->unknown_11c_ = data_ov031_0224b424[var2->unknown_11d_][var1];
            if (data_ov031_02250bfc->unknown_11d_ == 1) {
                func_ov031_02224f20(0);
            }
            data_ov031_02250bfc->unknown_121_ = var1;
            func_ov031_0222506c();
            return;
        }
    }
    Struct_ov031_022489c4_2* var3 = data_ov031_022489fc;
    Struct_ov031_022489c4_2* var4 = data_ov031_022489ec;
    for (var1 = 2; var1 < 4; var1++, var3++, var4++) {
        func_ov031_0223cb34(var4, var3, &var0);
        if (func_ov031_0223d5ac(&var0)) {
            Struct_ov031_022244d4* var5 = data_ov031_02250bfc;
            if (var5->unknown_11e_ != var1 + 47) return;
            var5->unknown_11c_ = data_ov031_02248a04[var1];
            if (data_ov031_02250bfc->unknown_11d_ == 1) {
                func_ov031_02224f20(0);
            }
            data_ov031_02250bfc->unknown_121_ = var1 + 47;
            func_ov031_0222506c();
            return;
        }
    }
    for (var1 = 0; var1 < 2; var1++) {
        func_ov031_0223cb34(&data_ov031_022489dc[var1], &data_ov031_022489c4, &var0);
        if (func_ov031_0223d5ac(&var0)) {
            Struct_ov031_022244d4* var6 = data_ov031_02250bfc;
            if (var6->unknown_11e_ != var1 + 51) return;
            var6->unknown_11c_ = data_ov031_022489b8[var1];
            data_ov031_02250bfc->unknown_121_ = var1 + 51;
            func_ov031_0222506c();
            return;
        }
    }
    func_ov031_0223cb34(&data_ov031_022489e4, &data_ov031_022489f4, &var0);
    if (func_ov031_0223d5ac(&var0)) {
        if (data_ov031_02250bfc->unknown_11e_ != 47) return;
        func_ov031_022247bc();
        data_ov031_02250bfc->unknown_121_ = 47;
        func_ov031_0222506c();
        return;
    }
    func_ov031_0223cb34(&data_ov031_022489e8, &data_ov031_022489f8, &var0);
    if (!func_ov031_0223d5ac(&var0)) return;
    if (data_ov031_02250bfc->unknown_11e_ != 48) return;
    func_ov031_022247ec();
    data_ov031_02250bfc->unknown_121_ = 48;
    func_ov031_0222506c();
}
