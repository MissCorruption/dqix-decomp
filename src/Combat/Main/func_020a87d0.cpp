#include <globaldefs.h>
#include "Resource/Brightness.h"

struct Struct_020a87d0_2;
extern char data_02108760;
extern "C" void func_0205eb80(void* arg0);
extern "C" void func_0205eb54(void* arg0, int arg1, int arg2);
extern "C" void func_0205eb90(void* arg0, int arg1, int arg2);
extern "C" void* func_0202ae18(void);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_ov017_021d1874(unsigned char arg0, unsigned char arg1, unsigned char arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_020a87d0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};

// USA: func_020a87d0
extern "C" ARM void func_020a87d0(struct Struct_020a87d0* arg0) {
    if (arg0->unknown_4_ == 1) return;
    arg0->unknown_4_ = 1;

    struct Struct_020a87d0_2* var0 = (struct Struct_020a87d0_2*)GetGameResources();
    if (IsBrightnessWithinValidRange((GameResources*)var0, false) != 0) {
        func_0205eb80(&data_02108760);
        func_0205eb54(&data_02108760, 0x72, 0x72);
        func_0205eb90(&data_02108760, 0, 0);
    }

    signed char var1 = func_0202c1a4((struct Struct_0202c1a4*)func_0202ae18());
    arg0->unknown_5_ |= (1 << var1);
    func_ov017_021d1874(arg0->unknown_0_, arg0->unknown_1_, arg0->unknown_2_, 1, var1 & 0xff, 0, 0);
}
