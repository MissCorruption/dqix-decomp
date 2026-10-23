#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
enum { Enum_020db3a8_14104 = 0x3508 };
#else
enum { Enum_020db3a8_14104 = 0x3718 };
#endif


struct Struct_020db3a8 {
    unsigned char unknown_0_[0x54];
    unsigned char unknown_54_;
};

// USA: func_020db3a8
extern "C" ARM int func_020db3a8(Struct_020db3a8* arg0) {
    if (arg0->unknown_54_ == 1 && ((*(unsigned short*)0x4000304 & 0x8000) >> 15) == 1) {
        return 1;
    }
    int var0 = (int)GetGameResources();
    int var1 = *(int*)(var0 + Enum_020db3a8_14104);
    return *(unsigned char*)(var1 + 3) != 0;
}
