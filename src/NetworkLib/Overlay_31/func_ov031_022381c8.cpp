#include <globaldefs.h>

struct Struct_ov031_022381c8 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_[2];
    void* unknown_10_;
    void* unknown_14_;
    unsigned short unknown_18_;
    signed char unknown_1a_;
    signed char unknown_1b_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    bool unknown_1e_;
};
struct Struct_ov031_02249334 { unsigned short unknown_0_, unknown_2_; };
struct Struct_ov031_022492e2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned short unknown_6_; };
extern Struct_ov031_022381c8* data_ov031_02290d10;
extern const Struct_ov031_02249334 data_ov031_02249334[6];
extern unsigned char data_ov031_02249394[];
extern unsigned char data_ov031_022492ea[][2];
extern Struct_ov031_02249334 data_ov031_02249364[][2];
extern const Struct_ov031_02249334 data_ov031_0224934c[6];
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_02238370(void*, int);
extern "C" void func_ov031_0223cb1c(int, int, int, int, Struct_ov031_022492e2*);
extern "C" void func_ov031_0223cc18(int, int, const Struct_ov031_022492e2*);

// USA: func_ov031_022381c8
extern "C" ARM void func_ov031_022381c8(int arg0) {
    Struct_ov031_022492e2 var0;
    int var1, var2;
    int var3;
    func_ov031_0223bbd8(data_ov031_02290d10->unknown_0_, -1,
        data_ov031_02249334[data_ov031_02290d10->unknown_1c_].unknown_0_, arg0);
    func_ov031_0223bbd8(data_ov031_02290d10->unknown_4_, -1,
        data_ov031_02249334[data_ov031_02290d10->unknown_1c_].unknown_0_ + 8, arg0 + 8);
    func_ov031_02238370(data_ov031_02290d10->unknown_0_, arg0);
    func_ov031_02238370(data_ov031_02290d10->unknown_4_, arg0);
    for (var3 = 0; var3 < data_ov031_02249394[data_ov031_02290d10->unknown_1c_]; ++var3) {
        func_ov031_0223bbd8(data_ov031_02290d10->unknown_8_[var3], -1,
            data_ov031_02249364[data_ov031_02290d10->unknown_1c_][data_ov031_022492ea[data_ov031_02290d10->unknown_1c_][var3]].unknown_0_,
            arg0 + data_ov031_02249364[data_ov031_02290d10->unknown_1c_][data_ov031_022492ea[data_ov031_02290d10->unknown_1c_][var3]].unknown_2_
                - data_ov031_02249334[data_ov031_02290d10->unknown_1c_].unknown_2_);
        func_ov031_02238370(data_ov031_02290d10->unknown_8_[var3], arg0);
    }
    var1 = arg0 & 0xff;
    if (var1 >= 192) {
        var1 = var2 = 0;
    } else {
        var2 = var1 + data_ov031_0224934c[data_ov031_02290d10->unknown_1c_].unknown_2_;
    }
    if (var2 > 192) var2 = 192;
    func_ov031_0223cb1c(data_ov031_02249334[data_ov031_02290d10->unknown_1c_].unknown_0_,
        var1, data_ov031_02249334[data_ov031_02290d10->unknown_1c_].unknown_0_
            + data_ov031_0224934c[data_ov031_02290d10->unknown_1c_].unknown_0_, var2, &var0);
    func_ov031_0223cc18(0, 0, &var0);
}
