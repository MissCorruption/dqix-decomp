#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "std_library_functions.h"

struct Struct_ov017_021d2368 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_0_ : 2;
    unsigned short unknown_4_2_ : 14;
    unsigned char unknown_6_[14];
};

struct Struct_ov017_021d2368_2 {
    unsigned char unknown_0_[0x2e0];
};

struct Struct_ov017_021d2368_3 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
#if defined(jpn)
    unsigned char unknown_3_[0x218 - 3];
#else
    unsigned char unknown1_3_[0x288 - 3];
#endif
    Struct_ov017_021d2368_2* unknown_288_;
};

extern "C" ARM void func_ov017_021d2368(int arg0, unsigned char* arg1, int arg2, unsigned char* arg3) {
    Struct_ov017_021d2368* var0 = (Struct_ov017_021d2368*)arg1;
    GameResources* var1 = (GameResources*)arg3;
    Struct_ov017_021d2368_3* var2 = (Struct_ov017_021d2368_3*)var1->unknown_ptr_array_3afc[13];
    if (!var2->unknown_2_) return;
    Struct_ov017_021d2368_2* var3 = var2->unknown_288_;
    if (var3 == NULL) return;
    unsigned int var4 = var0->unknown_4_2_;
    int var5 = sizeof(var0->unknown_6_);
    if (var4 + sizeof(var0->unknown_6_) > sizeof(var3->unknown_0_)) {
        var5 = sizeof(var3->unknown_0_) - var4;
    }
    if (var5 < 0) return;
    memcpy(var3->unknown_0_ + var4, var0->unknown_6_, var5);
}
