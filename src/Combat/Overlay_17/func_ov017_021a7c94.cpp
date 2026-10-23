#if defined(jpn)
enum { Enum_ov017_021a7c94_2456 = 0x868, Enum_ov017_021a7c94_1788 = 0x4ec, Enum_ov017_021a7c94_2972 = 0x97c };
#else
enum { Enum_ov017_021a7c94_2456 = 0x998, Enum_ov017_021a7c94_1788 = 0x6fc, Enum_ov017_021a7c94_2972 = 0xb9c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201bdac { char unknown_0_[2]; unsigned char unknown_2_; char unknown_3_; Struct_0201bdac* unknown_4_; };
struct Struct_0201bdac_2 { Struct_0201bdac* unknown_0_; Struct_0201bdac* unknown_4_; };
struct Struct_ov017_021a7c94 { char unknown_0_[0x30]; short unknown_30_; short unknown_32_; int unknown_34_; };

extern "C" int func_020421a0(void);
extern "C" int func_020535c8(signed char* arg0);
extern "C" int func_02046b08(void** arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);
extern "C" void func_ov017_021d0198(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021a7d78(struct Struct_ov017_021a7c94* arg0);
extern "C" int func_020dc920(int, int, int, int);

// USA: func_ov017_021a7c94
extern "C" ARM void func_ov017_021a7c94(unsigned char* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    int var1 = func_020421a0();
    GameObject* var2 = var0->GetUnknownGameObject();
    int var3 = 1;
    if (*(int*)(var1 + Enum_ov017_021a7c94_2456) != 0) var3 = 0;
    if (func_020535c8((signed char*)var2) != 0) var3 = 0;
    if (func_02046b08((void**)*(struct Struct_0201bdac_2**)(arg0 + 0x3000 + Enum_ov017_021a7c94_1788)) == 0) var3 = 0;
    if (func_020dc920(arg1 & 0xff, 1, 1, 0) == 0) var3 = 0;
    int var4 = func_020100a8(var0);
    if (var3) {
        func_ov017_021a7d78(*(struct Struct_ov017_021a7c94**)(arg0 + 0x3000 + Enum_ov017_021a7c94_2972));
        (*(struct Struct_ov017_021a7c94**)(arg0 + 0x3000 + Enum_ov017_021a7c94_2972))->unknown_34_ = arg1;
        (*(struct Struct_ov017_021a7c94**)(arg0 + 0x3000 + Enum_ov017_021a7c94_2972))->unknown_30_ = (short)arg2;
        func_020469b4(*(struct Struct_0201bdac_2**)(arg0 + 0x3000 + Enum_ov017_021a7c94_1788), (struct Struct_0201bdac*)*(struct Struct_ov017_021a7c94**)(arg0 + 0x3000 + Enum_ov017_021a7c94_2972));
        func_ov017_021d0198(4, arg1, var4, arg2);
    } else {
        func_ov017_021d0198(5, arg1, var4, arg2);
    }
}
