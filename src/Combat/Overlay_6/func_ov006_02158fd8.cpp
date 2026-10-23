#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_0215f3d8 func_ov006_021607f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_ov006_02157a60 {
    char unknown_0_[R(0x40, 0x48)];
    short** unknown_48_;
    unsigned char** unknown_4c_;
    unsigned short* unknown_50_;
};

extern "C" const unsigned short data_ov006_0215fffe[9];

// USA: func_ov006_02158fd8
extern "C" ARM void func_ov006_02158fd8(Struct_ov006_02157a60* arg0, unsigned int arg1, short arg2, unsigned char arg3) {
    if (arg2 <= 0 || arg3 == 0)
        return;
    short* var0 = arg0->unknown_48_[arg1];
    unsigned char* var1 = arg0->unknown_4c_[arg1];
    unsigned short* var2 = &arg0->unknown_50_[arg1];
    unsigned short var3[9];
    memcpy(var3, data_ov006_0215fffe, sizeof(var3));
    unsigned short var4 = var3[arg1];
    for (unsigned short var5 = 0; var5 < var4; var5++) {
        short var6 = var0[var5];
        if (var6 <= 0) {
            var0[var5] = arg2;
            var1[var5] = arg3;
            (*var2)++;
            return;
        }
        if (var6 == arg2) {
            var1[var5] += arg3;
            return;
        }
    }
}
