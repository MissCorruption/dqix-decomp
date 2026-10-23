#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Resource/TextQueue.h"
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "World/ZoneLootableRecord.h"
#include "Resource/GameResources.h"

struct Struct_02010604;
struct Struct_02018300_3;
struct Struct_02033b68;
struct Struct_02108760;
struct Struct_02015ef4;
struct Struct_0203a46c;
struct Struct_02015ef4_2;
struct Struct_0201099c_10 { unsigned int unknown_0_[4]; };
struct Struct_02015ef4_4 {
    int unknown_0_[4]; unsigned int unknown_10_0_:10, unknown_11_2_:10, unknown_12_4_:8, unknown_13_4_:4;
};
struct Struct_02015ef4_5 { unsigned int unknown_0_[28]; };
struct Struct_ov017_021ae85c_4 { char unknown_0_[0x230]; Struct_02015ef4_5 unknown_230_; };
struct Struct_ov017_021ae85c_5 {
#if defined(jpn)
    char unknown_0_[0x620];
#else
    char unknown1_0_[0x600];
#endif
    Struct_02012fa4 unknown_600_[6];
#if defined(jpn)
    char unknown_950_[0x2794 - 0x950];
#else
    char unknown_930_[0x2754 - 0x930];
#endif
    Struct_0201099c_10 unknown_2754_;
};
struct Struct_ov017_021ae85c {
#if defined(jpn)
    char unknown_0_[0x228];
#else
    char unknown1_0_[0x2d8];
#endif
    int unknown_2d8_; char unknown_2dc_[0xa]; unsigned char unknown_2e6_;
};
struct Struct_ov017_021ae85c_2 {
    unsigned char unknown_0_, unknown_1_; char unknown_2_[6]; unsigned char unknown_8_, unknown_9_;
    unsigned short unknown_a_; short unknown_c_; char unknown_e_[2]; int unknown_10_;
    Vector3fix unknown_14_; int unknown_20_, unknown_24_; Struct_02012fa4* unknown_28_; SafeAllocator unknown_2c_;
};
struct Struct_ov017_021ae85c_3 {
    SafeAllocator unknown_0_; char unknown_14_[0x18]; Struct_0201099c_10* unknown_2c_;
    int unknown_30_, unknown_34_;
};
extern "C" Struct_ov017_021ae85c_5* func_02012fe4();
extern "C" void* func_0202ae18();
extern "C" int func_0202c540(void*);
extern "C" void func_ov017_021aeea8(Struct_ov017_021ae85c_2*);
extern "C" void func_02033b88(Struct_02010604*, int);
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" void func_02033b68(Struct_02033b68*, int);
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
extern "C" Struct_02015ef4_4* func_020dedd0(Struct_0201099c_10*, int);
extern "C" int func_020100a8(GameState*);
extern "C" unsigned short func_020de234(Struct_02015ef4_4*, int);
extern "C" void func_020397c0(void*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_0207dfc8(Struct_02015ef4_5*, Struct_02015ef4_5*);
extern "C" void func_0207df90(char*);
extern "C" void func_02047b30(void*, int, int, int);
extern "C" void func_0207dfac(char*);
extern "C" Struct_ov017_021ae85c* func_020421a0();
extern "C" void __clear(void*, int);
extern "C" void* func_020de824(void*);
extern "C" void func_0207cbe8(char*);
extern "C" int func_0207d538(void*, int, int, char*, int);
extern "C" void* func_020d7a50();
extern "C" void* func_020100bc(GameState*);
extern "C" void func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" void func_0203a46c(Struct_0203a46c*, int, int, int);
extern "C" void func_020473c8(Struct_02015ef4_2*, int);
extern Struct_02108760 data_02108760;
#if defined(jpn)
#define data_ov017_021d79a8 data_ov017_021d80dc
#endif
extern const char data_ov017_021d79a8[];
extern AllocatorUnion data_02114e20;
static inline Struct_ov017_021ae85c_4* inline_ov017_021ae85c(GameResources* arg0) {
    return (Struct_ov017_021ae85c_4*)arg0->unknown_2cc_;
}

// USA: func_ov017_021ae85c
extern "C" ARM void func_ov017_021ae85c(Struct_ov017_021ae85c_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_02012fe4();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    void* var2 = func_0202ae18();
    GameResources* var3 = GetGameResources();
    if (func_0202c540(var2)) {
        if (var3->unknown_42e2_) {
            func_ov017_021aeea8(arg0); arg0->unknown_1_ = 1; return;
        }
        if (arg0->unknown_9_ != 1) {
            if (arg0->unknown_9_ == 0) return;
            if (arg0->unknown_9_ == 2) { arg0->unknown_1_ = 1; return; }
        }
    }
    if (arg0->unknown_8_ == 0) {
        GameObject* var4 = var0->GetUnknownGameObject();
        if (!var4) { func_ov017_021aeea8(arg0); arg0->unknown_1_ = 1; return; }
        func_02033b88((Struct_02010604*)var4, 0);
        func_020397cc((Struct_02018300_3*)var4, 1);
        arg0->unknown_a_ = 5; arg0->unknown_8_ = 1;
    } else if (arg0->unknown_8_ == 1) {
        arg0->unknown_a_--;
        if (arg0->unknown_a_) return;
        GameObject* var5 = var0->GetUnknownGameObject();
        if (var5) func_02033b68((Struct_02033b68*)var5, 8);
        func_0205eaa0(&data_02108760, 0x5b, 0);
        arg0->unknown_8_ = 2; arg0->unknown_a_ = 30;
    } else if (arg0->unknown_8_ == 2) {
        arg0->unknown_a_--;
        if (arg0->unknown_a_) return;
        Struct_ov017_021ae85c_5* var6 = func_02012fe4();
        Struct_02015ef4_4* var7 = func_020dedd0(&var6->unknown_2754_, arg0->unknown_c_);
        if (var7) {
            arg0->unknown_28_ = &var6->unknown_600_[func_020100a8(var0)];
            func_02047230(arg0->unknown_28_);
            char var8[0x80];
            sprintf(var8, data_ov017_021d79a8, (signed char)var7->unknown_12_4_, func_020de234(var7, 0));
            arg0->unknown_10_ = var1->QueueLoadFile(var8, 0);
        } else {
            func_ov017_021aeea8(arg0); arg0->unknown_1_ = 1;
            func_020397c0(var0->GetUnknownGameObject()); return;
        }
        arg0->unknown_8_ = 3;
    } else if (arg0->unknown_8_ == 3) {
        if (!var1->GetTaskStatus(arg0->unknown_10_)) return;
        void* var9 = 0; unsigned int var10 = 0;
        var1->GetLoadedFileByID(arg0->unknown_10_, &var9, &var10);
        if (var9) {
            void* var11 = func_02012d88(&data_02114e20, 0x100);
            if (var11) {
                arg0->unknown_2c_.ResetAllocatorPointer();
                arg0->unknown_2c_.CreateTypeA(var11, 0x100); arg0->unknown_2c_.Reset();
                func_02047230(arg0->unknown_28_); func_0204719c(arg0->unknown_28_);
                Struct_02015ef4_5 var12;
                func_0207dfc8(&inline_ov017_021ae85c(var3)->unknown_230_, &var12);
                func_0207df90((char*)&var12);
                func_02047b30(arg0->unknown_28_, (int)var9, var10, (int)&arg0->unknown_2c_);
                func_0207dfac((char*)&var12);
            } else {
                func_ov017_021aeea8(arg0); arg0->unknown_1_ = 1;
                func_020397c0(var0->GetUnknownGameObject());
                var1->RemoveTask(arg0->unknown_10_); return;
            }
        }
        var1->RemoveTask(arg0->unknown_10_);
        Struct_0208cb08* var13 = func_02094a00();
        func_02094b3c(var13, 10);
        func_02094b30(var13, 0x1f9, 0);
        arg0->unknown_8_ = 4;
    } else if (arg0->unknown_8_ == 4) {
        if (!func_02094b4c(func_02094a00())) return;
        func_020421a0();
        char var14[0x80] = {};
        Struct_ov017_021ae85c_5* var15 = func_02012fe4();
        Struct_ov017_021ae85c_3 var16;
        var16.unknown_0_.ResetAllocatorPointer();
        func_020de824(var16.unknown_14_);
        func_0207cbe8((char*)&var16); func_0207cbe8((char*)&var16);
        var16.unknown_2c_ = &var15->unknown_2754_;
        if (func_0207d538(&var16, 2, (unsigned short)arg0->unknown_c_, var14, 1))
#if defined(jpn)
            func_020d7e10(func_020d7a50(), var14, 0, 0, 1);
#else
            func_020d7e10(func_020d7a50(), var14, 0, 0, 1, 1);
#endif
        func_0205eaa0(&data_02108760, 14, 0);
        arg0->unknown_8_ = 5; arg0->unknown_a_ = 20; arg0->unknown_24_ = 61;
    } else if (arg0->unknown_8_ == 5) {
        arg0->unknown_a_--;
        int var17 = var0->GetTickCount();
        void* var18 = func_020100bc(var0);
        Vector3fix var19 = arg0->unknown_14_;
        if (arg0->unknown_20_ < 0x191e) arg0->unknown_20_ += var17 * 0x199;
        var19.y += fix32sin(arg0->unknown_20_);
        int var20, var21;
        if (var18) {
            func_0202ec84(var18, (Struct_02015ef4*)&var19, &var20, &var21);
        }
        func_0203a46c((Struct_0203a46c*)arg0->unknown_28_, (var20 - 12) << 12, (var21 - 40) << 12, 0);
        func_020473c8((Struct_02015ef4_2*)arg0->unknown_28_, 1);
        if (!arg0->unknown_a_) { arg0->unknown_8_ = 6; arg0->unknown_a_ = 7; }
    } else if (arg0->unknown_8_ == 6) {
        arg0->unknown_a_--;
        int var22 = var0->GetTickCount();
        void* var23 = func_020100bc(var0);
        Vector3fix var24 = arg0->unknown_14_;
        var24.y += fix32sin(arg0->unknown_20_);
        if (arg0->unknown_24_) {
            int var25, var26;
            if (var23) {
                func_0202ec84(var23, (Struct_02015ef4*)&var24, &var25, &var26);
            }
            func_0203a46c((Struct_0203a46c*)arg0->unknown_28_, (var25 - 12) << 12, (var26 - 40) << 12, 0);
            func_020473c8((Struct_02015ef4_2*)arg0->unknown_28_, 1);
            arg0->unknown_24_ -= var22;
            arg0->unknown_28_->unknown_82_ = arg0->unknown_24_ > 31 ? 31 : arg0->unknown_24_;
            if (arg0->unknown_24_ < 0) arg0->unknown_24_ = 0;
        }
        if (!arg0->unknown_a_) { func_020421a0(); arg0->unknown_8_ = 7; }
        else if (arg0->unknown_a_ == 5) {
            GameObject* var27 = var0->GetUnknownGameObject();
            func_020397c0(var27); func_02033b68((Struct_02033b68*)var27, 0);
        }
    } else if (arg0->unknown_8_ == 7) {
        Struct_ov017_021ae85c* var28 = func_020421a0();
        var28->unknown_2d8_ = 0; var28->unknown_2e6_ = 1;
        func_02094ab0(func_02094a00());
        func_ov017_021aeea8(arg0); arg0->unknown_1_ = 1;
    }
}
