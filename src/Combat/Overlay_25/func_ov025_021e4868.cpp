#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_0204a438;
extern "C" void* func_0204a438(struct Struct_0204a438* arg0);
extern "C" int func_0202e09c(int arg0);
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
struct Struct_02059cfc_4;
struct Struct_ov008_021870e4;
extern int data_ov025_021ef988;

struct Struct_ov025_021eef58 { const char* unknown_0_[8]; };
extern struct Struct_ov025_021eef58 data_ov025_021eef58;

struct Struct_ov025_021e4868 { char unknown_0_[8]; unsigned char unknown_8_; char unknown_9_; short unknown_a_; };

struct Struct_ov025_021e4868_2 {
    struct Struct_ov025_021eef58 unknown_0_;
    int unknown_20_;
    char unknown_24_[0x1c];
};

#if defined(jpn)
enum { Enum_ov025_021e4868_28 = 0xc };
#else
enum { Enum_ov025_021e4868_28 = 0x1c };
#endif

// USA: func_ov025_021e4868
extern "C" ARM int func_ov025_021e4868(struct Struct_ov025_021e4868* arg0, int arg1, int arg2, int arg3) {
    struct Struct_ov025_021e4868_2 var0;
    void* var1;
    unsigned int var2;

    if (*(int*)((char*)&data_ov025_021ef988 + Enum_ov025_021e4868_28) & 4) {
        return 0;
    }
    GameState* var3 = GameState::GetInstance();
    if (arg0->unknown_8_ == 0x19) {
        void* var4 = func_020100bc(var3);
        if (func_0202e09c((int)var4) & 0x10) {
            var1 = func_0204a438((struct Struct_0204a438*)var4);
        } else {
            return 1;
        }
    } else {
        if (func_ov000_021820bc((void*)arg3, arg1, arg0->unknown_8_, (int)&var0.unknown_20_) != 1) {
            return 1;
        }
        var1 = var3->GetGameObjectByIndex(var0.unknown_20_);
    }
    if (!var1) {
        return 1;
    }
    if (arg0->unknown_a_ < 0x1000) {
        return *(int*)((char*)var1 + 0x24) >= arg0->unknown_a_;
    }
    if (((Object3D*)((struct Struct_02059cfc_4*)var1))->HasAnimationStopped() || ((Object3D*)((struct Struct_ov008_021870e4*)var1))->HasAnimationReachedEnd()) {
        return 1;
    }
    if (((Object3D*)var1)->GetFlag(0x40000)) {
        return 1;
    }
    if (*(unsigned char*)((char*)var1 + 0x19) & 1) {
        goto ReturnZero;
    }
    char* var5 = *(char**)((char*)var1 + 0x14);
    if (!var5) {
        goto ReturnZero;
    }
    var0.unknown_0_ = data_ov025_021eef58;
    {
        const char** var6 = var0.unknown_0_.unknown_0_;
        for (var2 = 0; var2 < 8; var2++, var6++) {
            if (strcmp(var5, *var6) == 0) {
                return 1;
            }
        }
    }
ReturnZero:
    return 0;
}
