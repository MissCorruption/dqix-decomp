#include "Resource/ActionDataTables.h"
#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov002_0215b720_3000 = 0xa80, Enum_ov002_0215b720_6 = 7, Enum_ov002_0215b720_17 = 0x12, Enum_ov002_0215b720_7 = 8 };
#else
enum { Enum_ov002_0215b720_3000 = 0xbb8, Enum_ov002_0215b720_6 = 6, Enum_ov002_0215b720_17 = 0x11, Enum_ov002_0215b720_7 = 7 };
#endif

extern "C" void* func_02079e2c(char* arg0, int arg1);
extern "C" void* func_020e2ff8(void);
extern "C" void func_020e3368(unsigned char* arg0, unsigned char arg1);

struct Struct_ov002_0215b720 {
    unsigned int unknown_0_0_ : 5;
    unsigned int unknown_0_5_ : 7;
    unsigned int unknown_1_4_ : 20;
};

// USA: func_ov002_0215b720
extern "C" ARM int func_ov002_0215b720(unsigned char* arg0, int arg1) {
    int var0 = 0;

    if (*(int*)(arg0 + 0x1000 + Enum_ov002_0215b720_3000) == Enum_ov002_0215b720_6 || *(int*)(arg0 + 0x1000 + Enum_ov002_0215b720_3000) == Enum_ov002_0215b720_17) {
        if (arg1 == 0x198 || arg1 == 0x22 || arg1 == 0x310) {
            var0 = 1;
        }
    } else {
        Struct_02108e10* var1 = func_020797dc();
        void* var2 = func_02079e2c((char*)var1, arg1);
        if (var2 != 0) {
            struct Struct_ov002_0215b720* var3 = (struct Struct_ov002_0215b720*)((char*)var2 + 0x18);
            if (var3->unknown_0_5_ == 2 || var3->unknown_0_5_ == 7 || var3->unknown_0_5_ == 0x4f || var3->unknown_0_5_ == 0x50 || var3->unknown_0_5_ == 0x12 || var3->unknown_0_5_ == 0x1a) {
                var0 = 1;
            }
            if (var3->unknown_0_0_ == 5 && *(int*)(arg0 + 0x1000 + Enum_ov002_0215b720_3000) == Enum_ov002_0215b720_7) {
                var0 = 1;
            }
        }
    }

    if (var0 != 0) {
        void* var4 = func_020e2ff8();
        func_020e3368((unsigned char*)var4, 1);
    }

    return var0;
}
