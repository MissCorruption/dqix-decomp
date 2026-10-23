#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/ElementLookup.h"
#include "World/Zone3D.h"
#include "Resource/GameResources.h"

struct Struct_ov025_021e58f0 {
#if defined(jpn)
    char unknown_0_[0xe44];
#else
    char unknown1_0_[0xec8];
#endif
    Zone3D unknown_ec8_;
    short unknown_36ec_;
};

struct Struct_ov025_021e58f0_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

struct Struct_ov025_021e58f0_3 {
    char unknown_0_[8];
    const char* unknown_8_;
};

struct Struct_ov025_021ef988_15 {
    char unknown_0_[0x20];
    int unknown_20_;
};

struct Struct_ov025_021ef9a8;

extern "C" Struct_ov025_021e58f0* func_ov000_02160130(void);
extern "C" Struct_ov025_021e58f0_2* func_ov017_021b8478(void* arg0);
struct Struct_02018f6c_2;
extern "C" void func_02018f6c(Struct_02018f6c_2*, short);
extern "C" void func_ov025_021e3158(Struct_ov025_021ef9a8* arg0);

extern Struct_ov025_021ef988_15 data_ov025_021ef988;
extern Struct_ov025_021ef9a8 data_ov025_021ef9a8;

// USA: func_ov025_021e58f0
extern "C" ARM int func_ov025_021e58f0(Struct_ov025_021e58f0_3* arg0) {
    Struct_ov025_021e58f0* var0 = func_ov000_02160130();
    Zone3D* var1 = &var0->unknown_ec8_;
    Struct_ov025_021e58f0_2* var2 = func_ov017_021b8478(GetGameResources()->unknown_ptr_3718);
    if (data_ov025_021ef988.unknown_20_ == 0) {
        unsigned short var3 = var2->unknown_2_;
        if (arg0->unknown_8_ != 0) {
            Struct_0201cb60_2* var4 = (Struct_0201cb60_2*)func_02011584(GameState::GetInstance());
            Struct_0201cb60* var5 = func_0209998c(var4, arg0->unknown_8_);
            if (var5 == 0) {
                return 1;
            }
            var3 = var5->unknown_0_;
        }
        var1->SwitchZone(var3, 0);
        data_ov025_021ef988.unknown_20_ = 1;
    } else if (data_ov025_021ef988.unknown_20_ == 1 && var1->unknown_424_ == 0) {
        func_02018f6c((Struct_02018f6c_2*)var1, var0->unknown_36ec_);
        func_ov025_021e3158(&data_ov025_021ef9a8);
        return 1;
    }
    return 0;
}
