#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov024_021fe698(char* arg0, int arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fcc6c {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

struct Struct_ov024_021fcc6c_2 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x148 - 6];
    Struct_ov024_021fcc6c* unknown_148_;
    char unknown_14c_[0x17c - 0x14c];
    unsigned char unknown_17c_;
};

struct Struct_ov024_021fcc6c_3 {
    char unknown_0_[0x16];
    unsigned char unknown_16_;
    unsigned char unknown_17_;
};

struct Struct_ov024_021fcc6c_4 {
    unsigned char* unknown_0_;
    char unknown_4_[2];
    unsigned char unknown_6_;
    char unknown_7_[5];
    int unknown_c_;
    char unknown_10_[0x7c - 0x10];
    Struct_ov024_021fcc6c_2* unknown_7c_[8];
    int unknown_9c_;
};

struct Struct_ov024_021fcc6c_5 {
    char unknown_0_[0xc4];
    float unknown_c4_;
};

// USA: func_ov024_021fcc6c
extern "C" ARM void func_ov024_021fcc6c(Struct_ov024_021fcc6c_4* arg0) {
    float var0 = 1000.0f;
    int var1;
    if (arg0->unknown_6_ == 2) {
        var1 = 1;
    } else if (arg0->unknown_6_ == 0) {
        return;
    } else {
        var1 = 1;
        if (arg0->unknown_c_ >= 4) var0 = 50.0f;
    }
    if (!var1) return;
    if (!func_ov024_021fe698((char*)arg0, 0x12)) return;
    Struct_ov024_021fcc6c_5 var2;
    for (int var3 = 0; var3 < arg0->unknown_9c_; var3++) {
        Struct_ov024_021fcc6c_2* var4 = arg0->unknown_7c_[var3];
        if ((int)var4->unknown_17c_ >= 0 && (int)var4->unknown_17c_ < 3) {
            Struct_ov024_021fcc6c* var5 = var4->unknown_148_;
            if (!var5) return;
            if (var5->unknown_4_ != 0) {
                Struct_ov024_021fcc6c_3* var6 = (Struct_ov024_021fcc6c_3*)(arg0->unknown_0_ + 0x81b4) + var4->unknown_17c_;
                if (var6->unknown_16_ == 0 && var6->unknown_17_ == 0) {
                    memset(&var2, 0, sizeof(var2));
                    var2.unknown_c4_ = var0;
                    func_ov024_021f9874(arg0, &var2, var4->unknown_17c_, (unsigned char)var4->unknown_4_);
                }
            }
        }
    }
}
