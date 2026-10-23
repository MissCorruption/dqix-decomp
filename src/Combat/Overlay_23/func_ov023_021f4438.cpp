#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void* func_02010828(GameState*);

struct Struct_ov023_021f4438 {
#if defined(jpn)
    char unknown_0_[0x5af0];
#else
    char unknown1_0_[0x5900];
#endif
    unsigned char unknown_5900_;
    signed char unknown_5901_;
#if defined(jpn)
    char unknown_5af2_[0x7014 - 0x5af2];
#else
    char unknown_5902_[0x6e24 - 0x5902];
#endif
    int unknown_6e24_;
};

struct Struct_ov023_021f4438_2 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_;
    char unknown_f79_[0xf7c - 0xf79];
    unsigned char unknown_f7c_;
};

// USA: func_ov023_021f4438
extern "C" ARM int func_ov023_021f4438(Struct_ov023_021f4438* arg0) {
    int var0 = 0;
    if (arg0->unknown_5900_ != 0 || arg0->unknown_6e24_ != 0) {
        GameState* var1 = GameState::GetInstance();
        void* var2 = func_0202ae18();
        var0 = 1;
        if (func_0202b7d8((int*)var2)) {
            Struct_ov023_021f4438_2* var3 = (Struct_ov023_021f4438_2*)func_02010828(var1);
            int var4 = 0;
            int var5;
            for (var5 = 0; var5 < var3->unknown_f7c_; var5++) {
                Struct_ov023_021f4438_2* var6 = (Struct_ov023_021f4438_2*)((char*)var3 + var5);
                if (arg0->unknown_5901_ & (1 << var6->unknown_f78_)) {
                    var4 = 1;
                    break;
                }
            }
            if (!var4) var0 = 0;
        }
    }
    return var0;
}
