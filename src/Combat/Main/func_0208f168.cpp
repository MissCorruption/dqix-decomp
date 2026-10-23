#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

extern "C" void* func_02012fe4(void);
extern "C" void* func_0208e0a8(void);
extern "C" void* func_02057924(void);
extern "C" int rand(void);
extern "C" int _s32_div_f(int a, int b);
extern "C" int func_02018fbc(int arg0, void* arg1);
extern "C" int func_0208e824(void* arg0, char* arg1);

struct Struct_0208f168_2 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 4;
    unsigned int unknown_1_5_ : 4;
    unsigned int unknown_2_1_ : 8;
    unsigned int unknown_3_1_ : 4;
    unsigned int unknown_3_5_ : 2;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_0208f168_3 {
    unsigned int unknown_0_0_ : 21;
    unsigned int unknown_2_5_ : 8;
    unsigned int unknown_3_5_ : 3;
};

struct Struct_0208f168_4 {
    unsigned int unknown_0_;
    struct Struct_0208f168_3 unknown_4_;
    struct Struct_0208f168_2* unknown_8_;
    Vector3i unknown_c_[8];
    struct Struct_0208f168_4* unknown_6c_;
};

struct Struct_0208f168_5 {
    char unknown_0_[4];
    struct Struct_0208f168_4* unknown_4_;
};

struct Struct_0208f168_6 {
    int unknown_0_;
    Vector3i unknown_4_;
    int unknown_10_;
    struct Struct_0208f168_6* unknown_14_;
};

struct Struct_0208f168 {
    char unknown_0_[8];
    void* unknown_8_;
    struct Struct_0208f168_6* unknown_c_;
};

// USA: func_0208f168
extern "C" ARM void func_0208f168(struct Struct_0208f168* arg0, void* arg1) {
    if (arg1 == 0) {
        return;
    }

    void* var0 = func_02012fe4();
    char* var1 = *(char**)((char*)var0 + 8);
    struct Struct_0208f168_5* var2 = (struct Struct_0208f168_5*)func_0208e0a8();

    if (var1 == 0) {
        return;
    }
    if (func_0208e824(var2, var1 + 5) == 0) {
        return;
    }

    if (arg0->unknown_8_ != 0) {
        ((Object3D*)arg0->unknown_8_)->MaybeSetBCFGAnimation(0, 0);
        void* var3 = ((Object3D*)arg0->unknown_8_)->GetCurrentAnimationConfig();
        if (var3 == 0) {
            return;
        }
        BCFG::AnimationRecord* var4 = ((BCFG*)var3)->GetAnimationRecord(0);
        if (var4 == 0) {
            return;
        }

        GameState* var5 = GameState::GetInstance();
#if defined(jpn)
        struct Struct_0208f168_2* var6 = (struct Struct_0208f168_2*)((char*)var5 + 0x27c + 0x5800);
#else
        struct Struct_0208f168_2* var6 = (struct Struct_0208f168_2*)((char*)var5 + 0xdc + 0x5c00);
#endif
        struct Struct_0208f168_4* var7 = var2->unknown_4_;
        func_02057924();
        var5->GetProtagonist();

        unsigned int var8 = 0;
        while (var7 != 0) {
            int var9 = (var7->unknown_0_ << 9) >> 25;
            struct Struct_0208f168_2* var10 = &var6[var9];
            if (var10->unknown_3_7_) {
                var7->unknown_8_ = var10;
                var7->unknown_4_.unknown_2_5_ = ((*(unsigned int*)var10 << 7) >> 24);
                int var11 = var10->unknown_1_1_;
                if (var9 >= 0x62) {
                    var11 = 8;
                }
                int var12 = 0;
                for (; var12 < var11; var12++) {
                    Vector3i* var13 = var7->unknown_c_;
                    if (((*(unsigned int*)var10 << 7) >> 24) & (1 << var12)) {
                        struct Struct_0208f168_6* var14 = (struct Struct_0208f168_6*)((SafeAllocator*)arg1)->Allocate(0x18);
                        if (var14 == 0) {
                            return;
                        }
                        var14->unknown_0_ = var12 + (var8 << 3);
                        int var15 = var4->startTime;
                        var14->unknown_10_ = var15 + (rand() % (var4->endTime - var15));
                        var7->unknown_c_[var12].y = func_02018fbc((int)var0, (void*)&var13[var12]);
                        *(Vector3i*)((int*)&var14->unknown_4_) = *(Vector3i const*)((int*)&var13[var12]);
                        struct Struct_0208f168_6* var16 = arg0->unknown_c_;
                        if (var16 == 0) {
                            arg0->unknown_c_ = var14;
                            var14->unknown_14_ = 0;
                        } else {
                            while (var16->unknown_14_ != 0) {
                                var16 = var16->unknown_14_;
                            }
                            var16->unknown_14_ = var14;
                            var14->unknown_14_ = 0;
                        }
                    }
                }
            }
            var8 = (var8 + 1) & 0xff;
            var7 = var7->unknown_6c_;
        }
    } else {
        return;
    }
}
