#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "World/LootableContainer.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_02015ef4_4 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 8;
    unsigned int unknown_13_4_ : 4;
    short unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_;
};

struct Struct_02019508_3;
struct Struct_0201099c_10;
struct Struct_02012fa4;

extern "C" void* func_02012fe4(void);
extern "C" void func_0201ba1c(struct Struct_02019508_3* arg0, int arg1, int arg2);
extern "C" void func_ov017_021cfe40(unsigned short arg0, unsigned short arg1, unsigned short arg2);
extern "C" unsigned char* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_02047230(struct Struct_02012fa4* arg0);
extern "C" Struct_02015ef4_4* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_ov017_0218d510(int arg0, void* arg1);
extern "C" unsigned short func_020de234(struct Struct_02015ef4_4* arg0, int arg1);

struct Struct_ov017_021d6ca4 {
    char unknown_0_[0x20];
};

extern AllocatorUnion data_02114e20;
extern const Struct_ov017_021d6ca4 data_ov017_021d6ca4;
extern const char data_ov017_021d7ee8[];

struct Struct_ov017_021bf7ac {
    char unknown_0_[0x2c];
    unsigned short unknown_2c_;
    unsigned short unknown_2e_;
    unsigned short unknown_30_;
};

struct Struct_ov017_021bf7ac_2 {
    char unknown_0_[8];
    short unknown_8_;
    char unknown_a_[2];
    struct Struct_ov017_021bf7ac* unknown_c_;
    struct Struct_02012fa4* unknown_10_;
    short unknown_14_;
    char unknown_16_[0x48 - 0x16];
    unsigned char unknown_48_;
    char unknown_49_[3];
    SafeAllocator unknown_4c_;
};

// USA: func_ov017_021bf7ac
extern "C" ARM int func_ov017_021bf7ac(struct Struct_ov017_021bf7ac_2* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021bf7ac_852=0x394, Enum_ov017_021bf7ac_1536=0x620};
#else
 enum {Enum_ov017_021bf7ac_852=0x354, Enum_ov017_021bf7ac_1536=0x600};
#endif
    GameState* var0 = GameState::GetInstance();
    var0->GetUnknownGameObject();
    unsigned short* var1 = (unsigned short*)func_02012fe4();
    struct Struct_ov017_021bf7ac* var2 = arg0->unknown_c_;
    BackgroundLoader* var3 = BackgroundLoader::GetInstance();
    unsigned short var4 = var2->unknown_2c_;
    unsigned short var5 = var2->unknown_2e_;
    func_0201ba1c((struct Struct_02019508_3*)var1, var4, var5);
    func_ov017_021cfe40(*var1, var4, var5);

    LootableContainerManager* var6 = LootableContainerManager::GetMainInstance();
    unsigned char* var7 = func_0205ec34();
    if (var6 == 0 || var7 == 0) {
        return 3;
    }

    unsigned short var8 = 0;
    LootableContainerManager::Container* var9 = var6->GetContainerByID(var2->unknown_30_, &var8);
    if (var9 != 0 && !func_0206dfb0((int)var7, var7 + 0x8c, var9->uniqueID + 0x79e)) {
        char* var10 = (char*)func_02012fe4();
        char* var11 = var10 + Enum_ov017_021bf7ac_852;
        arg0->unknown_10_ = (struct Struct_02012fa4*)(var10 + Enum_ov017_021bf7ac_1536 + func_020100a8(var0) * 0x88);
        func_02047230(arg0->unknown_10_);
        if (var9->lootType == 1) {
            Struct_ov017_021d6ca4 var12 = data_ov017_021d6ca4;
            arg0->unknown_14_ = var3->QueueLoadFile(var12.unknown_0_, 0);
        } else {
            Struct_02015ef4_4* var13 = func_020dedd0((struct Struct_0201099c_10*)(var11 + 0x2400), (short)var9->itemIDOrRank);
            if (var13 != 0) {
                if (var13->unknown_18_ == 0x5617) {
                    arg0->unknown_48_ = 1;
                    arg0->unknown_4c_.ResetAllocatorPointer();
                    arg0->unknown_4c_.CreateTypeA(func_02012d88(&data_02114e20, 0x4000), 0x4000);
                    arg0->unknown_4c_.Reset();
                    func_ov017_0218d510((int)GetGameResources(), &arg0->unknown_4c_);
                } else {
                    char var14[0x80];
                    sprintf(var14, data_ov017_021d7ee8, (signed char)var13->unknown_12_4_, func_020de234(var13, 0));
                    arg0->unknown_14_ = var3->QueueLoadFile(var14, 0);
                }
            }
        }
    }
    arg0->unknown_8_ = 0x12c;
    return 3;
}
