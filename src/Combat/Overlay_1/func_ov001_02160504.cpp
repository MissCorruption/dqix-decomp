#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_ov001_021601f8(void* arg0, void* arg1);

struct Struct_ov001_02165880_42 {
    int unknown_0_;
    char unknown_4_[0xc - 4];
    int unknown_c_;
    int unknown_10_;
    char unknown_14_[0x2c - 0x10 - 4];
    int unknown_2c_;
    int unknown_30_;
};
extern Struct_ov001_02165880_42 data_ov001_02165880;

struct Struct_ov001_02164d14_2 { char unknown_0_[0x20]; int unknown_20_, unknown_24_, unknown_28_, unknown_2c_; };
extern Struct_ov001_02164d14_2 data_ov001_02164d14;

extern int data_ov001_02164d34[];

struct Struct_ov001_02160504 { char unknown_0_[0x44]; int unknown_44_; char unknown_48_[0x54 - 0x48]; Struct_ov001_02160504* unknown_54_; };
struct Struct_ov001_02160504_2 {
    
#if defined(jpn)
    char unknown_0_[0x430];
#else
    char unknown1_0_[0x410];
#endif

    int unknown_410_;
    char unknown_414_[0x41c - 0x414];
    Struct_ov001_02160504* unknown_41c_;
    char unknown_420_[0x834 - 0x420];
    unsigned char unknown_834_;
};
struct Struct_ov001_02160504_3 { char unknown_0_[0x94]; int unknown_94_; int unknown_98_; };

// USA: func_ov001_02160504
extern "C" ARM int func_ov001_02160504(void) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov001_02160504_2* var1 = (Struct_ov001_02160504_2*)func_02012fe4();
    Struct_ov001_02160504_3* var2 = (Struct_ov001_02160504_3*)LightingManager::GetInstance();
    if (var1->unknown_834_ != 0) return 1;
    int var3 = var0->GetTimeOfDay();
    var2->unknown_98_ = var3;
    if (!(data_ov001_02165880.unknown_c_ & 1)) {
        data_ov001_02164d14.unknown_20_ = data_ov001_02165880.unknown_0_;
        data_ov001_02164d14.unknown_24_ = data_ov001_02165880.unknown_10_;
        data_ov001_02164d14.unknown_28_ = data_ov001_02165880.unknown_30_;
        data_ov001_02164d14.unknown_2c_ = data_ov001_02165880.unknown_2c_;
        data_ov001_02165880.unknown_c_ |= 1;
    }
    var2->unknown_94_ = data_ov001_02164d34[var3];
    if (var1->unknown_410_ == 1) {
        Struct_ov001_02160504* var4 = var1->unknown_41c_;
        while (var4 != NULL) {
            if (var4->unknown_44_ != 0) {
                func_ov001_021601f8((void*)var4->unknown_44_, (char*)var4 + 4);
            }
            var4 = var4->unknown_54_;
        }
        var1->unknown_834_ = 1;
    }
    return 1;
}
