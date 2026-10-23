#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/OverlayId.h"

struct Struct_02000c9c_16;
struct Struct_02000c9c_17;

extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" SafeAllocator* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_020a1940(unsigned int arg0);
extern "C" int func_ov031_0221156c(void* arg0);
extern "C" void func_0205e8d4(void* arg0);
extern "C" void func_0203a950(void* arg0);
extern "C" int func_ov031_02212cbc(void* arg0);
extern "C" int func_ov031_02211608(void* arg0);
extern "C" void func_0209c174(Struct_02000c9c_16* arg0);
extern "C" void func_0209c290(void* arg0);
extern "C" void func_0205e88c(Struct_02000c9c_17* arg0);
extern "C" void func_0205ea20(void* arg0, int arg1);
extern char data_02108760;
extern char data_02109bf4;

struct Struct_ov004_0216f634_2 {
    char unknown_0_[0x30];
    unsigned char unknown_30_;
    char unknown_31_;
    unsigned char unknown_32_;
    unsigned char unknown_33_;
    signed char unknown_34_;
};

struct Struct_ov004_02171048_6 {
    int unknown_0_;
    Struct_ov004_0216f634_2* unknown_4_;
};

extern Struct_ov004_02171048_6 data_ov004_02171048;

struct Struct_ov004_0216f634 {
    int unknown_0_;
    char unknown_4_[0x40];
};

// USA: func_ov004_0216f634
extern "C" ARM int func_ov004_0216f634(void* arg0) {
    if (data_ov004_02171048.unknown_4_->unknown_30_ == 0) {
        func_ov011_021848a0(arg0, 0xd3);
    } else {
        GameState* var0 = GameState::GetInstance();
        func_0205e8d4(&data_02108760);
        func_0203a950(&data_02109bf4);
        func_020a1940(OVERLAY_ID(31));
        SafeAllocator* var1 = func_ov011_021845f8(arg0, 0);
        if (var1 == NULL) {
            return 0;
        }
        data_ov004_02171048.unknown_4_->unknown_34_ = func_ov031_02212cbc(((SafeAllocator*)((char*)var1 + 4))->Allocate(0x700));
        char var2[0x40];
#if defined(jpn)
        memcpy(var2, &((Struct_ov004_0216f634*)((char*)var0 + 0x6120))->unknown_4_, 0x40);
#else
        memcpy(var2, &((Struct_ov004_0216f634*)((char*)var0 + 0x6380))->unknown_4_, 0x40);
#endif
        data_ov004_02171048.unknown_4_->unknown_32_ = func_ov031_0221156c(var2) != 0;
        data_ov004_02171048.unknown_4_->unknown_33_ = func_ov031_02211608(var2) != 0;
        func_020a1940(OVERLAY_ID(32));
        func_0209c174((Struct_02000c9c_16*)&data_02109bf4);
        func_0209c290(&data_02109bf4);
        func_0205e88c((Struct_02000c9c_17*)&data_02108760);
        func_0205ea20(&data_02108760, 100);
        if (data_ov004_02171048.unknown_4_->unknown_34_ == 3) {
            func_ov011_021848a0(arg0, 0xd4);
            return 0;
        }
        func_ov011_021848a0(arg0, 100);
    }
    return 0;
}
