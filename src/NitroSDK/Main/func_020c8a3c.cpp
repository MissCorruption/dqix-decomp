#include <globaldefs.h>

extern "C" void func_020c8aac(void);

struct Struct_02111588 { unsigned int unknown_0_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern Struct_02111588 data_02111588;

struct Struct_020c8a3c { char unknown_0_[0xfdc]; void (*unknown_fdc_)(void); };

// USA: func_020c8a3c
extern "C" ARM void func_020c8a3c(void) {
    unsigned int var0 = *(unsigned int*)0x027ffd9c;
    if (var0 >= 0x02600000 && var0 < 0x02800000) {
        data_02111588.unknown_0_ = var0;
    } else {
        data_02111588.unknown_0_ = 0;
    }
    if (data_02111588.unknown_0_ == 0) {
        *(void(**)(void))0x027ffd9c = func_020c8aac;
        Struct_020c8a3c* var1 = (Struct_020c8a3c*)0x027e3000;
        var1->unknown_fdc_ = func_020c8aac;
    }
    data_02111588.unknown_8_ = 0;
}
