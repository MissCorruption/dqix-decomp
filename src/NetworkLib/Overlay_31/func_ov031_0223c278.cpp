#include <globaldefs.h>

struct Struct_ov031_0223c278 {
    unsigned char unknown_0_[4];
    short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

extern void* data_ov031_02290d34;
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_0223c2d0(void*, Struct_ov031_0223c278*);

// USA: func_ov031_0223c278
extern "C" ARM int func_ov031_0223c278(int arg0) {
    Struct_ov031_0223c278* var0 = (Struct_ov031_0223c278*)data_ov031_02290d34;
    if (var0->unknown_9_ != 0) return 0;
    void* var1 = func_ov031_0223e218((void*)1, (void*)func_ov031_0223c2d0, var0, 0xc8);
    *(void**)var0 = var1;
    var0->unknown_4_ = 0;
    var0->unknown_6_ = (unsigned short)arg0;
    var0->unknown_9_ = 1;
    return 1;
}
