#include <globaldefs.h>

#if defined(jpn)
struct Struct_0203c54c_2 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[10];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_0203c54c {
    void* unknown_0_;
    Struct_0203c54c_2 unknown_4_[96];
    int unknown_604_;
    char* unknown_608_;
    unsigned int unknown_60c_;
    unsigned short unknown_610_;
    unsigned short unknown_612_;
    unsigned char unknown_614_[256];
};

extern "C" void func_0203be8c(char* arg0);
#else
extern "C" void func_0203be8c(char* arg0);
#endif

// USA: func_0203c54c
extern "C" ARM void func_0203c54c(char* arg0, short* arg1) {
#if defined(jpn)
    if (arg1 == NULL) return;
    Struct_0203c54c* var0 = reinterpret_cast<Struct_0203c54c*>(arg0);
    Struct_0203c54c_2* var1;
    for (int var2 = 0; var2 < 10; ++var2) {
        short var3 = arg1[var2];
        if (var3 < 0) continue;
        Struct_0203c54c_2* var4 = &var0->unknown_4_[var3];
        var1 = &var0->unknown_4_[var3 + 1];
        if (var4->unknown_e_ == 0) continue;
        arg1[var2] = -1;
        --var4->unknown_e_;
        --var1->unknown_e_;
        if (var4->unknown_e_ != 0) continue;
        func_0203be8c(reinterpret_cast<char*>(var4));
        func_0203be8c(reinterpret_cast<char*>(var1));
        var0->unknown_612_ -= 2;
    }
#else
    short var5 = *arg1;
    int var6;
    char* var7;
    if (var5 < 0) return;
    var7 = arg0 + 4 + var5 * 0x28;
    *arg1 = -1;
    var6 = ((unsigned char*)var7)[0x24];
    if (var6 == 0) return;
    var6 = var6 - 1;
    ((unsigned char*)var7)[0x24] = var6;
    if ((var6 & 0xff) != 0) return;
    func_0203be8c(var7);
    *(unsigned short*)(arg0 + 0x512) -= 1;
#endif
}
