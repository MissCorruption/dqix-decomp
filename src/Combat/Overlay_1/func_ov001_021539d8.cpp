#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

struct Struct_ov001_021539d8_7 {
    char unknown_0_[0x70];
};

struct Struct_ov001_021539d8_8 {
    int unknown_0_;
    void* unknown_4_;
    unsigned int unknown_8_;
    SafeAllocator* unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

struct Struct_ov001_021539d8_9 {
    unsigned int unknown_0_0_ : 1;
};

struct Struct_ov001_021539d8_10 {
    char unknown_0_[0x54];
    NSBXXInternalModel* unknown_54_;
};

struct Struct_ov001_021539d8_11 {
    unsigned short unknown_0_;
    char unknown_2_[6];
    struct Struct_ov001_021539d8_10* unknown_8_;
    struct Struct_ov001_021539d8_9* unknown_c_;
    char unknown_10_[0x34];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
    char unknown_50_[0x84];
    unsigned char unknown_d4_0_ : 1;
    char unknown_d5_[0x5b];
    unsigned int* unknown_130_;
};

struct Struct_ov001_021539d8_12 {
    int unknown_0_;
    char unknown_4_[0x4c];
    unsigned int unknown_50_;
};

struct Struct_ov001_021539d8 {
    unsigned int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    int unknown_10_;
    struct Struct_ov001_021539d8_12* unknown_14_;
    struct Struct_ov001_021539d8_11* unknown_18_;
    int unknown_1c_;
};

struct Struct_ov001_021539d8_2 {
    char unknown_0_[2];
    unsigned char unknown_2_;
#if defined(jpn)
    char unknown_3_[0xd];
#else
    char unknown1_3_;
#endif
    char unknown_4_[0x10];
};

struct Struct_ov001_021539d8_3 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
    unsigned char unknown_1_;
    short unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_[3];
    union {
        int unknown_8_;
        char unknown1_8_[0x24];
    };
    int unknown_2c_;
    unsigned char unknown_30_;
    unsigned char unknown_31_;
    char unknown_32_[2];
    struct Struct_ov001_021539d8_3* unknown_34_;
};

struct Struct_ov001_021539d8_4 {
    unsigned char unknown_0_;
    char unknown_1_[0x23];
    int unknown_24_;
    struct Struct_ov001_021539d8_4* unknown_28_;
    unsigned char unknown_2c_;
};

struct Struct_ov001_021539d8_5 {
    char unknown_0_[0x98];
    unsigned int unknown_98_;
};

struct Struct_ov001_021539d8_6 {
    char unknown_0_[0x50];
    unsigned short unknown_50_;
#if defined(jpn)
    char unknown_52_[0x7a];
#else
    char unknown1_52_[0x7e];
#endif
    struct Struct_ov001_021539d8_3* unknown_d0_;
    struct Struct_ov001_021539d8_4* unknown_d4_;
    char unknown_d8_[0x1c];
    int unknown_f4_;
    unsigned int unknown_f8_0_ : 27;
};

#if defined(jpn)
#define data_ov001_02164bb0 data_ov001_02166150
#define data_ov001_02164bb6 data_ov001_02166156
#define data_ov001_02164bc0 data_ov001_02166160
#define data_ov001_02164bc5 data_ov001_02166165
#define data_ov001_02164bc8 data_ov001_02166168
#define data_ov001_02164bcb data_ov001_0216616b
#define PAIR_TABLES_021539d8 0x27c
#else
#define PAIR_TABLES_021539d8 0x2cc
#endif
extern char data_ov001_02164bb0[];
extern char data_ov001_02164bb6[];
extern char data_ov001_02164bc0[];
extern char data_ov001_02164bc5[];
extern char data_ov001_02164bc8[];
extern char data_ov001_02164bcb[];

