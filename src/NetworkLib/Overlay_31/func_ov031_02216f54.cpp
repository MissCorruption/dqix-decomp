#include <globaldefs.h>
struct Struct_ov031_02216f54 {
    char unknown_0_[0x1008];
    int unknown_1008_;
    char unknown_100c_[0x200];
    void* (*unknown_120c_)(void*, unsigned int);
    void (*unknown_1210_)(void*, void*, int);
    char unknown_1214_[0x100];
    void* unknown_1314_;
};
struct Struct_ov031_0224e5e8_10 { int unknown_0_, unknown_4_; Struct_ov031_02216f54* unknown_8_; };
extern Struct_ov031_0224e5e8_10 data_ov031_0224e5e8;
extern char data_ov031_02249bd8, data_ov031_02249be8, data_ov031_0224e5f4;
extern "C" int func_ov031_02218b8c(void*, int);
extern "C" int func_ov031_0221712c();
extern "C" int func_ov031_0221c208(void*, int);
extern "C" void func_ov031_0221c258(void*);
extern "C" bool func_ov031_0221c1c4(int);
// USA: func_ov031_02216f54
extern "C" ARM int func_ov031_02216f54() {
    Struct_ov031_02216f54* var0 = data_ov031_0224e5e8.unknown_8_;
    void* (*var1)(void*, unsigned int) = var0->unknown_120c_;
    void (*var2)(void*, void*, int) = var0->unknown_1210_;
    if (func_ov031_02218b8c(var0->unknown_1314_, 0) != 1) {
        data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e84;
        return 14;
    }
    if (func_ov031_0221712c()) return 14;
    int var3 = data_ov031_0224e5e8.unknown_8_->unknown_1008_;
    if (var3 < 0x4e84) {
        if (var3 == 0x4e22) {
            void* var4 = var1(&data_ov031_02249bd8, 0x71f);
            if (!var4) { data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e84; return 2; }
            if (func_ov031_0221c208(&data_ov031_0224e5f4, ((int)var4 + 31) & ~31) != 1) {
                var2(&data_ov031_02249be8, var4, 0);
                data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e84;
                return 15;
            }
            var2(&data_ov031_02249be8, var4, 0);
        }
        return 21;
    }
    switch (var3) {
    case 0x4e88: {
        func_ov031_0221c258(&data_ov031_0224e5f4);
        data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e88;
        return 16;
    }
    case 0x4e8c: {
        void* var5 = var1(&data_ov031_02249bd8, 0x700);
        if (!var5) { data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e8c; return 17; }
        func_ov031_0221c1c4(((int)var5 + 31) & ~31);
        var2(&data_ov031_02249be8, var5, 0);
        data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e8c;
        return 17;
    }
    default: break;
    }
    return 18;
}
