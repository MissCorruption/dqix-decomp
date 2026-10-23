#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <GameState/GameState.h>
#include <Resource/IndexedResourceEntry.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define data_ov000_02183aa5 data_ov000_02184bd8
#define data_ov000_02183abe data_ov000_02184bf1
#define data_ov000_02183014 data_ov000_021840cc
enum { Enum_ov000_02166e5c_724 = 0x2c8 };
#else
enum { Enum_ov000_02166e5c_724 = 0x2d4 };
#endif

extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
void* LoadFileIntoMemory(const char* path, void* buffer, unsigned int* outLength);
unsigned int FindFilesInNarcBySubstring(const void* narcBuffer, const char* substr, const void** pOutFilePtrs, unsigned int* pOutFileSizes, unsigned int maxOutputs);
struct Struct_020545b8;
struct Struct_02013fb4;
struct Struct_0203d028_11 { int unknown_0_[8]; };
union Struct_ov000_02166e5c_9 { Struct_0203d028_11 unknown_0_; ObjectArchiveLoadInfo unknown1_0_; };
struct Struct_ov000_02166e5c_10 { char unknown_0_[0x70]; };
struct Struct_02053da0 { unsigned char unknown_0_[0x578]; };
struct Struct_02000c9c_34 { unsigned char unknown_0_[0x70]; };
struct Struct_ov000_02166e5c {
#if defined(jpn)
    char unknown_0_[0x21c];
    unsigned char* unknown_2a0_;
    char unknown_220_[0x5924 - 0x220];
#else
    char unknown1_0_[0x2a0];
    unsigned char* unknown_2a0_;
    char unknown_2a4_[0x5734 - 0x2a4];
#endif
    Struct_02053da0 unknown_5734_;
    Struct_02000c9c_34 unknown_5cac_;
};
struct Struct_ov000_02166e5c_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov000_02166e5c_3 {
#if defined(jpn)
    char unknown_0_[0xb];
#else
    char unknown1_0_[0x10];
#endif
    unsigned char unknown_10_0_ : 3;
    unsigned char unknown_10_3_ : 5;
    unsigned char unknown_11_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    Struct_ov000_02166e5c_2 unknown_14_[3];
};
#if defined(jpn)
struct Struct_ov000_02166e5c_4 { unsigned char unknown_0_[0xa4]; };
#else
struct Struct_ov000_02166e5c_4 { unsigned char unknown_0_[0xb8]; };
#endif
struct Struct_ov000_02166e5c_5 {
    unsigned int unknown_0_0_ : 32;
    unsigned short unknown_4_0_ : 7;
    unsigned short unknown_4_7_ : 9;
    unsigned short unknown_6_;
    Struct_ov000_02166e5c_2 unknown_8_[3];
};
struct Struct_ov000_02166e5c_6 {
    char unknown_0_[0x3c];
    char unknown_3c_[0x16c - 0x3c];
    unsigned short unknown_16c_[0xd];
    unsigned char unknown_186_[0x56a - 0x186];
    unsigned char unknown_56a_;
    unsigned char unknown_56b_0_ : 4;
    unsigned char unknown_56b_4_ : 4;
#if defined(jpn)
    unsigned char unknown_56c_[0x8b4 - 0x56c];
#else
    unsigned char unknown1_56c_[0x94c - 0x56c];
#endif
    int unknown_94c_;
};
struct Struct_ov000_02166e5c_7 {
    Object3D unknown_0_;
    char unknown_ac_[0xc2 - 0xac];
    unsigned char unknown_c2_;
    char unknown_c3_[0x130 - 0xc3];
    PrimaryCombatStats* unknown_130_;
    BaseCombatStats* unknown_134_;
    char* unknown_138_;
#if defined(jpn)
    char unknown_13c_[0x144 - 0x13c];
#else
    char unknown1_13c_[0x150 - 0x13c];
#endif
    Struct_ov000_02166e5c_6* unknown_150_;
};
struct Struct_ov000_02166e5c_8 {
    char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};
struct Struct_ov000_02183014 { unsigned char unknown_0_[4]; };

