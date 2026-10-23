#include <globaldefs.h>
#include "Graphics/Model3D.h"

struct Struct_ov025_021ef988_14 {
#if defined(jpn)
    char unknown_0_[4];
#else
    char unknown1_0_[0xc];
#endif
    char* unknown_c_;
};

struct Struct_ov025_021e509c {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[2];
    const char* unknown_c_;
};

struct Struct_ov025_021e509c_2 {
    char unknown_0_[8];
    Model3D* unknown_8_;
    char unknown_c_[0xac - 0xc];
    int unknown_ac_;
    char unknown_b0_[2];
    short unknown_b2_;
    short unknown_b4_;
};

extern "C" void* func_02057924(void);
extern "C" Struct_ov025_021e509c_2* func_02058658(void* arg0, int arg1);
extern "C" int* func_ov025_021e8cf0(char* arg0, int arg1);
extern Struct_ov025_021ef988_14 data_ov025_021ef988;

// USA: func_ov025_021e509c
extern "C" ARM int func_ov025_021e509c(Struct_ov025_021e509c* arg0) {
    void* var0 = func_02057924();
    int* var1 = func_ov025_021e8cf0(data_ov025_021ef988.unknown_c_, arg0->unknown_8_);
    int* var2 = func_ov025_021e8cf0(data_ov025_021ef988.unknown_c_, arg0->unknown_9_);
    if (var1 == 0 || var2 == 0) {
        return 1;
    }
    int var3 = *var2;
    Struct_ov025_021e509c_2* var4 = func_02058658(var0, *var1);
    Struct_ov025_021e509c_2* var5 = func_02058658(var0, var3);
    if (var4 == 0 || var5 == 0) {
        return 1;
    }
    if (var5->unknown_ac_ != 0) {
        return 1;
    }
    var4->unknown_b2_ = var3;
    if (arg0->unknown_c_ != 0 && var5->unknown_8_ != 0) {
        var4->unknown_b4_ = var5->unknown_8_->GetBoneIndex(arg0->unknown_c_);
    }
    return 1;
}
