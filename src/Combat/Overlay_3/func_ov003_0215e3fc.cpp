#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
enum { Enum_ov003_0215e3fc_948 = 0x3cc };
#else
enum { Enum_ov003_0215e3fc_948 = 0x3b4 };
#endif

extern "C" int func_0209ca2c(void* arg0);
extern "C" void* func_020e2ff8(void);

extern "C" void func_0205e944(void* arg0, int arg1);
extern "C" void func_ov003_0215c800(void* arg0);

extern int data_02109bf4;
extern int data_02108760;

struct Struct_ov003_0215c924_2 {
    char unknown_0_[Enum_ov003_0215e3fc_948];
    int* unknown_3b4_;
    unsigned char unknown_3b8_;
    char unknown_3b9_[0x3bc - 0x3b9];
    unsigned char unknown_3bc_;
    char unknown_3bd_[0x3ec - 0x3bd];
    unsigned char unknown_3ec_;
};

// USA: func_ov003_0215e3fc
extern "C" ARM void func_ov003_0215e3fc(struct Struct_ov003_0215c924_2* arg0) {
    if (func_0209ca2c(&data_02109bf4) != 0) {
        return;
    }
    if (arg0->unknown_3ec_ != 0) {
        return;
    }

    func_0205e944(&data_02108760, 0x7f);
    func_020e2ff8();

    if (arg0->unknown_3b4_ != NULL) {
        int var0 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var0))->MaybeFreeAllocations();
        int var1;
#if defined(jpn)
        for (var1 = 0; var1 < 4; var1++) {
#else
        for (var1 = 0; var1 < 3; var1++) {
#endif
            ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_3b4_[var1]));
            arg0->unknown_3b4_[var1] = -1;
        }
    }

    func_ov003_0215c800(arg0);
    arg0->unknown_3bc_ = 5;
    arg0->unknown_3b8_ = 0;
}
