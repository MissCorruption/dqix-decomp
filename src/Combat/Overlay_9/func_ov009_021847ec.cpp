#if defined(jpn)

#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov009_021847ec func_ov009_02185850
#endif
#include "std_library_functions.h"

struct Struct_ov009_0218aafc { char unknown_0_[5]; };
#if !defined(jpn)
extern struct Struct_ov009_0218aafc data_ov009_0218aafc[];
#endif
extern "C" int func_020424e4(int arg0, int arg1);

struct Struct_ov009_021847ec {
#if !defined(jpn)
    char unknown_0_[0x18];
#endif
    char unknown_18_[0xc];
    int unknown_24_;
    short unknown_28_;
#if defined(jpn)
    unsigned short unknown_12_;
    int unknown_14_[2];
    int unknown_1c_;
#else
    unsigned char unknown_2a_[15];
#endif
};

#if defined(jpn)
extern "C" int func_ov009_02185888(Struct_ov009_021847ec*);
#endif

// USA: func_ov009_021847ec
extern "C" ARM void func_ov009_021847ec(struct Struct_ov009_021847ec* arg0) {
    memset(arg0->unknown_18_, 0, 0xc);
    arg0->unknown_24_ = 0;
    arg0->unknown_28_ = 0;
#if defined(jpn)
    arg0->unknown_14_[0] = -1;
    arg0->unknown_14_[1] = -1;
    func_ov009_02185888(arg0);
#else
    unsigned char* var0 = arg0->unknown_2a_;
    int var1;
    for (var1 = 0; var1 < 15; var1++) {
        *var0++ = (unsigned char)func_020424e4((int)&data_ov009_0218aafc[var1], 1);
    }
#endif
}
