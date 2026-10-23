#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0201d530 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0201099c_9;
struct Struct_0201099c_10;
extern "C" Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10*, int);

struct Struct_ov023_021f5848 {
    unsigned short unknown_0_0_ : 13;
    unsigned short unknown_1_5_ : 3;
};

struct Struct_ov023_021f5848_2 {
    char unknown_0_[0xf8];
    short unknown_f8_;
    char unknown_fa_[2];
    unsigned short unknown_fc_;
    char unknown_fe_[0xe];
    struct Struct_ov023_021f5848 unknown_10c_;
};

struct Struct_ov023_021fff08_6 {
    char unknown_0_[1];
    unsigned char unknown_1_;
    char unknown_2_[2];
    struct Struct_0201099c_10* unknown_4_;
    char unknown_8_[4];
    struct Struct_ov023_021f5848_2* unknown_c_;
};
extern struct Struct_ov023_021fff08_6 data_ov023_021fff08;

struct Struct_ov023_021f5848_3 { char unknown_0_[0x1a]; unsigned short unknown_1a_; };

// USA: func_ov023_021f5848
extern "C" ARM int func_ov023_021f5848(struct Struct_0201c1c8* arg0) {
    if (data_ov023_021fff08.unknown_1_ != 0) return 1;
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    struct Struct_ov023_021f5848_2* var1 = data_ov023_021fff08.unknown_c_;
    if (var0 == var1->unknown_f8_) {
        if (data_ov023_021fff08.unknown_4_ == 0) {
            data_ov023_021fff08.unknown_1_ = 1;
            var1->unknown_10c_.unknown_0_0_ |= 2;
            return 0;
        }
        struct Struct_ov023_021f5848_3* var2 = (struct Struct_ov023_021f5848_3*)func_020dedd0(data_ov023_021fff08.unknown_4_, (short)var0);
        if (var2 == 0) {
            data_ov023_021fff08.unknown_1_ = 1;
            data_ov023_021fff08.unknown_c_->unknown_10c_.unknown_0_0_ |= 2;
            return 0;
        }
        func_02010828(GameState::GetInstance());
        float var3 = ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToFloat();
        float var4 = ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x10)))->ToFloat();
        struct Random* var5 = GetBTRandom();
        unsigned short var6 = var2->unknown_1a_;
        float var7 = NextRandomFloatBetween(var5, var3, var4);
        int var8 = (int)((float)var6 * var7);
        if (var8 >= data_ov023_021fff08.unknown_c_->unknown_fc_ || (data_ov023_021fff08.unknown_c_->unknown_10c_.unknown_0_0_ & 4) != 0) {
            data_ov023_021fff08.unknown_c_->unknown_10c_.unknown_0_0_ |= 1;
        } else {
            data_ov023_021fff08.unknown_c_->unknown_10c_.unknown_0_0_ |= 2;
        }
        data_ov023_021fff08.unknown_1_ = 1;
    }
    return 1;
}