extern "C" {
struct Struct_ov001_021539d8_5* func_0203cf4c(void);

void* func_0202ae18(void);
int func_0202c508(void* arg0);
unsigned char func_020100b0(GameState* arg0);
int func_020100a8(GameState* arg0);
void func_0207df50(struct Struct_ov001_021539d8_7* arg0);
void func_0207df90(struct Struct_ov001_021539d8_7* arg0);
void func_0207dfac(struct Struct_ov001_021539d8_7* arg0);
void func_ov001_0215ab54(int arg0, int arg1, int arg2);
struct Struct_ov001_021539d8* func_0203df78(void* arg0, int arg1);
int func_0203dfdc(void* arg0, int arg1);
void func_0200fd38(GameState* arg0, int arg1, struct Struct_ov001_021539d8_11* arg2);
SafeAllocator* func_ov001_0215aab8(void);
void _ZN8Object3D10InitializeEv(struct Struct_ov001_021539d8_11* arg0);
void _ZN8Object3D11MakeVisibleEv(struct Struct_ov001_021539d8_11* arg0);
void _ZN8Object3D10MakeHiddenEv(struct Struct_ov001_021539d8_11* arg0);
void _ZN8Object3D10EnableFlagEi(struct Struct_ov001_021539d8_11* arg0, int arg1);
void _ZN8Object3D18LoadFromCHRArchiveEP21ObjectArchiveLoadInfo(struct Struct_ov001_021539d8_11* arg0, struct Struct_ov001_021539d8_8* arg1);
void _ZN8Object3D25LoadFromCCHROrCMOTArchiveEP21ObjectArchiveLoadInfoPFiPN4BCFG15AnimationRecordEE(struct Struct_ov001_021539d8_11* arg0, struct Struct_ov001_021539d8_8* arg1, void* arg2);
void _ZN8Object3D8SetScaleEiii(struct Struct_ov001_021539d8_11* arg0, int arg1, int arg2, int arg3);
void _ZN8Object3D21MaybeSetBCFGAnimationEii(struct Struct_ov001_021539d8_11* arg0, int arg1, int arg2);
void _ZN8Object3D16SetModelFromFileEP13SafeAllocatorPvjN7Model3D18TextureStagingModeE(struct Struct_ov001_021539d8_11* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3, int arg4);
void func_02012fe4(void);
void func_020404c0(struct Struct_ov001_021539d8* arg0);
void func_0206bf2c(void* arg0);
void func_0203c794(struct Struct_ov001_021539d8_12* arg0);
char* strstr(const char* arg0, const char* arg1);
void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
int sprintf(char* arg0, const char* arg1, ...);
void func_02040530(struct Struct_ov001_021539d8* arg0, void* arg1);
void func_02040520(struct Struct_ov001_021539d8* arg0, struct Struct_ov001_021539d8_2* arg1);
void func_0203f02c(struct Struct_ov001_021539d8_12* arg0, char* arg1, SafeAllocator* arg2, struct Struct_ov001_021539d8_7* arg3, void* arg4, unsigned int arg5);
void func_0203f138(struct Struct_ov001_021539d8_12* arg0, int arg1);
void func_020408c8(struct Struct_ov001_021539d8* arg0, int arg1, int arg2, int arg3);
int func_0203e03c(void* arg0);
void func_0203dd10(void* arg0, int arg1, struct Struct_ov001_021539d8* arg2);
int _Z26FindFilesInNarcBySubstringPKvPKcPS0_Pjj(void* arg0, const char* arg1, void** arg2, unsigned int* arg3, unsigned int arg4);
void* _Z36DecompressLZ77FileIntoAllocatedSpaceR13SafeAllocatorPKvRj(SafeAllocator* arg0, void* arg1, unsigned int* arg2);
void NSBXX_Model_SetPolygonID(NSBXXInternalModel* model, int id);
void __clear(unsigned char* arg0, int arg1);
}

extern "C" int func_0203d004(void* arg0);

static inline void inline_ov001_021539d8(struct Struct_ov001_021539d8* arg0, char* arg1, SafeAllocator* arg2,
                                        struct Struct_ov001_021539d8_7* arg3, void* arg4, unsigned int arg5) {
    if (arg0->unknown_14_ != 0) {
        func_0203f02c(arg0->unknown_14_, arg1, arg2, arg3, arg4, arg5);
    }
}

static inline void inline_ov001_021539d8_2(struct Struct_ov001_021539d8* arg0, int arg1) {
    if (arg0->unknown_14_ != 0) {
        func_0203f138(arg0->unknown_14_, arg1);
    }
}

