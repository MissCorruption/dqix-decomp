#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "World/Object3D.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021b2fac {
    char unknown_0_[1];
    unsigned char unknown_1_;
    char unknown_2_[6];
    short unknown_8_;
    signed char unknown_a_;
    unsigned char unknown_b_;
    char unknown_c_[4];
    int unknown_10_;
};

struct Struct_ov017_021b2fac_2 {
    char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
    unsigned char : 4;
};

struct Struct_ov017_021b2fac_3 {
    char unknown_0_[0xcc];
    char unknown_cc_[1];
};

struct Struct_ov017_021b2fac_4 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x9c - 6];
    unsigned short unknown_9c_;
#if defined(jpn)
    char unknown_9e_[0x144 - 0x9e];
#else
    char unknown1_9e_[0x150 - 0x9e];
#endif
    struct Struct_ov017_021b2fac_2* unknown_150_;
    struct Struct_ov017_021b2fac_3* unknown_154_;
    char unknown_158_[0x1c4 - 0x158];
    unsigned char* unknown_1c4_;
};

extern "C" void func_ov017_021b33d8(void* arg0);
extern "C" int func_ov017_021b3444(struct Struct_ov017_021b2fac* arg0);
extern "C" int func_ov017_021b38c8(struct Struct_ov017_021b2fac* arg0);
extern "C" void func_02083e28(void* arg0, int arg1);
extern "C" int func_ov017_021b3560(struct Struct_ov017_021b2fac* arg0);
extern "C" void func_ov017_021b3678(struct Struct_ov017_021b2fac* arg0);
extern "C" int func_ov017_021b3780(struct Struct_ov017_021b2fac* arg0);
extern "C" int func_ov017_021b3e14(struct Struct_ov017_021b2fac* arg0);
extern "C" void func_ov017_0218fcf8(int, int, int);
extern "C" void func_020d3c08(char* arg0);
struct Struct_020d3c28;
struct Struct_02013fb4;
extern "C" void func_020d3c84(Struct_020d3c28*, Struct_02013fb4*, int);
struct Struct_020d3d90;
extern "C" void* func_020d3d90(Struct_020d3d90*, int);
extern "C" void func_ov017_02191508(int arg0, void* arg1);
struct Struct_0203d028_11;
extern "C" void func_0203dafc(Struct_0203d028_11*);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
struct Struct_02010604;
extern "C" void func_02033b88(Struct_02010604*, int);
extern "C" void func_02039d48(unsigned char*);
extern "C" void func_ov017_02191fec(void* arg0, int arg1);

#if defined(jpn)
#define data_ov017_021d7a78 data_ov017_021d81c8
#define data_ov017_021d7a9c data_ov017_021d81dc
enum { Enum_ov017_021b2fac_184 = 0xa4, Enum_ov017_021b2fac_36 = 0x20, Enum_ov017_021b2fac_17 = 0xc };
#else
enum { Enum_ov017_021b2fac_184 = 0xb8, Enum_ov017_021b2fac_36 = 0x24, Enum_ov017_021b2fac_17 = 0x11 };
#endif
extern char data_ov017_021d7a78[];
extern char data_ov017_021d7a8c[];
extern char data_ov017_021d7a9c[];

