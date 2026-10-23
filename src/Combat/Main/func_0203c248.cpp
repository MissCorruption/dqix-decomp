#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
struct Struct_0203bdf4_2 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[10];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};
struct Struct_0203bdf4 {
    void* unknown_0_;
    Struct_0203bdf4_2 unknown_4_[96];
};
#else
struct Struct_0203bdf4_2 {
    unsigned char unknown_0_[32];
    unsigned char unknown_20_[8];
};
struct Struct_0203bdf4 {
    void* unknown_0_;
    Struct_0203bdf4_2 unknown_4_[32];
};
#endif

extern Struct_0203bdf4* data_02105244;
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void func_02042764(const unsigned char* arg0, char* arg1, int arg2);

#if defined(jpn)
// USA: func_0203c248
extern "C" ARM void func_0203bdf4(const short* arg0, char* arg1) {
    Struct_0203bdf4* var0 = data_02105244;
    if (var0 == NULL) return;
    Struct_0203bdf4_2* var1;
    int var2 = 0;
    var1 = var0->unknown_4_;

    for (int var3 = 0; var3 < 10; ++var3) {
        short var4 = arg0[var3];
        if (var4 >= 0) {
            Struct_0203bdf4_2* var5 = &var1[var4];
            int var6 = func_020d2ff0(var5->unknown_4_);
            memcpy(arg1 + var2, var5->unknown_4_, var6);
            var2 += var6;
            ++var3;
        }
    }
}
#else
// USA: func_0203c248
extern "C" ARM void func_0203c248(char* arg0, int arg1) {
    Struct_0203bdf4* var0 = data_02105244;
    Struct_0203bdf4_2* var1;
    short var2;
    if (var0 == NULL) return;
    var1 = var0->unknown_4_;
    var2 = *reinterpret_cast<short*>(arg0 + 0x14);
    if (var2 < 0) return;
    func_02042764(var1[var2].unknown_0_, reinterpret_cast<char*>(arg1), 0);
}
#endif
