#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Grotto/Main/TreasureMapDataStructs.h"

struct Struct_ov004_021636b0 {
    TreasureMapMetadata unknown_0_[99];
    DetailedTreasureMapData unknown_ad4_[8];
    unsigned char unknown_18f4_;
    char unknown_18f5_;
    short unknown_18f6_;
    short unknown_18f8_;
};
struct Struct_ov004_02171010_2 { Struct_ov004_021636b0* unknown_0_; void* unknown_4_; void* unknown_8_; };
struct Struct_ov004_02162dd8 {
    int unknown_0_;
    SafeAllocator unknown_4_;
    SafeAllocator* inline_ov004_02164084_48() { return &unknown_4_; }
};

struct Struct_ov004_02153e20 {
    char unknown_0_[0x5c];
    short unknown_5c_;
    short unknown_5e_;
    char unknown_60_;
    unsigned char unknown_61_;
};

class Struct_ov004_02164084 {
public:
    virtual void inline_ov004_02164084_49();
    virtual void inline_ov004_02164084_50();
    virtual void inline_ov004_02164084_51();
    virtual void inline_ov004_02164084_52();
    virtual void inline_ov004_02164084_53();
    virtual void inline_ov004_02164084_54();
    virtual void inline_ov004_02164084_55();
    virtual void inline_ov004_02164084_56();
    virtual void inline_ov004_02164084();
    virtual void inline_ov004_02164084_2();
    virtual void inline_ov004_02164084_3();
    virtual void inline_ov004_02164084_4();
    virtual void inline_ov004_02164084_5();
    virtual void inline_ov004_02164084_6();
    virtual void inline_ov004_02164084_7();
    virtual void inline_ov004_02164084_8();
    virtual void inline_ov004_02164084_9();
    virtual void inline_ov004_02164084_10();
    virtual void inline_ov004_02164084_11();
    virtual void inline_ov004_02164084_12();
    virtual void inline_ov004_02164084_13();
    virtual void inline_ov004_02164084_14();
    virtual void inline_ov004_02164084_15();
    virtual void inline_ov004_02164084_16();
    virtual void inline_ov004_02164084_17();
    virtual void inline_ov004_02164084_18();
    virtual void inline_ov004_02164084_19();
    virtual void inline_ov004_02164084_20();
    virtual void inline_ov004_02164084_21();
    virtual void inline_ov004_02164084_22();
    virtual void inline_ov004_02164084_23();
    virtual void inline_ov004_02164084_24();
    virtual void inline_ov004_02164084_25();
    virtual void inline_ov004_02164084_26();
    virtual void inline_ov004_02164084_27();
    virtual void inline_ov004_02164084_28();
    virtual void inline_ov004_02164084_29();
    virtual void inline_ov004_02164084_30();
    virtual void inline_ov004_02164084_31();
    virtual void inline_ov004_02164084_32();
    virtual void inline_ov004_02164084_33();
    virtual void inline_ov004_02164084_34();
    virtual void inline_ov004_02164084_35();
    virtual void inline_ov004_02164084_36();
    virtual void inline_ov004_02164084_37();
    virtual void inline_ov004_02164084_38();
    virtual void inline_ov004_02164084_39();
    virtual void inline_ov004_02164084_40();
    virtual void inline_ov004_02164084_41();
    virtual void inline_ov004_02164084_42();
    virtual void inline_ov004_02164084_43();
    virtual void inline_ov004_02164084_44();
    virtual void inline_ov004_02164084_45();
    virtual void inline_ov004_02164084_46();
    virtual void inline_ov004_02164084_47(int arg0);

    char unknown_4_[8];
    unsigned char unknown_c_;
    char unknown_d_[0x13];
    char* unknown_20_;
    char unknown_24_[0xe0];
    short unknown_104_;
    short unknown_106_;
};

extern Struct_ov004_02171010_2 data_ov004_02171010;
extern char data_ov004_02170584[];
extern "C" void* func_ov011_021849c8(void*);
extern "C" Struct_ov004_02164084* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void*);
extern "C" void func_ov023_021f65d4(void*, int, int);
extern "C" void func_ov023_021f9d14(void*, void*);
extern "C" void func_ov023_021f809c(void*, void*);
extern "C" Struct_ov004_02162dd8* func_ov011_021845f8(void*, int);
extern "C" void func_ov004_021634b8(void*, int, int);
extern "C" void func_ov023_021f9b30(Struct_ov004_02153e20*, unsigned short, unsigned int, unsigned int);
extern "C" void func_ov023_021f6600(void*, int, int);
extern "C" int func_020119f8(char*, void*);
struct Struct_02011930;
extern "C" int func_02011930(void*, Struct_02011930*, void*, void*);

