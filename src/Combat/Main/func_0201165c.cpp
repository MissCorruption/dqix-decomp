#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201165c_1104 = 0x1d0, Enum_0201165c_1008 = 0x190, Enum_0201165c_1012 = 0x194, Enum_0201165c_1016 = 0x198, Enum_0201165c_1020 = 0x19c, Enum_0201165c_1001 = 0x189, Enum_0201165c_1002 = 0x18a, Enum_0201165c_996 = 0x184, Enum_0201165c_997 = 0x185 };
#else
enum { Enum_0201165c_1104 = 0x450, Enum_0201165c_1008 = 0x3f0, Enum_0201165c_1012 = 0x3f4, Enum_0201165c_1016 = 0x3f8, Enum_0201165c_1020 = 0x3fc, Enum_0201165c_1001 = 0x3e9, Enum_0201165c_1002 = 0x3ea, Enum_0201165c_996 = 0x3e4, Enum_0201165c_997 = 0x3e5 };
#endif
#include "NitroSDK/Memory.h"

struct Struct_0201165c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    unsigned char unknown_10_;
};

// USA: func_0201165c
extern "C" ARM void func_0201165c(char* arg0, const void* arg1, int arg2, struct Struct_0201165c arg3) {
    VectorizedInvertedMemcpy(arg1, arg0 + Enum_0201165c_1104 + 0x6000, 0x1c);
    *(int*)(arg0 + 0x6000 + Enum_0201165c_1008) = arg2;
    *(int*)(arg0 + 0x6000 + Enum_0201165c_1012) = arg3.unknown_0_;
    *(int*)(arg0 + 0x6000 + Enum_0201165c_1016) = arg3.unknown_4_;
    *(int*)(arg0 + 0x6000 + Enum_0201165c_1020) = arg3.unknown_8_;
    *(unsigned char*)(arg0 + 0x6000 + Enum_0201165c_1001) = arg3.unknown_c_;
    *(unsigned char*)(arg0 + 0x6000 + Enum_0201165c_1002) = arg3.unknown_10_;
    *(unsigned char*)(arg0 + 0x6000 + Enum_0201165c_996) = 1;
    *(unsigned char*)(arg0 + 0x6000 + Enum_0201165c_997) = 1;
}
