#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_0221712c {
    char unknown_0_[0x1008];
    int unknown_1008_;
    char unknown_100c_[4];
    char unknown_1010_[0xf];
    char unknown_101f_[0x33];
    char unknown_1052_[0x12d];
    char unknown_117f_[9];
    char unknown_1188_[0x41];
    char unknown_11c9_[0x14b];
    void* unknown_1314_;
};
struct Struct_ov031_0224e5e8_11 { int unknown_0_, unknown_4_; Struct_ov031_0221712c* unknown_8_; char unknown_c_[8]; };
extern Struct_ov031_0224e5e8_11 data_ov031_0224e5e8;
extern int data_020f3390;
extern char data_ov031_02249bf4[], data_ov031_02249bfc[], data_ov031_02249c08[];
extern char data_ov031_02249c14[], data_ov031_02249c1c[], data_ov031_02249c24[];
extern char data_ov031_02249c30[], data_ov031_02249c3c[];
extern "C" char* func_ov031_02218e2c(void*, const char*);
extern "C" void func_ov031_0221a218(void);
extern "C" int func_02005a94(const char*);
extern "C" int func_020059cc(const char*, char**, int);
extern "C" int func_ov031_02218e84(void*, int, char*, int);
extern "C" int func_ov031_02218ed8(void*, void*, char*, int);

// USA: func_ov031_0221712c
extern "C" ARM int func_ov031_0221712c() {
    char* var0 = NULL;
    var0 = func_ov031_02218e2c(data_ov031_0224e5e8.unknown_8_->unknown_1314_, data_ov031_02249bf4);
    if (var0 != NULL) func_ov031_0221a218();
    var0 = NULL;
    data_020f3390 = 0;
    int var1 = func_02005a94(func_ov031_02218e2c(data_ov031_0224e5e8.unknown_8_->unknown_1314_, data_ov031_02249bfc));
    if (data_020f3390 == 0x22) {
        data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e85;
        return 12;
    }
    if (var1 != 200) {
        data_ov031_0224e5e8.unknown_8_->unknown_1008_ = var1 + 23000;
        return 18;
    }
    if (func_ov031_02218e84(data_ov031_0224e5e8.unknown_8_->unknown_1314_, (int)data_ov031_02249c08,
                                  data_ov031_0224e5e8.unknown_8_->unknown_100c_, 4) <= 0) {
        data_ov031_0224e5e8.unknown_8_->unknown_1008_ = 0x4e85;
        return 14;
    }
    var1 = func_020059cc(data_ov031_0224e5e8.unknown_8_->unknown_100c_, &var0, 10);
    Struct_ov031_0221712c* var2 = data_ov031_0224e5e8.unknown_8_;
    if (var0 != var2->unknown_100c_ + strlen(var2->unknown_100c_)) {
        var2->unknown_1008_ = 0x4e85;
        return 12;
    }
    var2->unknown_1008_ = var1 + 20000;
    if (var1 < 100) {
    data_ov031_0224e5e8.unknown_8_->unknown_1052_[0] = 0;
    data_ov031_0224e5e8.unknown_8_->unknown_101f_[0] = 0;
    data_ov031_0224e5e8.unknown_8_->unknown_117f_[0] = 0;
    data_ov031_0224e5e8.unknown_8_->unknown_1010_[0] = 0;
    data_ov031_0224e5e8.unknown_8_->unknown_1188_[0] = 0;
    func_ov031_02218e84(data_ov031_0224e5e8.unknown_8_->unknown_1314_, (int)data_ov031_02249c14,
                              data_ov031_0224e5e8.unknown_8_->unknown_1052_, 0x12d);
    func_ov031_02218e84(data_ov031_0224e5e8.unknown_8_->unknown_1314_, (int)data_ov031_02249c1c,
                              data_ov031_0224e5e8.unknown_8_->unknown_101f_, 0x33);
    func_ov031_02218e84(data_ov031_0224e5e8.unknown_8_->unknown_1314_, (int)data_ov031_02249c24,
                              data_ov031_0224e5e8.unknown_8_->unknown_117f_, 9);
    func_ov031_02218e84(data_ov031_0224e5e8.unknown_8_->unknown_1314_, (int)data_ov031_02249c30,
                              data_ov031_0224e5e8.unknown_8_->unknown_1010_, 0xf);
    func_ov031_02218ed8(data_ov031_0224e5e8.unknown_8_->unknown_1314_, data_ov031_02249c3c,
                        data_ov031_0224e5e8.unknown_8_->unknown_1188_, 0x41);
    data_ov031_0224e5e8.unknown_8_->unknown_1188_[0x2b] = 0;
    if (var1 != 40) data_ov031_0224e5e8.unknown_0_ = 1;
    else data_ov031_0224e5e8.unknown_0_ = 2;
    }
    return 0;
}
