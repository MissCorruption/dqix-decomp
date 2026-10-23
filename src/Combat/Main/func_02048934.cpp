#include <globaldefs.h>
#include "Util/Random.h"

extern "C" float _ffltu(unsigned int v);
extern "C" float _fmul(float a, float b);
extern "C" float _fadd(float arg0, float arg1);
extern "C" unsigned int _ffixu(float v);

struct Struct_02048934 {
    char unknown_0_[0x5c];
    unsigned short unknown_5c_;
    unsigned short unknown_5e_;
};

struct Struct_02048934_2 {
    char unknown_0_[0x188];
    unsigned short unknown_188_;
    unsigned short unknown_18a_;
};

// USA: func_02048934
extern "C" ARM void func_02048934(void* arg0, struct Struct_02048934* arg1, struct Random* arg2) {
    if (arg1 != NULL) {
        unsigned short var0 = arg1->unknown_5c_;
        ((struct Struct_02048934_2*)arg0)->unknown_188_ = 0.5f + var0 * NextRandomFloatBetween(arg2, 0.8f, 1.0f);
        ((struct Struct_02048934_2*)arg0)->unknown_18a_ = arg1->unknown_5e_;
    }
}
