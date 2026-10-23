#include <globaldefs.h>
#include "Combat/LootPointEvent.h"
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "GameState/GameState.h"

extern "C" void* func_02012fe4(void);
extern "C" int _s32_div_f(int a, int b);

struct Struct_0208f048 {
    char unknown_0_[0x188];
    Struct_0208ec78 unknown_188_;
    Struct_0208ec78 unknown_18c_;
};

// USA: func_0208f048
extern "C" ARM void func_0208f048(unsigned char* arg0) {
    void* var0;
    char* var1;
    int var2;
    int var3;
    int var4;
    GameState* var5;
    struct Struct_0208f048* var6;

    if (*arg0 != 0x62) {
        return;
    }

    var0 = func_02012fe4();
    var1 = (char*)((int)var0 + (IS_JPN ? 0x1860 : 0x1840));
    var2 = _s32_div_f(*(int*)(var1 + 0xb34), 100) + 4;
    if (var2 > 14) {
        var2 = 14;
    }
    var3 = var2 - 7;

    var5 = GameState::GetInstance();
    var6 = (struct Struct_0208f048*)((char*)var5 + (IS_JPN ? 0x5a7c : 0x5cdc));

    var4 = 0;
    while (var3 > 0) {
        unsigned int var7 = var6->unknown_18c_.unknown1_0_;
        unsigned int var8 = (var7 << 7) >> 24;
        var6->unknown_18c_.unknown1_0_ = (var7 & 0xfe01ffff) | (((var8 | (1u << var4)) << 24) >> 7);
        var4++;
        var3--;
    }
    func_ov017_021d38f8(0, 0, (var6->unknown_18c_.unknown1_0_ << 7) >> 24, 0x63, &var6->unknown_18c_);

    if (var4 > 0) {
        var4 = 0;
        var2 = 7;
    }
    while (var2 > 0) {
        unsigned int var9 = var6->unknown_188_.unknown1_0_;
        unsigned int var10 = (var9 << 7) >> 24;
        var6->unknown_188_.unknown1_0_ = (var9 & 0xfe01ffff) | (((var10 | (1u << var4)) << 24) >> 7);
        var2--;
        var4++;
    }
    func_ov017_021d38f8(0, 0, (var6->unknown_188_.unknown1_0_ << 7) >> 24, 0x62, &var6->unknown_188_);
}
