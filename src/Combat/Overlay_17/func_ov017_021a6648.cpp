#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"
#include "std_library_functions.h"

struct Struct_02018300_3;
struct Struct_0203d028 { char unknown_0_[0x70]; };
struct Struct_ov017_021a6648 {
    Struct_0203d028 unknown_0_[0x1c];
    Struct_0203d028 unknown_c40_;
};
struct Struct_02038598_4;
struct Struct_020d7aa0_2;
struct Struct_02038598_5;
struct Struct_ov017_021a6648_2 {
    char unknown_0_; unsigned char unknown_1_; char unknown_2_[6];
    unsigned char unknown_8_, unknown_9_, unknown_a_, unknown_b_, unknown_c_, unknown_d_; short unknown_e_;
    SafeAllocator unknown_10_; int unknown_24_[10]; int unknown_4c_[2];
};
struct Struct_ov017_021a6648_3 {
    char unknown_0_[0x10]; unsigned char unknown_10_;
    unsigned char unknown_11_0_:1, unknown_11_1_:1, unknown_11_2_:1, unknown_11_3_:1, unknown_11_4_:1, unknown_11_5_:1, unknown_11_6_:1, unknown_11_7_:1;
    short unknown_12_, unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_, unknown_1e_;
    int unknown_20_, unknown_24_, unknown_28_; Vector3i unknown_2c_;
    int unknown_38_, unknown_3c_, unknown_40_; Vector3i unknown_44_;
};
extern "C" void* func_02057924();
extern "C" unsigned int* func_020d6c00();
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" int func_02046b08(void**);
extern "C" void func_020466e4(unsigned int*, unsigned int);
extern "C" void func_020a0cc4(unsigned int);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_020bb700(int*);
extern "C" void func_020bb910(int*);
void CleanInvalidateCacheRange(const void*, unsigned int);
extern "C" int func_02057e6c(void*, int, SafeAllocator*, void*, unsigned int, Struct_0203d028*);
extern "C" void func_02057fb4(void*, int, void*);
extern "C" void func_0205ebc0(void*, int, int);
extern "C" void func_0205ebfc(void*, int, int);
extern "C" void func_020397c0(void*);
extern "C" void func_0205ebec(void*);
extern "C" void func_020466f4(Struct_02038598_4*, unsigned int);
extern "C" void func_020dc2d0(int);
extern "C" void func_ov017_0219593c();
extern "C" Struct_020d7aa0_2* func_020d7a50();
extern "C" void func_020d7aa0(Struct_020d7aa0_2*);
extern "C" int func_02046b60(Struct_02038598_5*, int);
extern "C" void func_02046a8c(Struct_02038598_5*, void*);
extern "C" void func_ov017_021a6b30(Struct_ov017_021a6648_2*);
extern const char* data_ov017_021d771c[3];
extern AllocatorUnion data_02114e20;
extern unsigned char data_ov017_021d6aa8[9];
extern Vector3i data_ov017_021d6ab4;
extern char data_ov017_021d7778[], data_ov017_021d777a[];
extern char data_02108760;
extern unsigned char data_ov017_021d6aa9[9], data_ov017_021d6aaa[9];