// USA: func_ov001_021539d8
extern "C" ARM void func_ov001_021539d8(struct Struct_ov001_021539d8_6* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    struct Struct_ov001_021539d8_5* var2 = func_0203cf4c();
    char* var3 = (char*)GetGameResources();
    void* var4 = func_0202ae18();
    struct Struct_ov001_021539d8_3* var5;
    struct Struct_ov001_021539d8_4* var6;
    bool var7;
    LightingManager* var8;
    unsigned int var9;
    unsigned char* var10;
    unsigned char var11;
    unsigned char var12;
    unsigned char var13;
    SafeAllocator* var14;
    void* var15;
    unsigned char var16;
    NSBXXMesh* var17;
    NSBXXInternalModel* var18;
    struct Struct_ov001_021539d8* var19;
    struct Struct_ov001_021539d8_2* var20;
    struct Struct_ov001_021539d8_7* var21;

    for (var5 = arg0->unknown_d0_; var5 != 0; var5 = var5->unknown_34_) {
        if (var5->unknown_0_0_ == 1) {
            if (func_0202c508(var4) == 0 || !(arg0->unknown_f8_0_ & 0x10)) {
                int var22 = func_020100b0(var0);
                if (var22 != 0) {
                    struct Struct_ov001_021539d8_3* var23;
                    for (var23 = arg0->unknown_d0_; var23 != 0; var23 = var23->unknown_34_) {
                        if (var23->unknown_0_0_ >= 0xb && var23->unknown_0_0_ <= 0xd && var23->unknown_2_ == var22) {
                            var23->unknown_2_ = 0;
                            var23->unknown_0_4_ = 0;
                            break;
                        }
                    }
                }
            }
            break;
        }
    }

    var7 = false;
    var5 = arg0->unknown_d0_;
    while (var5 != 0) {

        if (var5->unknown_31_ != 0) {
            var5 = var5->unknown_34_;
            continue;
        }

        var21 = &((struct Struct_ov001_021539d8_7*)(var3 + PAIR_TABLES_021539d8))[27];
        if (var5->unknown_30_ == 1) {
            var21 = &((struct Struct_ov001_021539d8_7*)(var3 + PAIR_TABLES_021539d8))[7];
            if (!var7) {
                if ((arg0->unknown_50_ & 4) || (arg0->unknown_50_ & 1)) {
                    func_0207df50(var21);
                    var7 = true;
                }
            }
        }

        switch (var5->unknown_0_0_) {
        case 0: {
            struct Struct_ov001_021539d8_11* var24 = (struct Struct_ov001_021539d8_11*)var0->GetPartyMemberByIndex(0);
            if (var24 == 0) {
                break;
            }
            if ((arg0->unknown_f8_0_ & 0x10) || !(*var24->unknown_130_ & 1)) {
                func_ov001_0215ab54(4, 0, var5->unknown_1_);
            } else if (func_0202c508(var4) != 0) {
                func_ov001_0215ab54(5, func_020100b0(var0), var5->unknown_1_);
            } else {
                int var25 = func_020100a8(var0);
                int var26;
                for (var26 = 3; var26 > 0; var26--) {
                    if (var25 != var26) {
                        var24 = (struct Struct_ov001_021539d8_11*)var0->GetPartyMemberByIndex(var26);
                        if (var24 != 0 && (var24->unknown_0_ & 0x1000) && !(*var24->unknown_130_ & 1)) {
                            func_ov001_0215ab54(5, var26, var5->unknown_1_);
                            break;
                        }
                    }
                }
                if (var26 == 0) {
                    break;
                }
            }
            _ZN8Object3D11MakeVisibleEv(var24);
            break;
        }
        case 1:
            func_ov001_0215ab54(5, func_020100b0(var0), var5->unknown_1_);
            break;
        case 9:
        case 11:
        case 12:
        case 13:
            func_ov001_0215ab54(5, var5->unknown_2_, var5->unknown_1_);
            break;
        case 10:
            func_ov001_0215ab54(1, var5->unknown_2_, var5->unknown_1_);
            break;
        case 4: {
            struct Struct_ov001_021539d8* var27 = func_0203df78(var2, var5->unknown_8_);
            if (var27 != 0 && var27->unknown_18_ != 0) {
                var27->unknown_18_->unknown_d4_0_ = 1;
                func_0200fd38(var0, var5->unknown_2_, var27->unknown_18_);
                var27->unknown_0_ |= 0x10000;
                func_ov001_0215ab54(6, func_0203dfdc(var2, var5->unknown_8_), var5->unknown_1_);
            }
            break;
        }
        case 2: {
            char var28[0x50];
            struct Struct_ov001_021539d8_8 var29;
            void* var30;
            unsigned int var31;
            int var32;
            SafeAllocator* var33;

            if (var1->GetDetailedTaskStatus(var5->unknown_2c_) != 2) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            var32 = 0;
            if (var1->GetTaskFilename(var5->unknown_2c_, var28)) {
                if (strstr(var28, data_ov001_02164bb0) != 0 || strstr(var28, data_ov001_02164bb6) != 0) {
                    var32 = 1;
                }
            }
            var33 = func_ov001_0215aab8();
            var1->GetLoadedFileByID(var5->unknown_2c_, &var30, &var31);
            struct Struct_ov001_021539d8_11* var34 = (struct Struct_ov001_021539d8_11*)var33->Allocate(0xac);
            if (var34 == 0) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            func_0207df90(var21);
            _ZN8Object3D10InitializeEv(var34);
            var29.unknown_c_ = var33;
            var29.unknown_4_ = var30;
            var29.unknown_8_ = var31;
            var29.unknown_10_ = 1;
            if (var32 == 0) {
                _ZN8Object3D18LoadFromCHRArchiveEP21ObjectArchiveLoadInfo(var34, &var29);
            } else if (var32 == 1) {
                _ZN8Object3D25LoadFromCCHROrCMOTArchiveEP21ObjectArchiveLoadInfoPFiPN4BCFG15AnimationRecordEE(var34, &var29, 0);
            }
            func_0207dfac(var21);
            _ZN8Object3D8SetScaleEiii(var34, 0x10a, 0x10a, 0x10a);
            _ZN8Object3D21MaybeSetBCFGAnimationEii(var34, 0, 0);
            func_0200fd38(var0, var5->unknown_2_, var34);
            if (var5->unknown_4_ & 1) {
                func_02012fe4();
                var8 = LightingManager::GetInstance();
                var18 = var34->unknown_8_->unknown_54_;
                NSBXXNameList* var35 = var18->GetMeshListSafe();
                unsigned int var36;
                unsigned int* var37;
                int var38;

                for (var9 = 0; var9 < var18->numMeshes_; var9++) {
                    unsigned char var39;
                    void* var40;

                    if (var35 != NULL && (var40 = var35->GetEntryv3Safe(var9)))
                        var17 = (NSBXXMesh*)var35->GetEntryFromPtrOffset(var40);
                    else
                        var17 = NULL;

                    if (!(var17->unk_4 & 2))
                        continue;

                    var10 = (unsigned char*)var17 + var17->gpuCommandsOffset_;
                    var36 = 0;
                    while (var36 < var17->gpuCommandsLength_) {
                        var39 = var10[var36];
                        var11 = var10[var36 + 1];
                        var12 = var10[var36 + 2];
                        var13 = var10[var36 + 3];
                        var36 += 4;

                        int var41 = 0;
                        var37 = (unsigned int*)(var10 + var36);

                        var38 = 0;

                        if (var8->GetFifoCommandData(var39, &var41))
                            var37[var38] = var8->ColorTransformTintBrightnessContrast(var37[var38]);
                        var38 += var41;

                        if (var8->GetFifoCommandData(var11, &var41))
                            var37[var38] = var8->ColorTransformTintBrightnessContrast(var37[var38]);
                        var38 += var41;

                        if (var8->GetFifoCommandData(var12, &var41))
                            var37[var38] = var8->ColorTransformTintBrightnessContrast(var37[var38]);
                        var38 += var41;

                        if (var8->GetFifoCommandData(var13, &var41))
                            var37[var38] = var8->ColorTransformTintBrightnessContrast(var37[var38]);
                        var38 += var41;

                        var36 += 4 * var38;
                    }
                }
            }
            func_ov001_0215ab54(1, var5->unknown_2_, var5->unknown_1_);
            var1->RemoveTask(var5->unknown_2c_);
            var5->unknown_31_ = 1;
            break;
        }
        case 5: {
            struct Struct_ov001_021539d8* var42 = func_0203df78(var2, var5->unknown_8_);
            if (var42 != 0 && var42->unknown_14_ != 0) {
                var42->unknown_0_ |= 0x10000;
                func_ov001_0215ab54(2, func_0203dfdc(var2, var5->unknown_8_), var5->unknown_1_);
            }
            break;
        }
        case 3: {
            void* var43;
            unsigned int var44;
            int var45;
            struct Struct_ov001_021539d8_12* var46;

            if (var1->GetDetailedTaskStatus(var5->unknown_2c_) != 2) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            var14 = func_ov001_0215aab8();
            var1->GetLoadedFileByID(var5->unknown_2c_, &var43, &var44);
            var19 = (struct Struct_ov001_021539d8*)var14->Allocate(0x20);
            var15 = var14->Allocate(0x78);
            var20 = (struct Struct_ov001_021539d8_2*)var14->Allocate(sizeof(struct Struct_ov001_021539d8_2));
            var46 = (struct Struct_ov001_021539d8_12*)var14->Allocate(0x9c);
            if (var19 == 0 || var20 == 0 || var15 == 0 || var46 == 0) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            func_020404c0(var19);
            func_0206bf2c(var15);
            func_0203c794(var46);
            var20->unknown_2_ = 3;
            if (strstr(var5->unknown1_8_, data_ov001_02164bc0) != 0) {
                var16 = 5;
                if (strstr(var5->unknown1_8_, data_ov001_02164bc5) != 0) {
                    var16 = 7;
                    var46->unknown_50_ |= 8;
                }
                memcpy(var20->unknown_4_, var5->unknown1_8_ + 9, var16);
                if (var16 < 7u) {
                    var20->unknown_4_[var16] = 0;
                }
            } else {
                sprintf(var20->unknown_4_, data_ov001_02164bc8, var5->unknown1_8_);
            }
            var19->unknown_14_ = var46;
            func_02040530(var19, var15);
            func_02040520(var19, var20);
            var45 = func_0203d004(var2);
            if (var19->unknown_14_ != 0) {
                var19->unknown_14_->unknown_0_ = var45;
            }
            inline_ov001_021539d8(var19, var5->unknown1_8_ + 9, var14, var21, var43, var44);
            inline_ov001_021539d8_2(var19, 1);
            func_020408c8(var19, 0x8f, 0x8f, 0x8f);
            var5->unknown_2_ = func_0203e03c(var2);
            if (var5->unknown_2_ != -1) {
                func_0203dd10(var2, var5->unknown_2_, var19);
                var19->unknown_0_ |= 0x10000;
                func_ov001_0215ab54(2, var5->unknown_2_, var5->unknown_1_);
                var1->RemoveTask(var5->unknown_2c_);
                var5->unknown_31_ = 1;
            }
            break;
        }
        case 6: {
            char var47[0x50];
            struct Struct_ov001_021539d8_8 var48;
            void* var49;
            unsigned int var50;
            unsigned int var51;
            void* var52;
            unsigned int var53;
            SafeAllocator* var54;
            struct Struct_ov001_021539d8_11* var55;
            void* var56;
            int var57;

            if (var1->GetDetailedTaskStatus(var5->unknown_2c_) != 2) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            var54 = func_ov001_0215aab8();
            var1->GetLoadedFileByID(var5->unknown_2c_, &var49, &var50);
            var55 = (struct Struct_ov001_021539d8_11*)var54->Allocate(0xac);
            if (var55 == 0) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            var57 = 0;
            if (var1->GetTaskFilename(var5->unknown_2c_, var47)) {
                if (strstr(var47, data_ov001_02164bb0) != 0 || strstr(var47, data_ov001_02164bb6) != 0) {
                    var57 = 1;
                }
            }
            if (_Z26FindFilesInNarcBySubstringPKvPKcPS0_Pjj(var49, data_ov001_02164bcb, &var52, &var51, 1) == 0) {
                break;
            }
            var56 = _Z36DecompressLZ77FileIntoAllocatedSpaceR13SafeAllocatorPKvRj(var54, var52, &var53);
            if (var56 == 0) {
                break;
            }
            func_0207df90(var21);
            _ZN8Object3D10InitializeEv(var55);
            var48.unknown_4_ = var56;
            var48.unknown_c_ = var54;
            var48.unknown_8_ = var53;
            var48.unknown_10_ = 1;
            if (var57 == 0) {
                _ZN8Object3D18LoadFromCHRArchiveEP21ObjectArchiveLoadInfo(var55, &var48);
            } else if (var57 == 1) {
                _ZN8Object3D25LoadFromCCHROrCMOTArchiveEP21ObjectArchiveLoadInfoPFiPN4BCFG15AnimationRecordEE(var55, &var48, 0);
            }
            func_0207dfac(var21);
            _ZN8Object3D8SetScaleEiii(var55, 0x10a, 0x10a, 0x10a);
            _ZN8Object3D21MaybeSetBCFGAnimationEii(var55, 0, 0);
            func_0200fd38(var0, var5->unknown_2_, var55);
            func_ov001_0215ab54(1, var5->unknown_2_, var5->unknown_1_);
            var1->RemoveTask(var5->unknown_2c_);
            var5->unknown_31_ = 1;
            break;
        }
        case 7: {
            void* var58;
            unsigned int var59;
            SafeAllocator* var60;
            void* var61;

            if (var1->GetDetailedTaskStatus(var5->unknown_2c_) != 2) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            var60 = func_ov001_0215aab8();
            var1->GetLoadedFileByID(var5->unknown_2c_, &var58, &var59);
            struct Struct_ov001_021539d8_11* var62 = (struct Struct_ov001_021539d8_11*)var60->Allocate(0xac);
            if (var62 == 0) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            var61 = var60->Allocate(var59);
            memcpy(var61, var58, var59);
            func_0207df90(var21);
            _ZN8Object3D10InitializeEv(var62);
            _ZN8Object3D16SetModelFromFileEP13SafeAllocatorPvjN7Model3D18TextureStagingModeE(var62, var60, var61, var59, 0);
            func_0207dfac(var21);
            _ZN8Object3D8SetScaleEiii(var62, 0x10a, 0x10a, 0x10a);
            _ZN8Object3D21MaybeSetBCFGAnimationEii(var62, 0, 0);
            func_0200fd38(var0, var5->unknown_2_, var62);
            func_ov001_0215ab54(1, var5->unknown_2_, var5->unknown_1_);
            var1->RemoveTask(var5->unknown_2c_);
            var5->unknown_31_ = 1;
            break;
        }
        case 8: {
            struct Struct_ov001_021539d8_8 var63;
            void* var64;
            unsigned int var65;
            SafeAllocator* var66;

            if (var1->GetDetailedTaskStatus(var5->unknown_2c_) != 2) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            var66 = func_ov001_0215aab8();
            var1->GetLoadedFileByID(var5->unknown_2c_, &var64, &var65);
            struct Struct_ov001_021539d8_11* var67 = (struct Struct_ov001_021539d8_11*)var66->Allocate(0xac);
            if (var67 == 0) {
                var1->RemoveTask(var5->unknown_2c_);
                break;
            }
            func_0207df90(var21);
            _ZN8Object3D10InitializeEv(var67);
            var63.unknown_4_ = var64;
            var63.unknown_8_ = var65;
            var63.unknown_10_ = 1;
            var63.unknown_c_ = var66;
            _ZN8Object3D18LoadFromCHRArchiveEP21ObjectArchiveLoadInfo(var67, &var63);
            func_0207dfac(var21);
            NSBXX_Model_SetPolygonID(var67->unknown_8_->unknown_54_, 0x3d);
            var67->unknown_44_ = 0;
            var67->unknown_48_ = -0xa000;
            var67->unknown_4c_ = 0x1000;
            _ZN8Object3D21MaybeSetBCFGAnimationEii(var67, 0, 0);
            func_0200fd38(var0, var5->unknown_2_, var67);
            _ZN8Object3D10MakeHiddenEv(var67);
            func_ov001_0215ab54(1, var5->unknown_2_, var5->unknown_1_);
            var1->RemoveTask(var5->unknown_2c_);
            var5->unknown_31_ = 1;
            break;
        }
        }
        var5 = var5->unknown_34_;
    }

    var6 = arg0->unknown_d4_;
    while (var6 != 0) {
        if (var6->unknown_2c_ != 0 || var6->unknown_24_ < 0) {
            var6 = var6->unknown_28_;
            continue;
        }
        if (var1->GetDetailedTaskStatus(var6->unknown_24_) == 2) {
            struct Struct_ov001_021539d8_3* var68 = arg0->unknown_d0_;
            while (var68 != 0) {
                if (var68->unknown_1_ == var6->unknown_0_ && var68->unknown_0_0_ != 3 && var68->unknown_0_0_ != 5) {
                    struct Struct_ov001_021539d8_11* var69 = (struct Struct_ov001_021539d8_11*)var0->GetGameObjectByIndex(var68->unknown_2_);
                    if (var69 != 0) {
                        struct Struct_ov001_021539d8_8 var70;
                        void* var71;
                        unsigned int var72;
                        SafeAllocator* var73 = func_ov001_0215aab8();
                        int var74;

                        var1->GetLoadedFileByID(var6->unknown_24_, &var71, &var72);
                        var74 = 0;
                        if (var69->unknown_c_ != 0) {
                            var74 = var69->unknown_c_->unknown_0_0_;
                        }
                        var70.unknown_c_ = var73;
                        var70.unknown_4_ = var71;
                        var70.unknown_8_ = var72;
                        var70.unknown_10_ = 1;
                        var70.unknown_1c_ = 3;
                        if (var74 == 0) {
                            _ZN8Object3D18LoadFromCHRArchiveEP21ObjectArchiveLoadInfo(var69, &var70);
                        } else if (var74 == 1) {
                            _ZN8Object3D25LoadFromCCHROrCMOTArchiveEP21ObjectArchiveLoadInfoPFiPN4BCFG15AnimationRecordEE(var69, &var70, 0);
                        }
                        _ZN8Object3D21MaybeSetBCFGAnimationEii(var69, 0, 0);
                        break;
                    }
                }
                var68 = var68->unknown_34_;
                var6->unknown_2c_ = 1;
            }
        }
        var1->RemoveTask(var6->unknown_24_);
        var6 = var6->unknown_28_;
    }

    if (arg0->unknown_f4_ > -1) {
        var1->GetDetailedTaskStatus(arg0->unknown_f4_);
        var1->RemoveTask(arg0->unknown_f4_);
    }

    if (arg0->unknown_f8_0_ != 0) {
        if (arg0->unknown_f8_0_ & 1) {
            SetFlags04((GameResources*)var3, 8);
        }
        if (arg0->unknown_f8_0_ & 2) {
            SetFlags04((GameResources*)var3, 0x10);
        }
        if (arg0->unknown_f8_0_ & 4) {
            unsigned char var75[4];
            struct Struct_ov001_021539d8_3* var76;
            int var77;

            __clear(var75, 4);
            for (var76 = arg0->unknown_d0_; var76 != 0; var76 = var76->unknown_34_) {
                if (var76->unknown_0_0_ == 0 || var76->unknown_0_0_ == 1 || var76->unknown_0_0_ == 9) {
                    var75[var76->unknown_2_] = 1;
                }
            }
            for (var77 = 0; var77 < 4; var77++) {
                if (var75[var77] == 0) {
                    struct Struct_ov001_021539d8_11* var78 = (struct Struct_ov001_021539d8_11*)var0->GetGameObjectByIndex(var77);
                    if (var78 != 0) {
                        _ZN8Object3D10EnableFlagEi(var78, 1);
                    }
                }
            }
        }
        if (arg0->unknown_f8_0_ & 8) {
            SetFlags04((GameResources*)var3, 0x400);
        }
        if (arg0->unknown_f8_0_ & 0x20) {
            func_0203cf4c()->unknown_98_ |= 2;
        }
    }
}
