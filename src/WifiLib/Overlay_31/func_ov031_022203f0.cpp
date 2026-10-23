#include <globaldefs.h>

extern "C" unsigned char* func_ov031_02220390(void*);

struct Struct_ov031_022203f0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

// USA: func_ov031_022203f0
extern "C" THUMB int func_ov031_022203f0(struct Struct_ov031_022203f0* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_1_ = 0;
    arg0->unknown_2_ = 0;
    arg0->unknown_3_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_5_ = 0;
    arg0->unknown_6_ = 0;
    arg0->unknown_7_ = 0;

    int var0 = (int)func_ov031_02220390((unsigned char*)arg0 + 8) - (int)arg0;
    ((unsigned short*)arg0)[0] = (unsigned short)(var0 - 8);
    return var0;
}
