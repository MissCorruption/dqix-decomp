#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov017_021d4ce4_3 {
    int unknown_0_;
    int unknown_4_;
};
struct Struct_ov017_021d4ce4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};
struct Struct_ov017_021d4ce4_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

extern "C" void func_ov017_021d4e38(void* arg0, int arg1);

// USA: func_ov017_021d4ce4
extern "C" ARM int func_ov017_021d4ce4(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (*(struct Struct_ov017_021d4ce4**)(var0 + 0x44) == NULL) {
        return -1;
    }

    *(int*)(var0 + 0x14) = *(int*)(var0 + 0x10);
    *(int*)(var0 + 0x28) = *(int*)(var0 + 0x24);
    *(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34) = NULL;

    if (arg1 < 0) {
        struct Struct_ov017_021d4ce4* var1 = *(struct Struct_ov017_021d4ce4**)(var0 + 0x44);
        *(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34) = (struct Struct_ov017_021d4ce4_2*)((char*)var1 + var1->unknown_4_);
    } else {
        struct Struct_ov017_021d4ce4_3* var2;
        int var3;
        struct Struct_ov017_021d4ce4* var4 = *(struct Struct_ov017_021d4ce4**)(var0 + 0x44);
        var2 = (struct Struct_ov017_021d4ce4_3*)((char*)var4 + var4->unknown_c_);
        for (var3 = 0; var3 < var4->unknown_10_; var3++, var2++) {
            if (var2->unknown_0_ == arg1) {
                *(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34) = (struct Struct_ov017_021d4ce4_2*)((char*)var4 + var2->unknown_4_);
                break;
            }
        }
    }

    if (*(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34) == NULL) {
        return -1;
    }

    int var5 = *(int*)(var0 + 0x14) - (*(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34))->unknown_c_ * 8;
    *(int*)(var0 + 0x30) = var5;
    *(int*)(var0 + 0x14) = var5 + (*(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34))->unknown_8_ * 8;

    int var6 = *(int*)(var0 + 0x30) + (*(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34))->unknown_c_ * 8;
    int var7 = ((*(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34))->unknown_8_ - (*(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34))->unknown_c_) * 8;
    memset((void*)var6, 0, var7);

    int var8 = *(int*)(var0 + 0x48) + (*(struct Struct_ov017_021d4ce4_2**)(var0 + 0x34))->unknown_0_;
    *(int*)(var0 + 0x3c) = 0;
    *(int*)(var0 + 0x40) = 0;
    *(int*)(var0 + 0x50) = 0;

    func_ov017_021d4e38(var0, var8);

    return (*(int*)(var0 + 0x3c) == 0) ? 1 : 0;
}
