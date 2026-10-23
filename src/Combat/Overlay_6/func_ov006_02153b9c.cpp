#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_ov006_021537d0 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_[3];
    unsigned short unknown_a_0_ : 4;
    unsigned short unknown_a_4_ : 4;
    unsigned short unknown_b_0_ : 4;
    unsigned short unknown_b_4_ : 4;
};

struct Struct_02071d60;

extern "C" Struct_ov006_021537d0* func_02071d60(Struct_02071d60* arg0, int arg1);

struct Struct_ov006_021537c8 {
    Struct_02071d60* unknown_0_;
    short** unknown_4_;
    unsigned char** unknown_8_;
    unsigned short* unknown_c_;
};

// USA: func_ov006_02153b9c
extern "C" ARM void func_ov006_02153b9c(Struct_ov006_021537c8* arg0, short arg1, unsigned char* arg2) {
    memset(arg2, 0, 3);
    Struct_ov006_021537d0* var0 = func_02071d60(arg0->unknown_0_, arg1);
    if (var0 == 0)
        return;
    for (int var1 = 0; var1 < 9; var1++) {
        short* var2 = arg0->unknown_4_[var1];
        unsigned char* var3 = arg0->unknown_8_[var1];
        short var4 = arg0->unknown_c_[var1];
        for (short var5 = 0; var5 < var4; var5++) {
            short var6 = var2[var5];
            if (var6 > 0) {
                if (var6 == var0->unknown_4_[0])
                    arg2[0] = var3[var5];
                else if (var6 == var0->unknown_4_[1])
                    arg2[1] = var3[var5];
                else if (var6 == var0->unknown_4_[2])
                    arg2[2] = var3[var5];
            }
        }
    }
}
