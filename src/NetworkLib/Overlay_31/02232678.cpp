#include <globaldefs.h>

extern "C" unsigned char func_ov031_0223607c(int);
extern "C" void* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
struct Struct_ov031_02222ce4;
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4*, int, int);
struct Struct_ov031_02232678 {
    void* unknown_0_;
    void* unknown_4_[3];
    void* unknown_10_[3];
};
struct Struct_ov031_02290cc0 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    Struct_ov031_02232678* unknown_4_;
};
extern Struct_ov031_02290cc0 data_ov031_02290cc0;
extern const unsigned char data_ov031_02249060[4];
struct Struct_ov031_02249082 { unsigned short unknown_0_, unknown_2_; };
extern Struct_ov031_02249082 data_ov031_02249082[6];

// USA: func_ov031_02232678
extern "C" ARM void func_ov031_02232678(void) {
    int var0;
    int var1 = 0;
    do {
        var0 = func_ov031_0223607c(var1);
        if (var0 == 255) {
            var0 = 3;
        } else {
            int var2 = var1 + 3;
            data_ov031_02290cc0.unknown_4_->unknown_10_[var1] = func_ov031_0223be70(0, 17, 1);
            func_ov031_0223bbd8(data_ov031_02290cc0.unknown_4_->unknown_10_[var1], -1,
                data_ov031_02249082[var2].unknown_0_, data_ov031_02249082[var2].unknown_2_);
            func_ov031_0223bcc8((Struct_ov031_02222ce4*)data_ov031_02290cc0.unknown_4_->unknown_10_[var1], -1, 3);
        }
        data_ov031_02290cc0.unknown_4_->unknown_4_[var1] = func_ov031_0223be70(0, data_ov031_02249060[var0], 1);
        func_ov031_0223bbd8(data_ov031_02290cc0.unknown_4_->unknown_4_[var1], -1,
            data_ov031_02249082[var1].unknown_0_, data_ov031_02249082[var1].unknown_2_);
        func_ov031_0223bcc8((Struct_ov031_02222ce4*)data_ov031_02290cc0.unknown_4_->unknown_4_[var1], -1, 3);
        ++var1;
    } while (var1 < 3);
}
