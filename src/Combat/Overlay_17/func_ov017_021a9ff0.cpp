#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/OverlayId.h"

struct Struct_0206f81c_2;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_020469f8;
struct Struct_020469f8_2;
struct SafeAllocator;
struct GameResources;
struct Struct_020213fc;

extern "C" int func_0200fb8c(int* arg0);
extern "C" void func_ov017_021b2174(unsigned char* arg0);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void func_020469f8(Struct_020469f8* arg0, Struct_020469f8_2* arg1);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
void SetBrightness(GameResources* resources, int brightness, int frames);
extern "C" void func_020213fc(Struct_020213fc* arg0, int arg1);
extern "C" void func_ov004_02165df4(SafeAllocator* arg0, void* arg1);
extern char data_ov017_021d7831;

// USA: func_ov017_021a9ff0
extern "C" ARM void func_ov017_021a9ff0(int arg0) {
#if defined(jpn)
 enum {Enum_ov017_021a9ff0_15180=0x392c, Enum_ov017_021a9ff0_14076=0x34ec};
#else
 enum {Enum_ov017_021a9ff0_15180=0x3b4c, Enum_ov017_021a9ff0_14076=0x36fc};
#endif
    GameResources* var0 = (GameResources*)func_0200fb8c((int*)GameState::GetInstance());
    Struct_020213fc* var1;
    void* var2;
    unsigned char* var3;
    var3 = *(unsigned char**)((char*)var0 + Enum_ov017_021a9ff0_15180);
#if defined(jpn)
    var1 = *(Struct_020213fc**)((char*)var0 + 0x34c0);
#else
    var1 = *(Struct_020213fc**)((char*)var0 + 0x36d0);
#endif
    var2 = *(void**)((char*)var0 + Enum_ov017_021a9ff0_14076);
    func_ov017_021b2174(var3);
    func_ov017_021b2ba0((Struct_0206f81c_2*)var3, &data_ov017_021d7831);
    func_ov017_021b2bd0(var3, (int)func_ov004_02165df4, OVERLAY_ID(4));
    if (arg0) {
        func_020469f8((Struct_020469f8*)var2, (Struct_020469f8_2*)var3);
    } else {
        func_020469b4((Struct_0201bdac_2*)var2, (Struct_0201bdac*)var3);
    }
    SetBrightness(var0, -16, 0x19);
    func_020213fc(var1, 1);
}
