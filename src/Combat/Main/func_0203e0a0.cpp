#include <globaldefs.h>

#include "Combat/EntryGetterTypes.h"
#include "NitroSDK/Matrix.h"

extern "C" void *__clear(void *arg0, int arg1);

struct Struct_0203e0a0_2 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    unsigned short unknown_8_0_ : 9;
    unsigned short unknown_9_1_ : 1;
    unsigned short unknown_9_2_ : 5;
    unsigned short unknown_9_7_ : 1;
};

struct Struct_0203e0a0_3 {
    unsigned char unknown_0_[0xc];
    Struct_0203dce4 *unknown_c_[32];
    unsigned int unknown_8c_;
    unsigned char unknown_90_[0xe];
    Struct_0203e0a0_2 unknown_9e_[32];
    unsigned short unknown_1de_;
    unsigned short unknown_1e0_;
    unsigned short unknown_1e2_;
    unsigned int unknown_1e4_;
};

struct Struct_0203e0a0_4 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_;
    Struct_0203e0a0_4 *unknown_10_;
};

struct Struct_0203e0a0_5 {
    unsigned char unknown_0_[0xa];
    unsigned char unknown_a_0_ : 3;
    unsigned char unknown_a_3_ : 3;
    unsigned char unknown_a_6_ : 2;
    unsigned char unknown_b_[0x29];
    Struct_0203e0a0_4 *unknown_34_;
};

// USA: func_0203e0a0
extern "C" ARM void func_0203e0a0(void *arg0, unsigned short arg1) {
    Struct_0203e0a0_3 *var0 = static_cast<Struct_0203e0a0_3 *>(arg0);
    var0->unknown_1de_                   = arg1;
    var0->unknown_1e0_          = 0;
    Struct_0203dce4 **var1       = var0->unknown_c_;
    Struct_0203e0a0_2 *var2    = var0->unknown_9e_;
    unsigned int var3         = 0;
    for (; var3 < var0->unknown_8c_; ++var1, ++var2, ++var3) {
        Struct_0203dce4 *var4 = *var1;
        if (var4 != NULL) {
            Vector3i var5;
            __clear(&var5, sizeof(var5));
            short var6 = 0;
            if (((unsigned char*)var4->unknown_14_) != NULL) {
                var5 = *(Vector3i *) (((unsigned char*)var4->unknown_14_) + 4);
                var6    = (short) func_0203cdd0(((Struct_0203cdd0*)var4->unknown_14_));
            } else if (((unsigned char*)var4->unknown_18_) != NULL) {
                var5 = *(Vector3i *) (((unsigned char*)var4->unknown_18_) + 0x44);
                var6    = (short) *(int *) (((unsigned char*)var4->unknown_18_) + 0x54);
            } else if (((unsigned char*)var4->unknown_1c_) != NULL) {
                var5 = *(Vector3i *) (((unsigned char*)var4->unknown_1c_) + 0x44);
                var6    = (short) *(int *) (((unsigned char*)var4->unknown_1c_) + 0x54);
            }
            int var7               = var5.x;
            int var8               = var5.z;
            int var9               = var5.y;
            var2->unknown_0_         = (short) (var7 >> 4);
            var2->unknown_2_         = (short) (var9 >> 4);
            var2->unknown_4_         = (short) (var8 >> 4);
            var2->unknown_6_     = var6;
            unsigned short *var10 = (unsigned short *) func_02040528(&var4->unknown_0_);
            if (var10 != NULL) {
                var2->unknown_8_0_ = *var10;
            }
            var2->unknown_9_1_     = (var4->unknown_0_ & 0x8000) != 0;
            var2->unknown_9_2_    = 0;
            Struct_0203e0a0_5 *var11 = (Struct_0203e0a0_5 *) func_02040538((Struct_0203e0a0 *) var4);
            if (var11 != NULL) {
                Struct_0203e0a0_4 *var12 = var11->unknown_34_;
                while (var12 != NULL) {
                    if (var12->unknown_c_ != 0) {
                        break;
                    }
                    ++var2->unknown_9_2_;
                    var12 = var12->unknown_10_;
                    if (var12 == var11->unknown_34_) {
                        break;
                    }
                }
            }
            var2->unknown_9_7_ = var11->unknown_a_3_ == 3;
            if (var4->unknown_0_ & 0x40000) {
                var0->unknown_1e4_ |= 1U << var3;
            }
            ++var0->unknown_1e0_;
        }
    }
}
