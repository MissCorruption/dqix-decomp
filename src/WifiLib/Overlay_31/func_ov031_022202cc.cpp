#include <globaldefs.h>

struct Struct_ov031_022202cc_2 {
    union { struct { unsigned short unknown_0_; unsigned char unknown_2_[6]; } unknown_0_; unsigned char unknown1_0_[8]; } unknown_0_;
    unsigned char unknown_8_[1];
};
struct Struct_ov031_022202cc {
    union { struct { unsigned short unknown_0_, unknown_2_, unknown_4_; } unknown_0_; unsigned char unknown1_0_[6]; } unknown_0_;
    unsigned char unknown_6_[1];
};
extern "C" void func_ov031_02220f0c(unsigned char*, void*, int, void*, int);
extern "C" void* memcpy(void*, const void*, unsigned int);

// USA: func_ov031_022202cc
extern "C" THUMB int func_ov031_022202cc(Struct_ov031_022202cc* arg0, int arg1, Struct_ov031_022202cc_2* arg2, int arg3, void* arg4) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned int var1 = 0;
    arg2->unknown_0_.unknown1_0_[0] = 0;
    unsigned short var2 = arg3 - 8;
    arg2->unknown_0_.unknown1_0_[1] = 0;
    arg2->unknown_0_.unknown1_0_[2] = 0;
    arg2->unknown_0_.unknown1_0_[3] = 0;
    arg2->unknown_0_.unknown1_0_[4] = 0;
    arg2->unknown_0_.unknown1_0_[5] = 0;
    arg2->unknown_0_.unknown1_0_[6] = 0;
    arg2->unknown_0_.unknown1_0_[7] = 0;
    arg2->unknown_0_.unknown_0_.unknown_0_ = (unsigned char)(var2 >> 8) | ((var2 << 8) & 0xff00);
    if (arg4) {
        func_ov031_02220f0c(arg0->unknown_6_, arg2, arg3, arg4, 16);
        arg3 += 8;
    } else memcpy(arg0->unknown_6_, arg2, arg3);
    arg0->unknown_0_.unknown1_0_[0] = 0;
    arg0->unknown_0_.unknown1_0_[1] = 0;
    arg0->unknown_0_.unknown1_0_[2] = 0;
    arg0->unknown_0_.unknown1_0_[3] = 0;
    arg0->unknown_0_.unknown1_0_[4] = 0;
    arg0->unknown_0_.unknown1_0_[5] = 0;
    unsigned short var3 = arg1;
    arg0->unknown_0_.unknown_0_.unknown_0_ = (unsigned char)(var3 >> 8) | ((var3 << 8) & 0xff00);
    unsigned short var4 = arg3;
    arg0->unknown_0_.unknown_0_.unknown_2_ = (unsigned char)(var4 >> 8) | ((var4 << 8) & 0xff00);
    var0 += 6;
    var0 += arg3;
    unsigned char* var5 = (unsigned char*)arg0;
    if (var5 < var0) do { var1 += *var5++; } while (var5 < var0);
    unsigned short var6 = var1;
    *(unsigned short*)var0 = (unsigned char)(var6 >> 8) | ((var6 << 8) & 0xff00);
    return var0 + 2 - (unsigned char*)arg0;
}
