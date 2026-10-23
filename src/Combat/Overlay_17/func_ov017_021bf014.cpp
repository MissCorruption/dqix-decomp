#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct Struct_02072a68 { short unknown_0_; void* unknown_4_; };
struct Struct_02072a68_2 { Struct_02072a68* unknown_0_; short unknown_4_; };
struct Struct_ov017_021bf014 { char unknown_0_[8]; int unknown_8_; Struct_02072a68_2 unknown_c_; SafeAllocator unknown_14_; int unknown_28_; };
struct Struct_02046574_2;
#if defined(jpn)
enum { Enum_ov017_021bf014_92 = 0x28, Enum_ov017_021bf014_712 = 0x218, Enum_ov017_021bf014_2456 = 0x868,
       Enum_ov017_021bf014_2464 = 0x870, Enum_ov017_021bf014_6578 = 0x17e2, Enum_ov017_021bf014_800 = 0x1f4 };
extern const char data_ov017_021d86d4[];
#else
enum { Enum_ov017_021bf014_92 = 0x5c, Enum_ov017_021bf014_712 = 0x2c8, Enum_ov017_021bf014_2456 = 0x998,
       Enum_ov017_021bf014_2464 = 0x9a0, Enum_ov017_021bf014_6578 = 0x19b2, Enum_ov017_021bf014_800 = 0x320 };
#endif

struct Struct_020d7aa0_2;
struct Struct_02018300_3;
extern AllocatorUnion data_02114e20;
extern char data_ov017_021d7ec0[];
extern char data_ov017_021d7ed5[];
extern "C" void func_0202ae18();
extern "C" Struct_02046574_2* func_020421a0();
extern "C" void* func_02012fe4();
extern "C" unsigned char* func_020100f8(char*);
extern "C" Struct_020d7aa0_2* func_020d7a50();
extern "C" void func_020d7aa0(Struct_020d7aa0_2*);
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" void func_020a27b8(unsigned char*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_020728ac(Struct_02072a68_2*, SafeAllocator*, void*, unsigned int, int, int, int);
extern "C" void func_02046380(Struct_02046574_2*);
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" char* func_02072a68(Struct_02072a68_2*, int);
extern "C" void func_0204500c(Struct_02046574_2*, char*, int
#if !defined(jpn)
    , int
#endif
);
extern "C" int func_020457e0(Struct_02046574_2*);
extern "C" void func_020116c8(void*);
extern "C" void func_020dc2d0(int);
extern "C" void func_02043204(char*);
extern "C" void func_020397c0(void*);
extern "C" void func_ov017_021bf398(char*);

// USA: func_ov017_021bf014
extern "C" ARM void func_ov017_021bf014(Struct_ov017_021bf014* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    GetGameResources();
    Struct_02046574_2* var1 = func_020421a0();
    func_02012fe4();
    GrottoStruct* var2 = var0->GetGrottoStruct();
    GameObject* var3 = var0->GetUnknownGameObject();
    unsigned char* var4 = func_020100f8((char*)var0);
    if (arg0->unknown_8_ == 0) {
        func_020d7aa0(func_020d7a50());
        func_020397cc((Struct_02018300_3*)var3, 1);
        func_020a27b8(var4);
        void* var5 = func_02012d88(&data_02114e20, Enum_ov017_021bf014_800);
        arg0->unknown_14_.CreateTypeA(var5, Enum_ov017_021bf014_800);
#if defined(jpn)
        arg0->unknown_28_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov017_021d86d4, 0);
#else
        arg0->unknown_28_ = BackgroundLoader::GetInstance()->QueueLoadFileInGP2(data_ov017_021d7ec0, data_ov017_021d7ed5, 0);
#endif
        arg0->unknown_8_ = 1;
    } else if (arg0->unknown_8_ == 1) {
        if (!BackgroundLoader::GetInstance()->GetTaskStatus(arg0->unknown_28_)) return;
        void* var6;
        unsigned int var7;
        BackgroundLoader::GetInstance()->GetLoadedFileByID(arg0->unknown_28_, &var6, &var7);
        arg0->unknown_14_.Reset();
        func_020728ac(&arg0->unknown_c_, &arg0->unknown_14_, var6, var7, 0, 0, 0);
        BackgroundLoader::GetInstance()->RemoveTask(arg0->unknown_28_);
        arg0->unknown_28_ = -1;
        func_02046380(var1);
        func_02046574(var1, 0, var0->GetUnknownGameObject()->baseStats_->unk);
        func_02094b30(func_02094a00(), 0x203, 0);
        arg0->unknown_8_ = 2;
    }
    if (arg0->unknown_8_ == 2) {
        if (!func_02094b4c(func_02094a00())) return;
        if (var2->activeMapData.GetDiscoveryState() == DiscoveryState_Undiscovered) arg0->unknown_8_ = 3;
        else arg0->unknown_8_ = 4;
    } else if (arg0->unknown_8_ == 3) {
        char* var8 = (*reinterpret_cast<char**>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_92));
        strcpy(var8, func_02072a68(&arg0->unknown_c_, 1));
        func_0204500c(var1, var8, 0
#if !defined(jpn)
            , 0xe3
#endif
        );
        (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_6578)) = 0;
        (*reinterpret_cast<int*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_712)) = 0;
        (*reinterpret_cast<int*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_2456)) = 1;
        arg0->unknown_8_ = 5;
    } else if (arg0->unknown_8_ == 4) {
        char* var9 = (*reinterpret_cast<char**>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_92));
        strcpy(var9, func_02072a68(&arg0->unknown_c_, 2));
        func_0204500c(var1, var9, 0
#if !defined(jpn)
            , 0xe3
#endif
        );
        (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_6578)) = 0;
        (*reinterpret_cast<int*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_2456)) = 1;
        (*reinterpret_cast<int*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_712)) = 0;
        arg0->unknown_8_ = 5;
    } else if (arg0->unknown_8_ == 5) {
        func_020397cc((Struct_02018300_3*)var3, 1);
        if ((*reinterpret_cast<int*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_2456))) return;
        var2->unknown_0[2] = 1;
        int var10 = func_020457e0(var1);
        if (var10 == 0) arg0->unknown_8_ = 6;
        else if (var10 == 1) arg0->unknown_8_ = 9;
    } else if (arg0->unknown_8_ == 6) {
        func_020116c8(var0);
        func_020dc2d0(0);
        arg0->unknown_8_ = 7;
    } else if (arg0->unknown_8_ == 7) {
        arg0->unknown_8_ = 8;
    } else if (arg0->unknown_8_ == 8) {
        func_020397cc((Struct_02018300_3*)var3, 1);
        if (!(*reinterpret_cast<int*>(reinterpret_cast<char*>(var1) + Enum_ov017_021bf014_2464))) arg0->unknown_8_ = 9;
    } else if (arg0->unknown_8_ == 9) {
        func_02043204((char*)var1);
        func_020397c0(var3);
        Struct_0208cb08* var11 = func_02094a00();
        func_02094b38(var11, 0x203);
        func_02094ab0(var11);
        func_ov017_021bf398((char*)arg0);
    }
}
