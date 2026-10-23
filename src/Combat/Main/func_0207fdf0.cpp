#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0207fdf0_48 = 0x24 };
#else
enum { Enum_0207fdf0_48 = 0x30 };
#endif

extern "C" void func_0204c804(void*);

struct Struct_0207fdf0 { char unknown_0_[0xc4]; unsigned char unknown_c4_; char unknown_c5_[0x1b]; };

struct Struct_0207fdf0_2 {
    char unknown_0_[Enum_0207fdf0_48];
    Struct_0207fdf0* unknown_30_;
    char unknown_34_[0x39 - 0x34];
    unsigned char unknown_39_;
};

// USA: func_0207fdf0
extern "C" ARM void func_0207fdf0(Struct_0207fdf0_2* arg0, int arg1) {
    unsigned char var0;
    unsigned char var1;
    if (arg0->unknown_30_ == NULL) return;
    var0 = arg0->unknown_39_;
    for (var1 = 0; var1 < var0; var1++) {
        if (arg1 != arg0->unknown_30_[var1].unknown_c4_) {
            func_0204c804((void*)(&arg0->unknown_30_[var1]));
        }
    }
}