extern "C" void func_020545b8(Struct_020545b8*);
struct Struct_0203d028;
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_0207df90(char*);
extern "C" void func_0207dfac(char*);
extern "C" void func_0203dafc(Struct_0203d028_11*);
struct Struct_02054664;
extern "C" void func_02054664(Struct_02054664*);
extern "C" void func_02053da0(char*, Struct_02053da0*);
extern "C" void func_02049c88(Struct_ov000_02166e5c_7*, Struct_02000c9c_34*);
extern "C" void func_ov000_0216d1c4(int, Struct_02013fb4*, int, int*);
extern "C" void func_ov000_02165480(void*, int);
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" void func_02053c74(char*, int);
extern "C" Struct_ov000_02166e5c_6* func_02053c6c(unsigned char*);
extern "C" void func_020d3c08(char*);
struct Struct_02061c04_12;
extern "C" void func_020d3c28(Struct_02061c04_12*);
struct Struct_020d3d90;
extern "C" Struct_ov000_02166e5c_3* func_020d3d90(Struct_020d3d90*, int);
extern "C" int sprintf(char*, const char*, ...);
extern "C" void func_02083cbc(Struct_ov000_02166e5c_6*, Struct_ov000_02166e5c_5*, void*);
extern "C" void func_02083e28(Struct_ov000_02166e5c_6*, int);
extern "C" void func_02083ca0(unsigned char*, int);
extern "C" void func_02083c18(char*);
extern "C" void func_02083b60(unsigned char*, int);
extern "C" void func_020a35cc(unsigned char*, unsigned char);
struct Struct_02010604;
extern "C" void func_02033b88(Struct_02010604*, int);
struct Struct_02018300_3;
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" void func_0208936c(char*, char*, char*);
extern "C" void func_020114c0(char*, int, void*);
extern "C" void func_ov000_02160fa8(void*, int);
extern const char data_ov000_02183aa5[], data_ov000_021839e2[], data_ov000_02183abe[];
extern const char data_020ef078[];
extern const Struct_ov000_02183014 data_ov000_02183014;

