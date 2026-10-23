#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020181fc_2092 = 0x84c, Enum_020181fc_952 = 0x3d8, Enum_020181fc_1052 = 0x43c, Enum_020181fc_104 = 0x88, Enum_020181fc_2084 = 0x844 };
#else
enum { Enum_020181fc_2092 = 0x82c, Enum_020181fc_952 = 0x3b8, Enum_020181fc_1052 = 0x41c, Enum_020181fc_104 = 0x68, Enum_020181fc_2084 = 0x824 };
#endif
#include "Memory/SafeAllocator.h"

struct Struct_020181fc {
    char unknown_0_[0x24];
    void* unknown_24_;
    char unknown_28_[0x70 - 0x24 - 4];
};

struct Struct_020181fc_2 {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[0x44 - 0x14 - 4];
    Struct_020181fc* unknown_44_;
    char unknown_48_[0x54 - 0x44 - 4];
    Struct_020181fc_2* unknown_54_;
};

// USA: func_020181fc
extern "C" ARM void func_020181fc(void* arg0) {
    char* var0 = (char*)arg0;
    *(int*)(var0 + Enum_020181fc_2092) = 0;
    if (*(unsigned char*)(var0 + 0x2000 + Enum_020181fc_952) != 0) {
        *(int*)(var0 + Enum_020181fc_2092) = 0x101;
        return;
    }

    Struct_020181fc_2* var1 = *(Struct_020181fc_2**)(var0 + Enum_020181fc_1052);
    while (var1 != NULL) {
        int var2 = var1->unknown_14_;
        for (int var3 = 0; var3 < var2; var3++) {
            Struct_020181fc* var4 = &var1->unknown_44_[var3];
            void* var5 = var4->unknown_24_;
            if (var5 != NULL && *(short*)var5 == 1) {
                (*(int*)(var0 + Enum_020181fc_2092))++;
            }
        }
        var1 = var1->unknown_54_;
    }

    SafeAllocator* var6 = *(SafeAllocator**)(var0 + Enum_020181fc_104);
    void* var7 = var6->Allocate(*(unsigned int*)(var0 + Enum_020181fc_2092) * 4);
    *(void**)(var0 + Enum_020181fc_2084) = var7;

    int var8 = 0;
    var1 = *(Struct_020181fc_2**)(var0 + Enum_020181fc_1052);
    while (var1 != NULL) {
        int var9 = var1->unknown_14_;
        for (int var10 = 0; var10 < var9; var10++) {
            Struct_020181fc* var11 = &var1->unknown_44_[var10];
            void* var12 = var11->unknown_24_;
            if (var12 != NULL && *(short*)var12 == 1) {
                ((void**)*(void**)(var0 + Enum_020181fc_2084))[var8] = var11;
                var8++;
            }
        }
        var1 = var1->unknown_54_;
    }
}
