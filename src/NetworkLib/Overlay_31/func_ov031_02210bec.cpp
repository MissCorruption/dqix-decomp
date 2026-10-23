#include <globaldefs.h>

struct Struct_ov031_02210bec_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    char unknown_18_[0x3fc];
};

struct Struct_ov031_02210bec {
    char unknown_0_[0x28];
    int unknown_28_;
    int unknown_2c_;
    void (*unknown_30_)(int);
    char unknown_34_[0xc];
    int unknown_40_;
    char unknown_44_[0x45];
    char unknown_89_[0x12c];
    char unknown_1b5_;
};

extern Struct_ov031_02210bec* data_ov031_0224e588;
extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" int func_020d2f28(char* arg0, const char* arg1, int arg2);
extern "C" int func_ov031_0221042c(unsigned char* arg0);
extern "C" int func_ov031_022104e4(unsigned char* arg0);
extern "C" void func_ov031_02210358(int arg0, int arg1);
extern "C" void func_ov031_022103f8(void* arg0);
extern "C" void func_ov031_022103dc(void* arg0);

// USA: func_ov031_02210bec
extern "C" ARM void func_ov031_02210bec(void) {
    int var0;
    unsigned int var1;
    unsigned char var2[0x414];
    Struct_ov031_02210bec_2* var3 = (Struct_ov031_02210bec_2*)var2;
    unsigned int var4;

    if (data_ov031_0224e588->unknown_40_ != 3) {
        func_ov031_022103f8((void*)5);
        return;
    }
    data_ov031_0224e588->unknown_1b5_ = 0;
    var0 = func_020d2ff0(data_ov031_0224e588->unknown_89_);
    var1 = var0 + 0x19;
    VectorizedMemset(var2, 0, sizeof(var2));
    var3->unknown_0_ = var1;
    var3->unknown_4_ = 0x44535359;
    var3->unknown_8_ = 0xd3;
    var3->unknown_c_ = 0;
    var3->unknown_10_ = data_ov031_0224e588->unknown_28_;
    var3->unknown_14_ = data_ov031_0224e588->unknown_2c_;
    func_020d2f28(var3->unknown_18_, data_ov031_0224e588->unknown_89_, var0 + 1);
    if (func_ov031_0221042c(var2) != var1) {
        func_ov031_022103f8((void*)5);
        return;
    }
    var4 = func_ov031_022104e4(var2);
    if (var4 < 0xc || var4 != var3->unknown_0_) {
        func_ov031_022103f8((void*)5);
        return;
    }
    switch (var3->unknown_8_) {
    case 0xca:
        switch (var3->unknown_c_) {
        case 0x15:
            func_ov031_02210358(2, -2);
            break;
        case 0x18:
            func_ov031_02210358(6, -0x14);
            break;
        case 0x1b:
            func_ov031_02210358(2, -2);
            break;
        case 0x1d:
            data_ov031_0224e588->unknown_40_ = 0;
            VectorizedMemset(&data_ov031_0224e588->unknown_44_, 0, 0x174);
            func_ov031_022103dc((void*)5);
            return;
        }
        func_ov031_022103f8((void*)5);
        return;
    case 0xd4:
        if (data_ov031_0224e588->unknown_2c_ == 0) {
            int var5 = var3->unknown_c_;
            data_ov031_0224e588->unknown_2c_ = var5;
            if (data_ov031_0224e588->unknown_30_ != NULL) {
                data_ov031_0224e588->unknown_30_(var5);
            }
        }
        func_ov031_022103dc((void*)7);
        return;
    }
    func_ov031_02210358(2, -0x28);
    func_ov031_022103f8((void*)5);
}
