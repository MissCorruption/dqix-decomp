#if defined(jpn)
enum {Enum_ov017_021a99dc_3736=0xe94, Enum_ov017_021a99dc_516=0x200, Enum_ov017_021a99dc_3568=0xdec, Enum_ov017_021a99dc_540=0x218};
#else
enum {Enum_ov017_021a99dc_3736=0xe98, Enum_ov017_021a99dc_516=0x204, Enum_ov017_021a99dc_3568=0xdf0, Enum_ov017_021a99dc_540=0x21c};
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov017_021a99dc {
    unsigned char unknown_0_[Enum_ov017_021a99dc_3736];
    unsigned char unknown_e98_;
};

struct Struct_ov017_021a99dc_2 {
    unsigned char unknown_0_[0x20];
    Struct_ov017_021a99dc* unknown_20_;
    unsigned char unknown_24_[0x1];
    unsigned char unknown_25_;
    unsigned char unknown_26_;
};

// USA: func_ov017_021a99dc
extern "C" ARM void func_ov017_021a99dc(Struct_ov017_021a99dc_2* arg0, void* arg1, int arg2, int arg3, unsigned char arg4) {
    Struct_ov017_021a99dc* var0 = arg0->unknown_20_;
    if (var0 == NULL) {
        return;
    }
    if (arg2 == 0) {
        unsigned char var1 = arg0->unknown_25_;
        memcpy((char*)var0 + Enum_ov017_021a99dc_516 + 0xc00 + var1, arg1, arg3);
        arg0->unknown_25_ = arg0->unknown_25_ + arg3;
    } else if (arg2 == 2) {
        memcpy((char*)var0 + Enum_ov017_021a99dc_3568, arg1, arg3);
        var0 = arg0->unknown_20_;
        var0->unknown_e98_ = var0->unknown_e98_ | 0x4;
    } else {
        var0->unknown_e98_ = var0->unknown_e98_ | 0x1;
        unsigned char var2 = arg0->unknown_26_;
        memcpy((char*)arg0->unknown_20_ + Enum_ov017_021a99dc_540 + 0xc00 + var2, arg1, arg3);
        arg0->unknown_26_ = arg0->unknown_26_ + arg3;
    }
    if (arg4 != 0) {
        var0 = arg0->unknown_20_;
        var0->unknown_e98_ = var0->unknown_e98_ | 0x2;
    }
}