// USA: func_ov004_02164084
extern "C" ARM int func_ov004_02164084(void* arg0) {
    void* var0 = func_ov011_021849c8(arg0);
    Struct_ov004_02153e20* var1 = (Struct_ov004_02153e20*)func_ov023_021f6880(var0, 10);
    if (!var1) return 0;
    if (func_ov023_021f6f10(var1) != 7) return 0;
    short var2 = data_ov004_02171010.unknown_0_->unknown_18f6_;
    short var3 = data_ov004_02171010.unknown_0_->unknown_18f8_;
    var1->unknown_5c_ = var2;
    var1->unknown_5e_ = var3;
    BackgroundLoader::AddLockGlobal();
    Struct_ov004_02162dd8* var4 = func_ov011_021845f8(arg0, 0);
    if (!var4) return 0;
    SafeAllocator* const var5 = var4->inline_ov004_02164084_48();
    if (!var5) return 0;
    unsigned char* var6 = (unsigned char*)var5->Allocate(0x8000);
    unsigned int var7 = 0;
    if (!LoadFileIntoMemory(data_ov004_02170584, var6, &var7)) {
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }
    for (int var8 = 0; var8 < 8; var8++) {
        int var9 = var8 + data_ov004_02171010.unknown_0_->unknown_18f6_ * 8;
        Struct_ov004_02164084* var10 = func_ov023_021f6880(var0, var8 + 0x3c);
        if (!var10) continue;
        if (func_ov023_021f6f10(var10) != 8) return 0;
        Struct_ov004_02164084* var11 = func_ov023_021f6880(var0, var8 + 0x46);
        if (!var11) continue;
        if (func_ov023_021f6f10(var11) != 8) return 0;
        func_ov023_021f65d4(arg0, var8 + 0x226, 8);
        func_ov004_021634b8(arg0, var8 + 0x226, 0);
        func_ov023_021f65d4(arg0, var8 + 0x230, 8);
        func_ov004_021634b8(arg0, var8 + 0x230, 0);
        func_ov023_021f65d4(arg0, var8 + 0x23a, 8);
        func_ov004_021634b8(arg0, var8 + 0x23a, 0);
        DetailedTreasureMapData* var12 = &data_ov004_02171010.unknown_0_->unknown_ad4_[var8];
        var12->BlankFunction();
        var10->unknown_20_ = 0;
        var10->unknown_c_ |= 8;
        func_ov023_021f9b30(var1, 0, var8 & 0xffff, 0);
        var11->unknown_20_ = 0;
        var11->unknown_c_ |= 8;
        if (var9 >= data_ov004_02171010.unknown_0_->unknown_18f4_) continue;
        ExportDetailedTreasureMapData(&data_ov004_02171010.unknown_0_->unknown_0_[var9], &data_ov004_02171010.unknown_0_->unknown_ad4_[var8], true, var6);
        var10->unknown_c_ &= ~8;
        func_ov023_021f9b30(var1, (unsigned short)(var8 + 0x3c), (unsigned short)var8, 0);
        var11->unknown_c_ &= ~8;
        if (var12->mapType_ == 1) {
            var10->unknown_20_ = var12->regular_.nameNoLevel_;
            var11->unknown_20_ = var12->regular_.levelString_;
        } else if (var12->mapType_ == 2) {
            var10->unknown_20_ = var12->legacy_.mapNameNoLevel_;
            var11->unknown_20_ = var12->legacy_.mapLevelString_;
        }
        GameState* var13 = GameState::GetInstance();
        var10->inline_ov004_02164084_47(0xf);
        var11->inline_ov004_02164084_47(0xf);
        if (var12->discoveryState_ == 1) {
            func_ov023_021f6600(arg0, var8 + 0x230, 8);
        } else if (var12->discoveryState_ == 2) {
            func_ov023_021f6600(arg0, var8 + 0x226, 8);
        } else if (var12->discoveryState_ == 3) {
            func_ov023_021f6600(arg0, var8 + 0x23a, 8);
        }
        if (func_020119f8((char*)var13, 0)) {
            if (var12->discoveryState_ == 1) {
                var10->inline_ov004_02164084_47(4);
                var11->inline_ov004_02164084_47(4);
            } else if (var12->discoveryState_ == 2) {
                var10->inline_ov004_02164084_47(4);
                var11->inline_ov004_02164084_47(4);
            }
        } else {
            if (!func_02011930(var13, 0, 0, 0)) continue;
            if (!data_ov004_02171010.unknown_0_->unknown_0_[var9].GetInitialByteUnknownBit()) continue;
            var10->inline_ov004_02164084_47(4);
            var11->inline_ov004_02164084_47(4);
        }
    }
    var5->Free(var6);
    BackgroundLoader::RemoveLockGlobal();
    if (data_ov004_02171010.unknown_0_->unknown_18f4_ == 0) {
        var1->unknown_5c_ = 1;
        var1->unknown_5e_ = 1;
        func_ov023_021f9b30(var1, 0x3c, 0, 0);
        Struct_ov004_02164084* var14 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x1f4);
        if (var14) var14->unknown_c_ |= 8;
        var14 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x14);
        if (var14) var14->unknown_c_ &= ~4;
        for (unsigned short var15 = 0; var15 < 0x10;) {
            var14 = func_ov023_021f6880(func_ov011_021849c8(arg0), var15 + 0x3c);
            if (var14) var14->unknown_c_ |= 8;
            var15++;
        }
        var14 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x36);
        if (var14) var14->unknown_c_ &= ~8;
        var14 = func_ov023_021f6880(var0, 0x16);
        if (!var14) return 0;
        if (func_ov023_021f6f10(var14) != 6) return 0;
        var14->unknown_c_ |= 8;
    } else {
        Struct_ov004_02164084* var16 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x36);
        if (var16) var16->unknown_c_ |= 8;
    }
    func_ov023_021f9d14(var1, arg0);
    Struct_ov004_02164084* var17 = func_ov023_021f6880(var0, 0x14);
    if (!var17) return 0;
    if (func_ov023_021f6f10(var17) != 6) return 0;
    if (data_ov004_02171010.unknown_0_->unknown_18f4_ <= 8) var17->unknown_c_ &= ~4;
    else var17->unknown_c_ |= 4;
    short var18 = data_ov004_02171010.unknown_0_->unknown_18f6_;
    short var19 = data_ov004_02171010.unknown_0_->unknown_18f8_;
    var17->unknown_104_ = var18;
    var17->unknown_106_ = var19;
    func_ov023_021f809c(var17, arg0);
    var1->unknown_61_ = 1;
    return 0;
}
