#if defined(jpn)
enum {Enum_ov017_021913d0_2976=0x980, Enum_ov017_021913d0_3936=0x8c, Enum_ov017_021913d0_28672=0x7c00, Enum_ov017_021913d0_1792=0x4f0};
#else
enum {Enum_ov017_021913d0_2976=0xba0, Enum_ov017_021913d0_3936=0xf60, Enum_ov017_021913d0_28672=0x7000, Enum_ov017_021913d0_1792=0x700};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0202ae18(void);
extern "C" int func_0202c508(void);
extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_0218f574(int* arg0, int arg1, int arg2, int arg3);
struct Struct_ov017_021913d0;
extern "C" void func_ov017_021c1e40(struct Struct_ov017_021913d0* arg0);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);
extern "C" void func_ov017_021ce400(int arg0, int arg1);

struct Struct_ov017_021913d0_2 { int unknown_0_; int unknown_4_; int unknown_8_; };

// USA: func_ov017_021913d0
extern "C" ARM void func_ov017_021913d0(unsigned char* arg0, int arg1) {
    if (arg1 > 0) {
        unsigned char* var0 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_021913d0_2976);
        if (var0[2] == 0) {
            if (var0[0xb] == 0) {
                GameState* var1 = GameState::GetInstance();
                GameObject* var2 = var1->GetPartyMemberByIndex(0);
                struct Struct_ov017_021913d0_2 var3 = *(struct Struct_ov017_021913d0_2*)((char*)var2 + 0x44);
                int* var4 = (int*)((char*)var1 + Enum_ov017_021913d0_3936 + Enum_ov017_021913d0_28672);
                func_ov017_0218f574(var4, var3.unknown_0_, var3.unknown_4_, var3.unknown_8_);
            }
            func_ov017_021c1e40((struct Struct_ov017_021913d0*)var0);
            var0[0xb] = (unsigned char)arg1;
            struct Struct_0201bdac_2* var5 = *(struct Struct_0201bdac_2**)(arg0 + 0x3000 + Enum_ov017_021913d0_1792);
            func_020469b4(var5, (struct Struct_0201bdac*)var0);
        }
        func_0202ae18();
        if (func_0202c508()) {
            unsigned short* var6 = (unsigned short*)func_02012fe4();
            func_ov017_021ce400(arg1, (unsigned short)*var6);
        }
    }
}
