#include <globaldefs.h>

struct Struct_ov001_021658b8_10 { char unknown_0_[0x88]; int unknown_88_; };
extern Struct_ov001_021658b8_10 data_ov001_021658b8;
extern "C" void* func_ov017_021d612c(void*);
extern "C" void func_ov001_0215ec94(void*, int);

// USA: func_ov001_0215ed74
extern "C" ARM int func_ov001_0215ed74(void* arg0, int arg1) {
    int var0;
    for (var0 = data_ov001_021658b8.unknown_88_; var0 < arg1; var0++) {
        void* var1 = func_ov017_021d612c(arg0);
        arg0 = (char*)arg0 + 0x8;
        func_ov001_0215ec94(var1, var0);
    }
    return 1;
}
