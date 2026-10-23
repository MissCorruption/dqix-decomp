#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/LootableContainer.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0201777c {
    unsigned short unknown_0_;
    char unknown_2_[0x22];
    Vector3fix unknown_24_;
};

struct Struct_02017098 {
    unsigned short unknown_0_;
};

struct Struct_ov017_021b5aec {
    SafeAllocator unknown_0_;
    char unknown_14_[0x18];
    void* unknown_2c_;
    int unknown_30_;
    int unknown_34_;
};

struct Struct_ov017_021b5aec_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[0xe];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    char unknown_14_[0x8];
    void* unknown_1c_;
    char unknown_20_[0x4];
    LootableContainerManager::Container* unknown_24_;
    char unknown_28_[0x4];
    Vector3fix unknown_2c_;
    char unknown_38_[0x4];
    int unknown_3c_;
};

extern "C" Struct_02017098* func_02012fe4(void);
extern "C" unsigned char* func_0205ec34(void);
extern "C" Struct_0201777c* func_0201777c(Struct_02017098* arg0, int arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_ov017_021b5a30(Struct_ov017_021b5aec_2* arg0);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void* func_020de824(void* arg0);
extern "C" void func_0207cbe8(char* arg0);
extern "C" void func_0207d538(Struct_ov017_021b5aec* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov017_021b6174(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021cfde0(unsigned short arg0, unsigned short arg1, unsigned short arg2);

// USA: func_ov017_021b5aec
extern "C" ARM int func_ov017_021b5aec(Struct_ov017_021b5aec_2* arg0) {
#if defined(jpn)
 enum { Enum_ov017_021b5aec_10068 = 0x2794 };
#else
 enum { Enum_ov017_021b5aec_10068 = 0x2754 };
#endif
    Struct_02017098* var0 = func_02012fe4();
    unsigned char* var1 = func_0205ec34();
    LootableContainerManager* var2 = LootableContainerManager::GetMainInstance();
    Struct_0201777c* var3 = func_0201777c(var0, arg0->unknown_10_);
    if (var2 == 0 || var1 == 0 || var3 == 0) {
        func_020397c0(arg0->unknown_1c_);
        func_ov017_021b5a30(arg0);
        arg0->unknown_1_ = 1;
        return 6;
    }

    arg0->unknown_2c_.x = var3->unknown_24_.x;
    arg0->unknown_2c_.y = var3->unknown_24_.y;
    arg0->unknown_2c_.z = var3->unknown_24_.z;
    int var4 = 1;
    int var5 = 0;
    unsigned short var6 = 0;
    unsigned short var7 = 0;
    LootableContainerManager::Container* var8 = var2->GetContainerByID(var3->unknown_0_, &var6);
    if (var8 != 0) {
        var7 = var8->uniqueID;
        var4 = func_0206dfb0((int)var1, var1 + 0x8c, var7 + 0x79e);
        if (!var4) {
            arg0->unknown_24_ = var8;
            if (var8->lootType) {
                var5 = 1;
                Struct_ov017_021b5aec var9;
                var9.unknown_0_.ResetAllocatorPointer();
                func_020de824(var9.unknown_14_);
                func_0207cbe8((char*)&var9);
                func_0207cbe8((char*)&var9);
                var9.unknown_2c_ = (char*)var0 + Enum_ov017_021b5aec_10068;
                func_0207d538(&var9, var8->lootType, var8->itemIDOrRank, arg0->unknown_3c_, 1);
                arg0->unknown_12_ = var8->itemIDOrRank;
            }
        }
    }
    func_ov017_021b6174(var0->unknown_0_, arg0->unknown_10_, var7);
    func_ov017_021cfde0(var0->unknown_0_, arg0->unknown_10_, var7);
    if (!var4 && var5) {
        SetFlags04(GetGameResources(), 0x40);
        return 1;
    }
    func_020397c0(arg0->unknown_1c_);
    func_ov017_021b5a30(arg0);
    arg0->unknown_1_ = 1;
    return 6;
}
