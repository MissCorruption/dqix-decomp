#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Grotto/Main/TreasureMapMetadata.h"
#include "Grotto/Main/DetailedTreasureMapData.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_02018300_3;
struct Struct_02046574_2;
struct Struct_02011818 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_;
    unsigned short unknown_4_;
    unsigned char unknown_6_;
    signed char unknown_7_;
    char unknown_8_[0xb];
    signed char unknown_13_;
    char unknown_14_[0xc];
    unsigned int unknown_20_;
    unsigned char unknown_24_;
    char unknown_25_;
    unsigned short unknown_26_;
};
struct Struct_ov017_021a9bf8_2 { unsigned char unknown_0_; unsigned char unknown_1_; TreasureMapMetadata unknown_2_[99]; };
#if defined(jpn)
enum { Enum_ov017_021a9bf8_96 = 0x2c, Enum_ov017_021a9bf8_712 = 0x218, Enum_ov017_021a9bf8_2456 = 0x868, Enum_ov017_021a9bf8_6578 = 0x17e2 };
extern const char data_ov017_021d7c96[];
extern const char data_ov017_021d7cbf[];
extern const char data_ov017_021d7ccb[];
extern const char data_ov017_021d7cd1[];
#else
enum { Enum_ov017_021a9bf8_96 = 0x60, Enum_ov017_021a9bf8_712 = 0x2c8, Enum_ov017_021a9bf8_2456 = 0x998, Enum_ov017_021a9bf8_6578 = 0x19b2 };
#endif
struct Struct_ov017_021a9bf8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    unsigned char unknown_8_;
    char unknown_9_;
    TreasureMapMetadata unknown_a_;
    DetailedTreasureMapData unknown_28_;
#if defined(jpn)
    char unknown_20c_[4][0x20];
    char unknown_28c_[0x80];
#else
    char unknown_1ec_[0x40];
    char unknown_22c_[0x40];
#endif
    unsigned char unknown_26c_;
    unsigned char unknown_26d_;
    unsigned char unknown_26e_;
    char unknown_26f_;
    unsigned short unknown_270_;
};
extern "C" unsigned char* func_020100f8(char*);
extern "C" int func_ov017_021959b4();
extern "C" void func_ov017_021a9f58(int);
extern "C" void func_020a27b8(unsigned char*);
extern "C" void func_020397cc(Struct_02018300_3*, int);
extern "C" void func_020e11a4();
extern "C" char* func_020421a0();
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
extern "C" const char* func_020e51cc(int);
extern "C" unsigned char func_02011804(GameState* arg0);
extern "C" void func_020ac760(void*);
extern "C" void func_020ac734(void*);
extern "C" void func_0204500c(char*, char*, int
#if !defined(jpn)
    , int
#endif
);
extern "C" int func_020457e0(char*);
extern "C" void func_02011818(void*, Struct_02011818*);
extern "C" void func_02011ab8(char*);
extern "C" void func_02011a74(char*, unsigned int, const char*);
extern "C" void func_ov017_021a9ff0(int);
extern "C" void* func_0205ec34();
extern "C" int func_020649b0(void*, int, void*);
extern "C" void func_0206f81c(void*);
extern "C" void func_020397c0(void*);
extern "C" void func_ov017_021a9fa0(Struct_ov017_021a9bf8*);
extern const char data_ov017_021d781f[];
extern const char data_ov017_021d782b[];

