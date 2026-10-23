#include <globaldefs.h>

struct Struct_ov023_021dceac {
#if defined(jpn)
    char unknown1_0_[0x700];
#else
    char unknown_0_[0x784];
#endif
    const char* unknown_784_[3];
    unsigned char unknown_790_[3];
    unsigned char unknown_793_[3];
    unsigned char unknown_796_[3];
};

// USA: func_ov023_021dceac
extern "C" ARM void func_ov023_021dceac(char* arg0, int arg1, int arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5) {
    Struct_ov023_021dceac* var0 = (Struct_ov023_021dceac*)arg0;
    var0->unknown_784_[arg1] = (const char*)arg2;
    var0->unknown_790_[arg1] = arg3;
    var0->unknown_793_[arg1] = arg4;
    var0->unknown_796_[arg1] = arg5;
}
