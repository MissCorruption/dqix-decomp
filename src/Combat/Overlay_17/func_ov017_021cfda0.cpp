#include <globaldefs.h>

struct Struct_02015a98;

extern "C" unsigned char* func_020177a8(unsigned char* arg0, int arg1);
extern "C" void func_02015a98(Struct_02015a98* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_02012fe4(void* arg0);

struct Struct_ov017_021cfda0 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
};

// USA: func_ov017_021cfda0
extern "C" ARM void func_ov017_021cfda0(void* arg0, Struct_ov017_021cfda0* arg1) {
    unsigned char* var0 = (unsigned char*)func_02012fe4(arg0);
    if (arg1->unknown_4_ != *(unsigned short*)var0) return;
    unsigned char* var1 = func_020177a8(var0, arg1->unknown_6_);
    if (!var1) return;
    func_02015a98((struct Struct_02015a98*)var1, arg1->unknown_8_, 0, 0);
}
