#include <globaldefs.h>

struct Struct_ov006_02157a60 {
    char unknown_0_[0x362];
    short unknown_362_;
    short unknown_364_;
    char unknown_366_[0x22];
    unsigned char unknown_388_;
};

struct Struct_ov006_021591ec;

extern "C" short* func_ov006_0215919c(void* arg0);
extern "C" unsigned char* func_ov006_021591c4(void* arg0);
extern "C" unsigned short func_ov006_021591ec(Struct_ov006_021591ec* arg0);

// USA: func_ov006_02159274
extern "C" ARM void func_ov006_02159274(Struct_ov006_02157a60* arg0, unsigned char* arg1, short* arg2, unsigned char* arg3) {
    *arg1 = 0;
    *arg2 = -1;
    *arg3 = 0;
    if (arg0->unknown_364_ < 0)
        return;
    short var0 = arg0->unknown_362_ - 0x5b;
    short* var1 = func_ov006_0215919c(arg0);
    unsigned char* var2 = func_ov006_021591c4(arg0);
    unsigned short var3 = func_ov006_021591ec((Struct_ov006_021591ec*)arg0);
    if (var1 != 0 && var2 != 0 && var3 != 0) {
        unsigned short var4 = (unsigned short)(arg0->unknown_388_ * 8);
        var4 += arg0->unknown_364_ - 0x64;
        *arg1 = var0;
        *arg2 = var1[var4];
        *arg3 = var2[var4];
    }
}