// USA: func_ov017_021b2fac
// JPN: func_ov017_021b36bc
extern "C" ARM void func_ov017_021b2fac(struct Struct_ov017_021b2fac* arg0) {
    struct Struct_ov017_021b2fac_3* var0;
    void* var1;
    void* var2;
    BackgroundLoader* var3;
    Struct_ov017_021b2fac_4* var4;
    struct Struct_ov017_021b2fac_3* var5;
    unsigned char* var6;
    GameState* var7;
    void* var8;
    Struct_ov017_021b2fac_4* var9;
    SafeAllocator* var10;
    void* var11;
    struct Struct_ov017_021b2fac_3* var12;
    int var13;
    void* var14;
    unsigned int var15;
    char var16[Enum_ov017_021b2fac_184];
    char var17[0x50];
    void* var18;
    unsigned int var19;
    ObjectArchiveLoadInfo var20;
    var7 = GameState::GetInstance();
    var3 = BackgroundLoader::GetInstance();
    var8 = GetGameResources();
    var9 = (Struct_ov017_021b2fac_4*)func_0200ff1c(var7, arg0->unknown_8_);
    if (var9 == 0) {
        func_ov017_021b33d8(arg0);
        arg0->unknown_1_ = 1;
        return;
    }
    if (arg0->unknown_a_ == 0) {
        int var21;
        if (var9->unknown_150_ != 0) {
            var21 = var9->unknown_150_->unknown_56b_0_ != 0;
        } else {
            var21 = 0;
        }
        if (var21 != 0) {
            ((Object3D*)var9)->Destroy();
            var5 = var9->unknown_154_;
            ((SafeAllocator*)((char*)var5 + 4))->Reset();
            ((SafeAllocator*)((char*)var5 + 0x18))->Reset();
#if defined(jpn)
            arg0->unknown_10_ = var3->QueueLoadFile(data_ov017_021d7a78, 0);
#else
            arg0->unknown_10_ = var3->QueueLoadFileInGP2(data_ov017_021d7a78, data_ov017_021d7a8c, 0);
#endif
            arg0->unknown_a_ = 4;
        } else if (func_ov017_021b3444(arg0) != 0) {
            arg0->unknown_a_ = 1;
        } else if (func_ov017_021b38c8(arg0) != 0) {
            func_02083e28(var9->unknown_150_, 0);
            arg0->unknown_a_ = 3;
        } else {
            arg0->unknown_1_ = 1;
            return;
        }
        ((Object3D*)var9)->EnableFlag(0x200);
        return;
    }
    if (arg0->unknown_a_ == 1) {
        if (func_ov017_021b3560(arg0) != 0) {
            arg0->unknown_a_ = 2;
            func_ov017_021b3678(arg0);
        }
        return;
    }
    if (arg0->unknown_a_ == 2) {
        if (func_ov017_021b3780(arg0) != 0) {
            func_ov017_021b38c8(arg0);
            arg0->unknown_a_ = 3;
        }
        return;
    }
    if (arg0->unknown_a_ == 3) {
        if (func_ov017_021b3e14(arg0) != 0) {
            var4 = (Struct_ov017_021b2fac_4*)func_0200ff1c(var7, arg0->unknown_8_);
            if (var4->unknown_9c_ != 0) {
                var1 = GetGameResources();
                func_ov017_0218fcf8((int)var1, arg0->unknown_8_, var4->unknown_9c_);
            }
            ((Object3D*)var4)->DisableFlag(0x200);
            if (arg0->unknown_b_ & 8) {
                ((Object3D*)var4)->MakeHidden();
                arg0->unknown_b_ &= ~8;
            }
            arg0->unknown_8_ = -1;
            arg0->unknown_1_ = 1;
        }
        return;
    }
    if (arg0->unknown_a_ == 4) {
        if (var3->GetTaskStatus(arg0->unknown_10_) != 0) {
            if (var3->GetDetailedTaskStatus(arg0->unknown_10_) == 2) {
                var3->GetLoadedFileByID(arg0->unknown_10_, &var14, &var15);
                if (var14 != 0) {
                    func_020d3c08(var16);
                    func_020d3c84((Struct_020d3c28*)var16, (Struct_02013fb4*)var14, var15);
                    var13 = var9->unknown_150_ != 0 ? var9->unknown_150_->unknown_56b_0_ : 0;
                    var2 = func_020d3d90((Struct_020d3d90*)var16, var13);
                    var11 = ((SafeAllocator*)((char*)var9->unknown_154_ + 0x18))->Allocate(Enum_ov017_021b2fac_36);
                    if (var11 != 0) {
                        memcpy(var11, var2, Enum_ov017_021b2fac_36);
                        var9->unknown_1c4_ = (unsigned char*)var11;
                        func_ov017_02191508(arg0->unknown_8_, var11);
                    }
                }
            }
            var3->RemoveTask(arg0->unknown_10_);
            arg0->unknown_10_ = -1;
            var6 = var9->unknown_1c4_;
            var12 = var9->unknown_154_;
            if (var6 != 0) {
                sprintf(var17, data_ov017_021d7a9c, var6[Enum_ov017_021b2fac_17]);
                arg0->unknown_10_ = var3->QueueLoadFile(var17, (SafeAllocator*)((char*)var12 + 4));
            }
            arg0->unknown_a_ = 5;
        }
        return;
    }
    if (arg0->unknown_a_ == 5) {
        if (var3->GetTaskStatus(arg0->unknown_10_) != 0) {
            var0 = var9->unknown_154_;
            var10 = (SafeAllocator*)((char*)var0 + 4);
            if (var3->GetDetailedTaskStatus(arg0->unknown_10_) == 2) {
                var3->GetLoadedFileByID(arg0->unknown_10_, &var18, &var19);
                if (var18 != 0) {
                    func_0203dafc((Struct_0203d028_11*)&var20);
                    var20.fileData = var18;
                    var20.unk_8 = var19;
                    var20.allocator = var10;
                    func_0207df90(var0->unknown_cc_);
                    ((Object3D*)var9)->LoadFromCCHROrCMOTArchive(&var20, 0);
                    func_0207dfac(var0->unknown_cc_);
                }
            }
            ((Object3D*)var9)->SetScale(0x10a, 0x10a, 0x10a);
            func_02033b88((Struct_02010604*)var9, 0);
            ((Object3D*)var9)->DisableFlag(0x200);
            ((Object3D*)var9)->SetInheritedAlpha(0);
            func_02039d48((unsigned char*)var9);
            func_ov017_02191fec(var8, var9->unknown_4_);
            var3->RemoveTask(arg0->unknown_10_);
            arg0->unknown_10_ = -1;
            arg0->unknown_8_ = -1;
            arg0->unknown_1_ = 1;
        }
    }
}

#if defined(jpn)
#undef data_ov017_021d7a78
#undef data_ov017_021d7a9c
#endif
