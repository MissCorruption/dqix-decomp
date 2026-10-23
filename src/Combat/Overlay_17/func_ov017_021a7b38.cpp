#if defined(jpn)
enum { Enum_ov017_021a7b38_1788 = 0x4ec, Enum_ov017_021a7b38_1816 = 0x508 };
#else
enum { Enum_ov017_021a7b38_1788 = 0x6fc, Enum_ov017_021a7b38_1816 = 0x718 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" unsigned short* func_02012fe4(void* arg0);
struct Struct_02038598_5;
extern "C" int func_02046b60(struct Struct_02038598_5* arg0, int arg1);
struct Struct_02046b38;
struct Struct_02046b38_2;
extern "C" int func_02046b38(struct Struct_02046b38* arg0, struct Struct_02046b38_2* arg1);
extern "C" int _s32_div_f(int a, int b);
extern "C" void func_ov017_021b6f18(void* arg0);
extern "C" void func_ov017_021b7104(void* arg0, void* arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_021a3544_2 {
    char unknown_0_[0x1];
    unsigned char unknown_1_;
    char unknown_2_[0x8 - 0x2];
    int unknown_8_;
    char unknown_c_[0x1a - 0xc];
    unsigned char unknown_1a_;
    char unknown_1b_[0x20 - 0x1b];
    int unknown_20_;
};

// USA: func_ov017_021a7b38
extern "C" ARM void func_ov017_021a7b38(struct Struct_ov017_021a3544_2* arg0, void* arg1) {
    GameState::GetInstance();
    char* var0 = (char*)(long)((int)GetGameResources()) + 0x3000;
    struct Struct_02038598_5* var1 = *(struct Struct_02038598_5**)(var0 + Enum_ov017_021a7b38_1788);
    struct Struct_02046b38_2* var2 = *(struct Struct_02046b38_2**)(var0 + Enum_ov017_021a7b38_1816);
    unsigned short var3 = *func_02012fe4(var0);
    if (arg0->unknown_8_ != 0) {
        return;
    }
    if (func_02046b60((struct Struct_02038598_5*)var1, 0x3)) {
        arg0->unknown_1_ = 1;
        return;
    }
    if (arg0->unknown_1a_ != 0) {
        int var4 = _s32_div_f(var3, 0x64);
        if (var4 * 0x64 != 0x170c && var3 != 0x2710) {
            arg0->unknown_1_ = 1;
            return;
        }
    }
    if (!func_02046b38((struct Struct_02046b38*)var1, var2)) {
        arg0->unknown_20_ = 1;
        func_ov017_021b6f18(var2);
        func_ov017_021b7104(var2, (char*)arg0 + 0xc);
        func_020469b4((struct Struct_0201bdac_2*)var1, (struct Struct_0201bdac*)var2);
    }
    arg0->unknown_8_ = arg0->unknown_8_ + 1;
    arg0->unknown_1_ = 1;
}
