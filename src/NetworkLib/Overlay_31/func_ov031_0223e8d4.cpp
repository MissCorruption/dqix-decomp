#include <globaldefs.h>

struct Struct_ov031_02249408 {
    char unknown_0_[2];
    char unknown_2_;
    char unknown_3_;
    unsigned char unknown_4_[9];
};

struct Struct_ov031_02290e4c {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[10];
    char unknown_12_[33];
    unsigned char unknown_33_[6];
    unsigned char unknown_39_[3];
};

extern Struct_ov031_02249408 data_ov031_02249408;
Struct_ov031_02290e4c data_ov031_02290e4c;
extern "C" int func_ov031_02212274(void* arg0);
extern "C" void func_ov031_0223fb98(char* arg0, unsigned int arg1);
extern "C" void func_ov031_0223fb74(void* arg0, const void* arg1, unsigned int arg2);
extern "C" int func_ov031_0223e454(unsigned char* arg0, const signed char* arg1, int arg2);

// USA: func_ov031_0223e8d4
extern "C" ARM int func_ov031_0223e8d4(unsigned char* arg0) {
    Struct_ov031_02249408 var0 = data_ov031_02249408;
    if (func_ov031_02212274(&data_ov031_02290e4c)) {
        int var1 = data_ov031_02290e4c.unknown_0_;
        if (var1 >= 0 && var1 < 10)
            var0.unknown_0_[1] = var1 + '0';
        else if (var1 >= 10 && var1 < 100)
            func_ov031_0223fb98(var0.unknown_0_, var1);
        if (data_ov031_02290e4c.unknown_0_ == 4 || data_ov031_02290e4c.unknown_0_ == 8) {
            var1 = data_ov031_02290e4c.unknown_4_;
            if (var1 >= 0 && var1 < 10)
                var0.unknown_3_ = var1 + '0';
            func_ov031_0223fb74(var0.unknown_4_, data_ov031_02290e4c.unknown_8_, 9);
        }
        func_ov031_0223e454(arg0, (const signed char*)&var0, sizeof(var0));
        return 1;
    }
    return 0;
}
