#include <globaldefs.h>

struct Struct_ov031_02220298 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[6];
};
extern "C" int func_ov031_02220248(unsigned char**, unsigned char*, void*, int);

// USA: func_ov031_02220298
extern "C" THUMB int func_ov031_02220298(Struct_ov031_02220298* arg0, void* arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)(arg0 + 1);
    unsigned short var1 = arg0->unknown_0_;
    unsigned short var2 = (unsigned char)(var1 >> 8) | ((var1 << 8) & 0xff00);
    return func_ov031_02220248(&var0, var0 + var2, arg1, arg2);
}
