#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov025_021eb46c {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

struct Struct_ov025_021eb46c_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
};

struct Struct_ov025_021eb46c_3 {
    char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};

struct Struct_ov025_021eb46c_4 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_ov025_021eb46c_3* unknown_150_;
};

struct Struct_ov025_021eb46c_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    char unknown_6_[2];
    Struct_ov025_021eb46c_5* unknown_8_;
};

struct Struct_ov025_021e9778 {
    char unknown_0_[0x10];
    SafeAllocator* unknown_10_[8];
    unsigned char unknown_30_;
    char unknown_31_[0x1c4 - 0x31];
    unsigned int unknown_1c4_;
    int unknown_1c8_;
    int unknown_1cc_;
    int unknown_1d0_;
    int unknown_1d4_;
    Struct_ov025_021eb46c_5* unknown_1d8_;
};

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" void func_02072c9c(int arg0, char* arg1);
struct Struct_ov000_0215440c_2;
extern "C" Struct_ov025_021eb46c* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
struct Struct_ov025_021e267c_3;
struct Struct_ov025_021e267c_2;
extern "C" void func_ov025_021e8bac(Struct_ov025_021e267c_2*, Struct_ov025_021e267c_3*);

extern char data_ov025_021ef8fc[];
extern char data_ov025_021ef916[];
extern char data_ov025_021ef91f[];
extern Struct_ov025_021e9778* data_ov025_021ef994;

// USA: func_ov025_021eb46c
extern "C" ARM int func_ov025_021eb46c(Struct_ov025_021e9778* arg0) {
    char var0[20];
    char var1[20];
    ObjectArchiveLoadInfo var2;
    void* var3;
    unsigned int var4;

    if (arg0->unknown_1c4_ & 2) {
        BackgroundLoader* var5 = BackgroundLoader::GetInstance();
        int var6;
        SafeAllocator* var7 = arg0->unknown_10_[arg0->unknown_30_];

        if (arg0->unknown_1c8_ == 0) {
            Struct_ov025_021eb46c_2* var8 = (Struct_ov025_021eb46c_2*)func_ov000_02160f20(func_ov000_02160130());
            arg0->unknown_1cc_ = -1;
            if (var8->unknown_8_ == 1 && func_ov000_02160094((Struct_ov000_0215440c_2*)var8, 0) != NULL) {
                int var9 = func_ov000_02160094((Struct_ov000_0215440c_2*)var8, 0)->unknown_20_;
                Struct_ov025_021eb46c_4* var10 = (Struct_ov025_021eb46c_4*)func_0200ff1c(GameState::GetInstance(), var9);
                bool var11;
                if (var9 >= 0 && var9 <= 3) {
                    var11 = true;
                } else {
                    var11 = false;
                }
                if (var11 && var10 != NULL) {
                    int var12 = var10->unknown_150_ != NULL ? var10->unknown_150_->unknown_56b_0_ : 0;
                    if (var12 == 1) {
                        sprintf(var1, data_ov025_021ef8fc);
                        arg0->unknown_1cc_ = var5->QueueLoadFile(var1, var7);
                    } else {
                        func_02072c9c(var9, var0);
                        sprintf(var1, data_ov025_021ef916, var0);
                        arg0->unknown_1cc_ = var5->QueueLoadFileInGP2(data_ov025_021ef91f, var1, var7);
                    }
                }
            }
            if (arg0->unknown_1cc_ < 0) {
                arg0->unknown_1c4_ &= ~2;
                return 0;
            }
            arg0->unknown_1c8_++;
        } else if (var5->GetTaskStatus(arg0->unknown_1cc_) != 0) {
            var5->GetLoadedFileByID(arg0->unknown_1cc_, &var3, &var4);
            if (var3 != NULL) {
                void* var13 = func_ov000_02160f20(func_ov000_02160130());
                if (func_ov000_02160094((Struct_ov000_0215440c_2*)var13, 0) != NULL) {
                    var6 = func_ov000_02160094((Struct_ov000_0215440c_2*)var13, 0)->unknown_20_;
                    GameObject* var14 = func_0200ff1c(GameState::GetInstance(), var6);
                    if (var14 != NULL) {
                        Struct_ov025_021eb46c_5* var15 = (Struct_ov025_021eb46c_5*)var7->Allocate(sizeof(Struct_ov025_021eb46c_5));
                        if (var15 != NULL) {
                            var2.unk_0 = 0;
                            var2.fileData = var3;
                            var2.unk_8 = var4;
                            var2.unk_10 = 0;
                            var2.unk_14 = 0;
                            var2.unk_18 = 0;
                            var2.packageID = 0;
                            var2.allocator = var7;
                            var2.packageID = data_ov025_021ef994->unknown_30_ + 4;
                            var14->obj3D_.LoadFromCCHROrCMOTArchive(&var2, NULL);
                            var15->unknown_0_ = 0;
                            var15->unknown_2_ = var6;
                            var15->unknown_4_ = var2.packageID;
                            func_ov025_021e8bac((Struct_ov025_021e267c_2*)arg0, (Struct_ov025_021e267c_3*)var15);
                        }
                    }
                }
            }
            var5->RemoveTask(arg0->unknown_1cc_);
            memset(&arg0->unknown_1c8_, 0, 0x10);
            arg0->unknown_1c4_ &= ~2;
            return 0;
        }
        return 1;
    }
    return 0;
}
