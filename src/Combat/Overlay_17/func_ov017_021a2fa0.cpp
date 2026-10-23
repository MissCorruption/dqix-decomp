#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Memory/SafeAllocator.h"

struct Struct_02015ef4_5;

struct Struct_ov017_021a2fa0 {
    unsigned char unknown_0_[0xb6];
    unsigned char unknown_b6_;
};

struct Struct_ov017_021a2fa0_2 {
    unsigned short unknown_0_;
    char unknown_2_[6];
    int unknown_8_;
#if defined(jpn)
    char unknown_c_[0x26a4 - 0xc];
#else
    char unknown_c_[0x2664 - 0xc];
#endif
    Struct_ov017_021a2fa0 unknown_2664_;
};

struct Struct_ov017_021a2fa0_3 {
    char unknown_0_[0xf7d];
    unsigned char unknown_f7d_;
};

extern "C" Struct_ov017_021a2fa0_2* func_02012fe4(void);
extern "C" void func_ov017_021a316c(unsigned char* arg0);
extern "C" void func_ov017_021a2c14(unsigned char* arg0, int arg1, void* arg2);
extern "C" void func_020a6728(unsigned char* arg0, unsigned short arg1);
extern "C" void func_020aca88(unsigned char* arg0, unsigned short arg1);
extern "C" void func_0207dfc8(struct Struct_02015ef4_5* arg0, struct Struct_02015ef4_5* arg1);
extern "C" int func_0208f588(Struct_ov017_021a2fa0* arg0, void* arg1, char* arg2);
extern "C" int func_0208f748(Struct_ov017_021a2fa0* arg0, int arg1);
extern "C" void func_ov017_021a28a8(unsigned char* arg0);
extern "C" void func_ov017_021913d0(unsigned char* arg0, int arg1);
extern "C" void func_ov017_021ce494(void);

// USA: func_ov017_021a2fa0
extern "C" ARM void func_ov017_021a2fa0(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021a2fa0_4676=0x1034, Enum_ov017_021a2fa0_1500=0x58c, Enum_ov017_021a2fa0_4696=0x1048, Enum_ov017_021a2fa0_4412=0xf2c, Enum_ov017_021a2fa0_4432=0xf40, Enum_ov017_021a2fa0_4544=0xfb0, Enum_ov017_021a2fa0_4564=0xfc4};
#else
 enum {Enum_ov017_021a2fa0_4676=0x1244, Enum_ov017_021a2fa0_1500=0x5dc, Enum_ov017_021a2fa0_4696=0x1258, Enum_ov017_021a2fa0_4412=0x113c, Enum_ov017_021a2fa0_4432=0x1150, Enum_ov017_021a2fa0_4544=0x11c0, Enum_ov017_021a2fa0_4564=0x11d4};
#endif
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021a2fa0_2* var1 = func_02012fe4();
    func_ov017_021a316c(arg0);
    func_ov017_021a2c14(arg0, var1->unknown_8_, var1->unknown_c_);
    func_020a6728(arg0, var1->unknown_0_);
    func_020aca88(arg0, var1->unknown_0_);

    unsigned int var2 = ((SafeAllocator*)(arg0 + 0xc4))->GetMaxPossibleAllocation();
    void* var3 = ((SafeAllocator*)(arg0 + 0xc4))->Allocate(var2);
    ((SafeAllocator*)(arg0 + Enum_ov017_021a2fa0_4676))->CreateTypeA(var3, var2);
    func_0207dfc8((struct Struct_02015ef4_5*)(arg0 + Enum_ov017_021a2fa0_1500), (struct Struct_02015ef4_5*)(arg0 + Enum_ov017_021a2fa0_4696));

    Struct_ov017_021a2fa0* var4 = &var1->unknown_2664_;
    func_0208f588(var4, arg0 + Enum_ov017_021a2fa0_4676, (char*)(arg0 + Enum_ov017_021a2fa0_4696));

    GrottoStruct* var5 = var0->GetGrottoStruct();
    if (var5->unknown_0[0] != 0
        && (var5->activeMapData.GetDiscoveryState() == DiscoveryState_Discovered
            || var5->activeMapData.GetDiscoveryState() == DiscoveryState_Cleared)
        && *(int*)&var5->entranceZoneId == var1->unknown_0_) {
        var4->unknown_b6_ = 1;
        func_0208f748(var4, 0);
    } else {
        var4->unknown_b6_ = 0;
    }

    var2 = ((SafeAllocator*)(arg0 + Enum_ov017_021a2fa0_4676))->GetMaxPossibleAllocation();
    var3 = ((SafeAllocator*)(arg0 + Enum_ov017_021a2fa0_4676))->Allocate(var2);
    ((SafeAllocator*)(arg0 + Enum_ov017_021a2fa0_4412))->CreateTypeA(var3, var2);
    func_0207dfc8((struct Struct_02015ef4_5*)(arg0 + Enum_ov017_021a2fa0_4696), (struct Struct_02015ef4_5*)(arg0 + Enum_ov017_021a2fa0_4432));
    func_ov017_021a28a8(arg0);

    var2 = ((SafeAllocator*)(arg0 + Enum_ov017_021a2fa0_4412))->GetMaxPossibleAllocation();
    var3 = ((SafeAllocator*)(arg0 + Enum_ov017_021a2fa0_4412))->Allocate(var2);
    ((SafeAllocator*)(arg0 + Enum_ov017_021a2fa0_4544))->CreateTypeA(var3, var2);
    func_0207dfc8((struct Struct_02015ef4_5*)(arg0 + Enum_ov017_021a2fa0_4432), (struct Struct_02015ef4_5*)(arg0 + Enum_ov017_021a2fa0_4564));

    Struct_ov017_021a2fa0_3* var6 = (Struct_ov017_021a2fa0_3*)func_02010828(var0);
    if (var6->unknown_f7d_ != 0) {
        func_ov017_021913d0(arg0, var6->unknown_f7d_);
    } else {
        func_ov017_021ce494();
    }
}