// USA: func_ov017_021a9bf8
extern "C" ARM void func_ov017_021a9bf8(Struct_ov017_021a9bf8* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = func_020100f8((char*)var0);
    Struct_ov017_021a9bf8_2 var2;
    Struct_02011818 var3;
    unsigned char var4[0x34];
    if (func_ov017_021959b4()) { func_ov017_021a9f58((int)arg0); return; }
    GameObject* var5 = var0->GetUnknownGameObject();
    if (!var5) { arg0->unknown_1_ = 1; return; }
    if (arg0->unknown_8_ == 0) {
        Struct_0208cb08* var6 = func_02094a00();
        func_02094ab0(var6);
        func_02094b3c(var6, 12);
        func_02094b30(var6, 0x203, 0);
        func_020a27b8(var1);
        arg0->unknown_8_ = 1;
    } else if (arg0->unknown_8_ == 1) {
        if (!func_02094b4c(func_02094a00())) return;
        func_020397cc((Struct_02018300_3*)var5, 1);
        func_020e11a4();
        char* var7 = func_020421a0();
        char* var8 = (*reinterpret_cast<char**>(var7 + Enum_ov017_021a9bf8_96));
#if defined(jpn)
        char* var9 = var0->GetUnknownGameObject()->baseStats_->unk;
        sprintf(var8, data_ov017_021d7c96, var9, arg0->unknown_28c_);
#else
        func_02046574((Struct_02046574_2*)var7, 1, arg0->unknown_22c_);
        sprintf(var8, func_020e51cc(0x40));
#endif
        if (func_02011804(var0) >= 99) {
            arg0->unknown_26c_ = 1;
#if defined(jpn)
            strcat(var8, data_ov017_021d7cbf);
#else
            strcat(var8, data_ov017_021d781f);
#endif
            arg0->unknown_8_ = 2;
        } else {
            func_020ac760(&var2);
            VectorizedMemset(&var2.unknown_2_[var2.unknown_0_], 0, 0x1c);
            VectorizedInvertedMemcpy(&arg0->unknown_a_, &var2.unknown_2_[var2.unknown_0_], 0x1c);
            var2.unknown_0_++;
            func_020ac734(&var2);
#if defined(jpn)
            strcat(var8, data_ov017_021d7ccb);
#else
            strcat(var8, data_ov017_021d782b);
#endif
            arg0->unknown_8_ = 4;
        }
        func_0204500c(var7, var8, 0
#if !defined(jpn)
            , 0xe3
#endif
        );
        (*reinterpret_cast<int*>(var7 + Enum_ov017_021a9bf8_2456)) = 1;
        (*reinterpret_cast<unsigned char*>(var7 + Enum_ov017_021a9bf8_6578)) = 0;
    } else if (arg0->unknown_8_ == 2) {
        char* var10 = func_020421a0();
        if ((*reinterpret_cast<int*>(var10 + Enum_ov017_021a9bf8_2456))) return;
        char* var11 = (*reinterpret_cast<char**>(var10 + Enum_ov017_021a9bf8_96));
#if defined(jpn)
        char* var12 = var0->GetUnknownGameObject()->baseStats_->unk;
        sprintf(var11, data_ov017_021d7cd1, arg0->unknown_28c_, var12, arg0->unknown_28c_);
#else
        func_02046574((Struct_02046574_2*)var10, 0, arg0->unknown_22c_);
        sprintf(var11, func_020e51cc(0x41));
#endif
        (*reinterpret_cast<int*>(var10 + Enum_ov017_021a9bf8_712)) = 1;
        func_0204500c(var10, var11, 0
#if !defined(jpn)
            , 0xe3
#endif
        );
        (*reinterpret_cast<int*>(var10 + Enum_ov017_021a9bf8_2456)) = 1;
        (*reinterpret_cast<unsigned char*>(var10 + Enum_ov017_021a9bf8_6578)) = 1;
        arg0->unknown_8_ = 3;
    } else if (arg0->unknown_8_ == 3) {
        char* var13 = func_020421a0();
        if ((*reinterpret_cast<int*>(var13 + Enum_ov017_021a9bf8_2456))) return;
        int var14 = func_020457e0(var13);
        if (var14 == 0) arg0->unknown_8_ = 4;
        else if (var14 == 1) {
            VectorizedMemset(&var3, 0, 0x28);
            var3.unknown_7_ = 0;
            var3.unknown_13_ = 0;
            var3.unknown_6_ = 0;
            var3.unknown_20_ = -1;
            var3.unknown_0_ = arg0->unknown_26d_;
            var3.unknown_1_ = arg0->unknown_26e_;
            var3.unknown_2_ = arg0->unknown_270_;
            var3.unknown_4_ = arg0->unknown_270_;
            var3.unknown_6_ = 0;
            var3.unknown_20_ = arg0->unknown_a_.Location;
            func_02011818(var0, &var3);
            func_02011ab8((char*)var0);
#if defined(jpn)
            func_02011a74((char*)var0, 0, arg0->unknown_20c_[0]);
            func_02011a74((char*)var0, 1, arg0->unknown_20c_[1]);
            func_02011a74((char*)var0, 2, arg0->unknown_20c_[2]);
            func_02011a74((char*)var0, 3, arg0->unknown_20c_[3]);
#else
            func_02011a74((char*)var0, 0, arg0->unknown_1ec_);
#endif
            func_ov017_021a9ff0(0);
            arg0->unknown_8_ = 5;
        }
    } else if (arg0->unknown_8_ == 4) {
        if ((*reinterpret_cast<int*>(func_020421a0() + Enum_ov017_021a9bf8_2456))) return;
        func_02094ab0(func_02094a00());
        if (func_020649b0(func_0205ec34(), 0x1b, var4)) func_0206f81c(var4);
        arg0->unknown_8_ = 5;
    }
    if (arg0->unknown_8_ == 5) {
        func_020397c0(var0->GetUnknownGameObject());
        func_ov017_021a9fa0(arg0);
    }
}
