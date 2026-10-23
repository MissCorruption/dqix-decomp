#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_ov031_02243518 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator* unknown_28_;
    unsigned char unknown_2c_;
    char unknown_2d_[3];
    int unknown_30_;
    unsigned char unknown_34_, unknown_35_, unknown_36_, unknown_37_;
    int unknown_38_, unknown_3c_, unknown_40_;
    unsigned char unknown_44_;
    char unknown_45_[3];
    int unknown_48_;
    void* unknown_4c_;
    char unknown_50_[0x2c0];
    char unknown_310_[0x64];
    unsigned char unknown_374_;
    char unknown_375_[7];
    int unknown_37c_, unknown_380_, unknown_384_, unknown_388_, unknown_38c_;
    unsigned char unknown_390_, unknown_391_;
    char unknown_392_[2];
    int unknown_394_;
    unsigned char unknown_398_, unknown_399_, unknown_39a_, unknown_39b_;
    int unknown_39c_, unknown_3a0_;
    int unknown_3a4_[11];
    unsigned char unknown_3d0_;
    char unknown_3d1_[3];
    char unknown_3d4_[0x58];
    int unknown_42c_, unknown_430_, unknown_434_;
    unsigned char unknown_438_, unknown_439_;
    char unknown_43a_[2];
    char unknown_43c_[0x600];
};
extern SafeAllocator data_ov031_02291e3c;
extern "C" void VectorizedMemset(void*, int, unsigned int);

// USA: func_ov031_02243518
extern "C" ARM int func_ov031_02243518(Struct_ov031_02243518* arg0, int arg1) {
    GameState::GetInstance();
    arg0->unknown_2c_ = 0;
    arg0->unknown_34_ = 1;
    arg0->unknown_35_ = 0;
    arg0->unknown_37_ = 0;
    arg0->unknown_36_ = 0;
    arg0->unknown_374_ = arg1;
    unsigned char var0 = arg0->unknown_374_;
    if (var0 & 2) {
        arg0->unknown_374_ = 2;
        arg0->unknown_2c_ = 0;
    } else if (var0 & 0x20) {
        arg0->unknown_374_ = 0x20;
        arg0->unknown_2c_ = 0;
        arg0->unknown_34_ = 7;
    } else if (var0 & 1) {
        arg0->unknown_2c_ = 0;
    } else if (var0 & 4) {
        arg0->unknown_2c_ = 0;
    }
    arg0->unknown_44_ = 0;
    arg0->unknown_38_ = 0;
    arg0->unknown_3c_ = 0;
    arg0->unknown_40_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_4c_ = 0;
    VectorizedMemset(arg0->unknown_50_, 0, 0x2c0);
    data_ov031_02291e3c.ResetAllocatorPointer();
    arg0->unknown_0_.ResetAllocatorPointer();
    arg0->unknown_14_.ResetAllocatorPointer();
    arg0->unknown_28_ = 0;
    arg0->unknown_37c_ = 0;
    arg0->unknown_380_ = 0;
    arg0->unknown_384_ = 0;
    arg0->unknown_388_ = 0;
    arg0->unknown_38c_ = 0;
    arg0->unknown_390_ = 0;
    arg0->unknown_391_ = 0;
    arg0->unknown_394_ = 0;
    arg0->unknown_398_ = 0;
    arg0->unknown_399_ = 0;
    arg0->unknown_39a_ = 0;
    arg0->unknown_39b_ = 0;
    arg0->unknown_30_ = 0;
    arg0->unknown_39c_ = -1;
    arg0->unknown_3a0_ = -1;
    arg0->unknown_3a4_[0] = 0;
    arg0->unknown_3a4_[1] = 0;
    arg0->unknown_3a4_[2] = 0;
    arg0->unknown_3a4_[3] = 0;
    arg0->unknown_3a4_[4] = 0;
    arg0->unknown_3a4_[5] = 0;
    arg0->unknown_3a4_[6] = 0;
    arg0->unknown_3a4_[7] = 0;
    arg0->unknown_3a4_[8] = 0;
    arg0->unknown_3a4_[9] = 0;
    arg0->unknown_3a4_[10] = 0;
    arg0->unknown_3d0_ = 0;
    VectorizedMemset(arg0->unknown_3d4_, 0, 0x58);
    arg0->unknown_42c_ = -1;
    arg0->unknown_430_ = 0;
    arg0->unknown_434_ = 0;
    arg0->unknown_438_ = 0;
    arg0->unknown_439_ = 0;
    memset(arg0->unknown_43c_, 0, 0x600);
    return 1;
}
