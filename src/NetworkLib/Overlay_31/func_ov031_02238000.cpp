#include <globaldefs.h>

struct Struct_ov031_02249308 { unsigned short unknown_0_, unknown_2_; };
struct Struct_ov031_02238000 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
struct Struct_ov031_022242ec { unsigned char unknown_0_[0x1b]; signed char unknown_1b_; unsigned char unknown_1c_; };
extern Struct_ov031_022242ec* data_ov031_02290d10;
extern unsigned char data_ov031_02249394[];
extern Struct_ov031_02249308 data_ov031_02249364[][2];
extern unsigned char data_ov031_022492ea[][2];
extern Struct_ov031_02249308 data_ov031_02249308[];
extern signed char data_ov031_022492f4[][2];
extern signed char data_ov031_022492f5[][2];
extern "C" void func_ov031_0223cb34(Struct_ov031_02249308*, Struct_ov031_02249308*, Struct_ov031_02238000*);
extern "C" int func_ov031_0223d49c(Struct_ov031_02238000*);
extern "C" int func_ov031_0223d354(int);
extern "C" void func_ov031_022383fc(int);

// USA: func_ov031_02238000
extern "C" ARM void func_ov031_02238000() {
    Struct_ov031_02238000 var0;
    int var1 = 0;
    int var2 = data_ov031_02249394[data_ov031_02290d10->unknown_1c_];
    if (var2 > 0) do {
        unsigned char var3 = data_ov031_02290d10->unknown_1c_;
        func_ov031_0223cb34(&data_ov031_02249364[var3][data_ov031_022492ea[var3][var1]], &data_ov031_02249308[var3], &var0);
        if (func_ov031_0223d49c(&var0)) {
            data_ov031_02290d10->unknown_1b_ = var1;
            break;
        }
        ++var1;
    } while (var1 < data_ov031_02249394[data_ov031_02290d10->unknown_1c_]);
    if (func_ov031_0223d354(1)) data_ov031_02290d10->unknown_1b_ = data_ov031_022492f4[data_ov031_02290d10->unknown_1c_][0];
    if (func_ov031_0223d354(2)) data_ov031_02290d10->unknown_1b_ = data_ov031_022492f5[data_ov031_02290d10->unknown_1c_][0];
    Struct_ov031_022242ec* var4 = data_ov031_02290d10;
    int var5 = 0;
    int var6 = data_ov031_02249394[var4->unknown_1c_];
    if (var6 > 0) {
    int var7 = var4->unknown_1b_;
    do {
        if (var5 == var7) {
            return func_ov031_022383fc(var5);
        }
        ++var5;
    } while (var5 < data_ov031_02249394[var4->unknown_1c_]);
    }
    var4->unknown_1b_ = -1;
}