// USA: func_ov017_021a6648
extern "C" ARM void func_ov017_021a6648(Struct_ov017_021a6648_2* arg0, Struct_02038598_5* arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    GameResources* var2 = GetGameResources();
    BackgroundLoader* var3 = BackgroundLoader::GetInstance();
    void* var4 = func_02057924();
    unsigned int* var5 = func_020d6c00();
    if (arg0->unknown_8_ == 0) {
        var1->obj3D_.MakeHidden();
        func_020397cc((Struct_02018300_3*)var1, 1);
        if (!func_02046b08((void**)var2->unknown_ptr_array_36fc[1])) return;
        SetFlags00(var2, 0x10);
        func_020466e4(var5, 1);
        func_020a0cc4(0x7000);
        arg0->unknown_e_ = var3->QueueLoadFile(data_ov017_021d771c[arg0->unknown_c_], 0);
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 1) {
        if (!var3->GetTaskStatus(arg0->unknown_e_)) return;
        void* var6;
        unsigned int var7;
        var3->GetLoadedFileByID(arg0->unknown_e_, &var6, &var7);
        arg0->unknown_10_.CreateTypeA(func_02012d88(&data_02114e20, 0x7000), 0x7000);
        arg0->unknown_10_.Reset();
        Struct_ov017_021a6648* var8 = (Struct_ov017_021a6648*)var2->unknown_2cc_;
        Struct_0203d028* var9 = &var8->unknown_c40_;
        func_0207df50(var9);
        func_020bb700(arg0->unknown_24_);
        func_020bb910(arg0->unknown_4c_);
        void* var10 = arg0->unknown_10_.Allocate(var7);
        memcpy(var10, var6, var7);
        CleanInvalidateCacheRange(var10, var7);
        func_02057e6c(var4, 0xc, &arg0->unknown_10_, var10, var7, var9);
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 2) {
        SetMainBrightness(var2, 0, 0x1e);
        arg0->unknown_9_ = 0;
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 3) {
        arg0->unknown_9_ += var0->GetTickCount();
        if (arg0->unknown_9_ <= data_ov017_021d6aa8[arg0->unknown_c_ * 3]) return;
        var3->RemoveTask(arg0->unknown_e_);
        arg0->unknown_e_ = -1;
        Vector3i var11 = data_ov017_021d6ab4;
        Struct_ov017_021a6648_3 var12;
        var12.unknown_0_[0] = 0;
        var12.unknown_10_ = 1;
        var12.unknown_12_ = 0;
        var12.unknown_14_ = -1; var12.unknown_16_ = -1; var12.unknown_18_ = -1; var12.unknown_1a_ = -1;
        var12.unknown_1c_ = -0x1000;
        var12.unknown_20_ = 0; var12.unknown_24_ = 0; var12.unknown_28_ = 0;
        var12.unknown_2c_.x = 0; var12.unknown_2c_.y = 0; var12.unknown_2c_.z = 0;
        var12.unknown_38_ = 0; var12.unknown_3c_ = 0; var12.unknown_40_ = 0;
        var12.unknown_44_.x = 0x1000; var12.unknown_44_.y = 0x1000; var12.unknown_44_.z = 0x1000;
        var12.unknown_11_0_ = 0; var12.unknown_11_1_ = 0; var12.unknown_11_2_ = 1; var12.unknown_11_3_ = 0;
        var12.unknown_11_4_ = 0; var12.unknown_11_5_ = 0; var12.unknown_11_6_ = 0; var12.unknown_11_7_ = 0;
        if (arg0->unknown_c_ == 2) sprintf(var12.unknown_0_, data_ov017_021d7778);
        else sprintf(var12.unknown_0_, data_ov017_021d777a);
        var12.unknown_2c_ = var1->obj3D_.position_;
        var12.unknown_44_ = var11;
        var12.unknown_10_ = 1;
        func_02057fb4(var4, 0xc, &var12);
        if (arg0->unknown_c_ == 2) {
            func_0205ebc0(&data_02108760, 0xa3, 0xa3);
            func_0205ebfc(&data_02108760, 5, 0);
        } else {
            func_0205ebc0(&data_02108760, 0xb2, 0xb2);
            func_0205ebfc(&data_02108760, 2, 0);
        }
        arg0->unknown_9_ = 0;
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 4) {
        arg0->unknown_9_ += var0->GetTickCount();
        if (arg0->unknown_9_ < data_ov017_021d6aa9[arg0->unknown_c_ * 3]) return;
        var1->obj3D_.MakeVisible();
        arg0->unknown_8_++;
    } else if (arg0->unknown_8_ == 5) {
        arg0->unknown_9_ += var0->GetTickCount();
        if (arg0->unknown_9_ < data_ov017_021d6aaa[arg0->unknown_c_ * 3]) return;
        func_020397c0(var1);
        func_0205ebec(&data_02108760);
        ClearFlags00(var2, 0x10);
        func_020466f4((Struct_02038598_4*)var5, 1);
        func_020dc2d0(0);
        if (arg0->unknown_a_) {
            func_ov017_0219593c();
            func_020d7aa0(func_020d7a50());
        }
        if (!arg0->unknown_b_ && func_02046b60(arg1, 0xa)) {
            func_02046a8c(arg1, var2->unknown_ptr_3718);
            ClearFlags00(var2, 0x800);
        }
        if (!arg0->unknown_b_ && func_02046b60(arg1, 0x40)) func_02046a8c(arg1, var2->unknown_ptr_array_3afc[0x27]);
        func_ov017_021a6b30(arg0);
        arg0->unknown_1_ = 1;
    }
}
