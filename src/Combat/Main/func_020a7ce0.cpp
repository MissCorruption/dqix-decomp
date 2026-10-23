#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "Resource/GameResources.h"
#if defined(jpn)
enum { Enum_020a7ce0_1844 = 0x524 };
enum { Enum_020a7ce0_1940 = 0x7d4 };
#else
enum { Enum_020a7ce0_1844 = 0x734 };
enum { Enum_020a7ce0_1940 = 0x794 };
#endif

extern "C" void* func_02012fe4(void);

extern "C" int _s32_div_f(int a, int b);

struct Struct_020a7ce0 {
    char unknown_0_[0x44];
    Vector3i unknown_44_;
    char unknown_50_[0x144 - 0x50];
    Vector3i unknown_144_;
    int unknown_150_;
};

// USA: func_020a7ce0
extern "C" ARM void func_020a7ce0(struct Struct_020a7ce0* arg0) {
    void* var0 = func_02012fe4();
    void* var1 = GetGameResources();
    char* var2 = (char*)var1 + 0x3000;
    void* var3 = *(void**)(var2 + Enum_020a7ce0_1844);
    if (((unsigned char*)var3)[3] != 0) return;

    Vector3i var4 = arg0->unknown_44_;
    int var5 = Vector3fix_Distance(&var4, &arg0->unknown_144_);
    arg0->unknown_150_ += var5;
    if (arg0->unknown_150_ >= 0x3000) {
        int var6 = _s32_div_f(arg0->unknown_150_, 0x3000);
        char* var7 = (char*)var0 + 0x2000;
        *(int*)(var7 + Enum_020a7ce0_1940) -= var6;
        arg0->unknown_150_ -= var6 << 12;
    }
    arg0->unknown_144_ = var4;
}