// USA: func_ov000_02166e5c
extern "C" ARM void func_ov000_02166e5c(Struct_ov000_02166e5c* arg0) {
    Struct_ov000_02166e5c_10* var0;
    GameState* var1 = GameState::GetInstance();
    GameResources* var2 = GetGameResources();
    SafeAllocator* var3 = &var2->allocator_array_38[3];
    var0 = (Struct_ov000_02166e5c_10*)var2->unknown_2cc_;
#if defined(jpn)
    Struct_ov000_02166e5c_10* var4 = &var0[3];
#define blocks_3 (*var4)
#else
#define blocks_3 var0[3]
#endif
    func_020545b8((Struct_020545b8*)func_ov017_021a11f4(var2, 2));
    var3->Reset();
    func_0207df50((Struct_0203d028*)&blocks_3);
    func_0207df90(blocks_3.unknown_0_);
    BackgroundLoader::AddLockGlobal();
    unsigned int var5;
    if (!LoadFileIntoMemory(data_ov000_02183aa5, data_0211e33c, &var5)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    Struct_ov000_02166e5c_7* var6 = (Struct_ov000_02166e5c_7*)var3->Allocate(Enum_ov000_02166e5c_724);
    if (!var6) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    Struct_ov000_02166e5c_9 var7;
    func_0203dafc(&var7.unknown_0_);
    var7.unknown1_0_.fileData = data_0211e33c;
    var7.unknown1_0_.unk_8 = var5;
    var7.unknown1_0_.allocator = var3;
    var7.unknown1_0_.unk_10 = 1;
    func_02054664((Struct_02054664*)var6);
    if (!var6->unknown_0_.LoadFromCCHROrCMOTArchive(&var7.unknown1_0_, 0)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    var6->unknown_0_.SetScale(0x10a, 0x10a, 0x10a);
    func_02053da0((char*)var6, &arg0->unknown_5734_);
    func_02049c88(var6, &arg0->unknown_5cac_);
    const void* var8;
    unsigned int var9;
    if (FindFilesInNarcBySubstring(data_0211e33c, data_ov000_021839e2, &var8, &var9, 1)) {
        int var10 = 0;
        func_ov000_0216d1c4((int)var3, (Struct_02013fb4*)var8, var9, &var10);
        func_ov000_02165480(var6, var10);
    }
    if (!LoadFileIntoMemory(data_ov000_02183abe, data_0211e33c, &var5)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_0203dafc(&var7.unknown_0_);
    var7.unknown1_0_.fileData = data_0211e33c;
    var7.unknown1_0_.unk_8 = var5;
    var7.unknown1_0_.allocator = var3;
    var7.unknown1_0_.unk_10 = 1;
    if (!var6->unknown_0_.LoadFromCCHROrCMOTArchive(&var7.unknown1_0_, 0)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_0200fd38(var1, 1, (GameObject*)var6);
    func_02053c74((char*)var6, 1);
    Struct_ov000_02166e5c_6* var11 = func_02053c6c((unsigned char*)var6);
    if (!var11) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    Struct_ov000_02166e5c_4 var12;
    func_020d3c08((char*)&var12);
    func_020d3c28((Struct_02061c04_12*)&var12);
    Struct_ov000_02166e5c_3* var13 = func_020d3d90((Struct_020d3d90*)&var12, 1);
    sprintf(var11->unknown_3c_, data_020ef078, var13);
    Struct_ov000_02166e5c_5 var14;
    var14.unknown_0_0_ = 0;
    var14.unknown_4_7_ = 0;
    var14.unknown_4_0_ = var13->unknown_12_;
    var14.unknown_8_[0].unknown_0_0_ = var13->unknown_14_[0].unknown_0_0_;
    var14.unknown_8_[0].unknown_1_2_ = var13->unknown_14_[0].unknown_1_2_;
    var14.unknown_8_[0].unknown_2_4_ = var13->unknown_14_[0].unknown_2_4_;
    var14.unknown_8_[1].unknown_0_0_ = var13->unknown_14_[1].unknown_0_0_;
    var14.unknown_8_[1].unknown_1_2_ = var13->unknown_14_[1].unknown_1_2_;
    var14.unknown_8_[1].unknown_2_4_ = var13->unknown_14_[1].unknown_2_4_;
    var14.unknown_8_[2].unknown_0_0_ = var13->unknown_14_[2].unknown_0_0_;
    var14.unknown_8_[2].unknown_1_2_ = var13->unknown_14_[2].unknown_1_2_;
    var14.unknown_8_[2].unknown_2_4_ = var13->unknown_14_[2].unknown_2_4_;
    func_02083cbc(var11, &var14, 0);
    func_02083e28(var11, 0);
    var6->unknown_130_->maxHP = var6->unknown_134_->primaryStats.maxHP;
    var6->unknown_130_->maxMP = var6->unknown_134_->primaryStats.maxMP;
    func_02083ca0((unsigned char*)var11, 0);
    func_02083c18((char*)var11);
    func_02083b60((unsigned char*)var11, var13->unknown_13_);
    var11->unknown_16c_[0] = var13->unknown_12_;
    var11->unknown_56a_ = 0xb;
    var11->unknown_94c_ = 3;
    func_020a35cc(arg0->unknown_2a0_, 1);
    Struct_ov000_02166e5c_8* var15 = (Struct_ov000_02166e5c_8*)func_02010828(var1);
    var15->unknown_f78_[var15->unknown_f7c_++] = 1;
    func_02033b88((Struct_02010604*)var6, 0);
    func_020397cc((Struct_02018300_3*)var6, 1);
    func_0208936c(var6->unknown_138_, (char*)var6->unknown_130_, (char*)var6->unknown_134_);
    var6->unknown_c2_ |= 0x20;
    func_0207dfac(blocks_3.unknown_0_);
    int var16 = var13->unknown_10_0_;
    Struct_ov000_02166e5c_6* var17 = var6->unknown_150_;
    if (var17) var17->unknown_56b_0_ = (unsigned char)var16;
    int var18 = 2;
    Struct_ov000_02183014 var19 = data_ov000_02183014;
    func_020114c0((char*)var1, var18, &var19);
    func_ov000_02160fa8(arg0, 0x400000);
    BackgroundLoader::RemoveLockGlobal();
#undef blocks_3
}
