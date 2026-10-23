#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_021584e8;
struct Struct_ov000_0215440c;
struct Struct_ov000_021600f8;
struct Struct_ov024_021e6104_5 { int unknown_0_; int unknown_4_; };

extern "C" int func_020850fc(unsigned char* arg0);
extern "C" struct Struct_ov000_021600f8* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" void* func_ov000_0215fff4(void* arg0, int arg1, int arg2);
extern "C" short func_ov000_0215a16c(void* arg0, int arg1, int arg2, short* arg3);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, struct Struct_ov024_021e6104_5* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(
    int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2, short arg3, short arg4, short arg5,
    struct Struct_ov024_021e6104_5 arg6, unsigned char arg7);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);

struct Struct_ov000_0215440c { char unknown_0_[9]; unsigned char unknown_9_; };
struct Struct_ov000_021600f8 { char unknown_0_[0x18]; unsigned char unknown_18_; };
struct Struct_ov024_021e6104 { char unknown_0_[0xc]; short unknown_c_; };
struct Struct_ov024_021e6104_2 {
#if defined(jpn)
 char unknown_0_[0x144];
#else
 char unknown1_0_[0x150];
#endif
 unsigned char* unknown_150_; };
struct Struct_ov024_021e6104_3 { char unknown_0_[0x10]; int unknown_10_; };
struct Struct_ov024_021e6104_4 {
    char unknown_0_[4];
    struct Struct_ov000_0215440c* unknown_4_;
    void* unknown_8_;
    char unknown_c_[4];
    void* unknown_10_;
};

static inline short inline_ov000_021584e8_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

static inline unsigned short inline_ov000_021584e8(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }

static inline unsigned short inline_ov024_021e6104(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.maxHP; }

static inline int inline_ov024_021ddf5c(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021e6104
extern "C" ARM int func_ov024_021e6104(struct Struct_ov024_021e6104_4* arg0, int arg1, struct Struct_ov024_021e6104_3* arg2) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (!var0) return 0;
    if ((arg2->unknown_10_ & 0x400000) && inline_ov024_021ddf5c(arg1) && func_020850fc(((struct Struct_ov024_021e6104_2*)var0)->unknown_150_)) {
        int var1 = 0;
        for (int var2 = 0; var2 < arg0->unknown_4_->unknown_9_; var2++) {
            struct Struct_ov000_021600f8* var3 = func_ov000_021600f8(arg0->unknown_4_, var2);
            if (!var3) continue;
            for (int var4 = 0; var4 < var3->unknown_18_; var4++) {
                struct Struct_ov024_021e6104* var5 = (struct Struct_ov024_021e6104*)func_ov000_0215fff4(var3, var4, 0);
                if (var5) var1 += var5->unknown_c_;
            }
        }
        int var6 = var1 >> 2;
        if (var6 > 0 && inline_ov000_021584e8(var0) < inline_ov024_021e6104(var0)) {
            short var7 = 0;
            short var8 = func_ov000_0215a16c(arg0->unknown_10_, arg1, var6, &var7);
            struct Struct_ov000_021584e8* var9 = func_ov000_0215e958(arg0->unknown_10_);
            if (!var9) return 0;
            func_ov000_0215a88c(arg0->unknown_10_, var9, 0x215);
            struct Struct_ov024_021e6104_5 var10;
            var10.unknown_0_ = 0;
            var10.unknown_4_ = 0;
            func_ov000_02159eac(arg0->unknown_10_, &var10, 0x25);
            func_ov000_0215ccbc((int)arg0->unknown_10_, var9, var0, -var7, var8,
                inline_ov000_021584e8_2(var0), var10, 0);
            func_ov000_0215fe84(arg0->unknown_8_, var9, 3);
            ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
        }
    }
    return 0;
}
