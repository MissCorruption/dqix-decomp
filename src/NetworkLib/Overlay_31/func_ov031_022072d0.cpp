#include <globaldefs.h>

struct Struct_ov031_022072d0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};

extern "C" int func_ov031_022058f0(int arg0, void* arg1, int arg2, unsigned short* arg3, unsigned int* arg4, int arg5);

// USA: func_ov031_022072d0
extern "C" ARM int func_ov031_022072d0(int arg0, void* arg1, int arg2, int arg3, void* arg4) {
    unsigned int var0;
    unsigned short var1;
    int var2 = func_ov031_022058f0(arg0, arg1, arg2, &var1, &var0, arg3);
    if (var2 < 0) return var2;
    if (arg4 == NULL) return var2;
    Struct_ov031_022072d0* var3 = static_cast<Struct_ov031_022072d0*>(arg4);
    unsigned int var4 = var1;
    var3->unknown_2_ = ((int)var4 >> 8 & 0xff) | ((var4 << 8) & 0xff00);
    unsigned int var5 = var0;
    var3->unknown_4_ = ((var5 >> 24) & 0xff) | ((var5 >> 8) & 0xff00) | ((var5 << 8) & 0xff0000) | ((var5 << 24) & 0xff000000);
    return var2;
}
