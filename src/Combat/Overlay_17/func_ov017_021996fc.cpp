#include <globaldefs.h>
#include "Combat/MapDisplay.h"

struct Struct_0205cfd4;
extern "C" void func_0205cfd4(struct Struct_0205cfd4* arg0);

extern "C" void func_0204af64(struct Struct_02020cb8* arg0);

extern "C" void func_0204c684(void*);

// USA: func_ov017_021996fc
extern "C" ARM void func_ov017_021996fc(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021996fc_3248=0xa90, Enum_ov017_021996fc_180=0x294, Enum_ov017_021996fc_244=0x2d4, Enum_ov017_021996fc_15360=0x3800, Enum_ov017_021996fc_16384=0x3000, Enum_ov017_021996fc_116=0xe54, Enum_ov017_021996fc_120=0xe58, Enum_ov017_021996fc_124=0xe5c, Enum_ov017_021996fc_128=0xe60, Enum_ov017_021996fc_132=0xe64};
#else
 enum {Enum_ov017_021996fc_3248=0xcb0, Enum_ov017_021996fc_180=0xb4, Enum_ov017_021996fc_244=0xf4, Enum_ov017_021996fc_15360=0x3c00, Enum_ov017_021996fc_16384=0x4000, Enum_ov017_021996fc_116=0x74, Enum_ov017_021996fc_120=0x78, Enum_ov017_021996fc_124=0x7c, Enum_ov017_021996fc_128=0x80, Enum_ov017_021996fc_132=0x84};
#endif
    func_0205cfd4(*(struct Struct_0205cfd4**)(arg0 + 0x3000 + Enum_ov017_021996fc_3248));

    for (int var0 = 0; var0 < 2; var0++) {
        func_0204af64((struct Struct_02020cb8*)(arg0 + Enum_ov017_021996fc_180 + Enum_ov017_021996fc_15360 + var0 * 0x20));
    }

    for (int var1 = 0; var1 < 4; var1++) {
        func_0204c684(arg0 + Enum_ov017_021996fc_244 + Enum_ov017_021996fc_15360 + var1 * 0xe0);
    }

    *(int*)(arg0 + Enum_ov017_021996fc_16384 + Enum_ov017_021996fc_116) = 0;
    *(int*)(arg0 + Enum_ov017_021996fc_16384 + Enum_ov017_021996fc_120) = 0;
    *(int*)(arg0 + Enum_ov017_021996fc_16384 + Enum_ov017_021996fc_124) = -1;
    *(int*)(arg0 + Enum_ov017_021996fc_16384 + Enum_ov017_021996fc_128) = 0;
    *(int*)(arg0 + Enum_ov017_021996fc_16384 + Enum_ov017_021996fc_132) = 0;
}
