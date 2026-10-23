#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);
extern "C" void func_ov017_021b57fc(void* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_02199138 {
    char unknown_0_[0xc];
    int unknown_c_;
    char unknown_10_[0x24 - 0x10];
    int unknown_24_;
    char unknown_28_[0x34 - 0x28];
};

// USA: func_ov017_02199138
extern "C" ARM void func_ov017_02199138(char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_02199138_2812=0x8dc, Enum_ov017_02199138_1724=0x4ac, Enum_ov017_02199138_13824=0x3400, Enum_ov017_02199138_182=0xa6, Enum_ov017_02199138_1788=0x4ec};
#else
 enum {Enum_ov017_02199138_2812=0xafc, Enum_ov017_02199138_1724=0x6bc, Enum_ov017_02199138_13824=0x3600, Enum_ov017_02199138_182=0xb6, Enum_ov017_02199138_1788=0x6fc};
#endif
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    unsigned short* var2 = (unsigned short*)func_02012fe4();
    if (*((unsigned char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_02199138_2812)) + 2) != 0) {
        return;
    }
    void* var3 = func_0205ec34();
    struct Struct_ov017_02199138 var4;
    var4.unknown_c_ = *var2;
    var4.unknown_24_ = *(unsigned short*)(*(void**)(arg0 + 0x3000 + Enum_ov017_02199138_1724));
    if (func_020649b0(var3, 0x17, &var4)) {
        func_0206f81c(&var4);
        return;
    }
    func_ov017_021b57fc(*(void**)(arg0 + 0x3000 + Enum_ov017_02199138_2812));
    *(int*)((char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_02199138_2812)) + 0x1c) = (int)var1;
    *(unsigned short*)((char*)(*(void**)(arg0 + 0x3000 + Enum_ov017_02199138_2812)) + 0x10) =
        *(unsigned short*)(arg0 + Enum_ov017_02199138_13824 + Enum_ov017_02199138_182);
    func_020469b4((struct Struct_0201bdac_2*)(*(void**)(arg0 + 0x3000 + Enum_ov017_02199138_1788)),
                      (struct Struct_0201bdac*)(*(void**)(arg0 + 0x3000 + Enum_ov017_02199138_2812)));
}
