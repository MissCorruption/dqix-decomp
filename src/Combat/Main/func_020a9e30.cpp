#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "NitroSDK/Memory.h"

#if defined(jpn)
enum { Enum_020a9e30_28620 = 0x6d8c, Enum_020a9e30_23760 = 0x5a70 };
#else
enum { Enum_020a9e30_28620 = 0x6fcc, Enum_020a9e30_23760 = 0x5cd0 };
#endif

struct Struct_020a9e30 {
    unsigned char unknown_0_[0x200];
    unsigned int unknown_200_;
    unsigned char unknown_204_[10];
};

struct Struct_020a9e30_2 {
    unsigned char unknown_0_[Enum_020a9e30_23760];
    unsigned char unknown_5cd0_[10];
    unsigned char unknown_5cda_[Enum_020a9e30_28620 - Enum_020a9e30_23760 - 10];
    unsigned char unknown_6fcc_[0x200];
    unsigned int unknown_71cc_;
};

// USA: func_020a9e30
extern "C" ARM int func_020a9e30(void* arg0) {
    Struct_020a9e30* var0 = static_cast<Struct_020a9e30*>(arg0);
    GameState* var1 = GameState::GetInstance();
    Struct_020a9e30_2* var2 = reinterpret_cast<Struct_020a9e30_2*>(var1);
    VectorizedInvertedMemcpy(var0->unknown_0_, var2->unknown_6fcc_, sizeof(var0->unknown_0_));
    VectorizedInvertedMemcpy(var0->unknown_204_, var2->unknown_5cd0_, sizeof(var0->unknown_204_));
    var2->unknown_71cc_ = var0->unknown_200_;
    struct GrottoStruct* var3 = var1->GetGrottoStruct();
    var3->unknown_0[3] = (var0->unknown_200_ & 1) != 0;
    var2->unknown_71cc_ = 0;
    return 1;
}
