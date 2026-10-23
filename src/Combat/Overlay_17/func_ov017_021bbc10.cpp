#include <globaldefs.h>
#include "Combat/ActorAction.h"

#include "Combat/Main/BattleList.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define data_ov017_021d7d6c data_ov017_021d8544
#define data_ov017_021d7d9e data_ov017_021d8576
#define data_ov017_021d7db8 data_ov017_021d8590
#define data_ov017_021d7dbb data_ov017_021d8593
#define data_ov017_021d7dbf data_ov017_021d8597
#define data_ov017_021d7de0 data_ov017_021d85b8
#define data_ov017_021d7df9 data_ov017_021d85d1
#endif

struct Struct_02038598_5;
struct Struct_02018300_3;
struct Struct_020d7aa0_2;
struct Struct_02010834;
struct Struct_02033fcc;

struct Struct_ov017_021bbc10 {
    unsigned char unknown_0_[1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x68];
    int unknown_74_;
#if defined(jpn)
    unsigned char unknown_78_[0x20];
#else
    unsigned char unknown1_78_[0x24];
#endif
    unsigned char unknown_9c_;
    unsigned char unknown_9d_[0xcc - 0x9d];
    unsigned char unknown_cc_;
    unsigned char unknown_cd_;
    unsigned char unknown_ce_[0xd0 - 0xce];
    unsigned char unknown_d0_[0x10];
    unsigned char unknown_e0_[0xfd - 0xe0];
    unsigned char unknown_fd_;
    unsigned char unknown_fe_[1];
    unsigned char unknown_ff_;
};

extern "C" int func_02039d7c(char*);
extern "C" int func_0202e7f0(void* arg0);
extern "C" void* func_020100f8(char*);
extern "C" int func_0202b7d8(int*);
extern "C" int func_020a1eb0(void);
extern "C" void func_020a1df8(int);
extern "C" unsigned int* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020a27b8(unsigned char* arg0);
extern "C" void* func_020d7a50(void);
extern "C" void func_020d7aa0(Struct_020d7aa0_2* arg0);
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" void func_02053ec8(void*, int);
extern "C" void func_02053ed8(void* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_02010834(Struct_02010834* arg0, int arg1, int* arg2, int* arg3);
extern "C" void func_02033fcc(Struct_02033fcc*);
extern "C" void func_02039d24(unsigned char* arg0);
struct Struct_ov017_021baedc;
extern "C" void func_ov017_021bb088(Struct_ov017_021baedc*);
extern "C" int* func_02010768(void* arg0);
struct SafeAllocator;
extern "C" void func_ov001_0215aa14(SafeAllocator*);
extern "C" void* func_02012fe4(void);
extern "C" void* func_0202ae18(void);
extern "C" ARM int func_ov017_021bb27c(Struct_ov017_021bbc10* arg0);

extern "C" int func_02046b60(Struct_02038598_5* arg0, int arg1);
extern "C" int func_02046b08(void** arg0);
void SetBrightness(GameResources* resources, int brightness, int duration);
char* strstr(const char* arg0, const char* arg1);

extern const char data_ov017_021d7d6c[];
extern const char data_ov017_021d7d9e[];
extern const char data_ov017_021d7db8[];
extern const char data_ov017_021d7dbb[];
extern const char data_ov017_021d7dbf[];
extern const char data_ov017_021d7de0[];
extern const char data_ov017_021d7df9[];

// USA: func_ov017_021bbc10
extern "C" ARM int func_ov017_021bbc10(Struct_ov017_021bbc10* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    GameObject* var2 = var0->GetUnknownGameObject();
    unsigned char* var3 = (unsigned char*)func_020100f8((char*)var0);
    GameResources* var4 = GetGameResources();
    void* var5 = func_0202ae18();

    if (func_02046b60((Struct_02038598_5*)var4->unknown_ptr_array_36fc[0], 1)) {
        arg0->unknown_ff_ = 1;
        arg0->unknown_1_ = 1;
        return arg0->unknown_a_;
    }
    func_020466e4(func_020d6c00(), 0x400e);
    if (var4->unknown_4080_ != 0) {
        return arg0->unknown_a_;
    }
    Struct_02037d10* var6 = func_020399a8(var2);
    if (func_02039d7c((char*)var2) != 0 && var6->unknown_1_ != 2) {
        return arg0->unknown_a_;
    }
    if (arg0->unknown_fd_ == 0 && func_02046b08((void**)var4->unknown_ptr_array_36fc[1]) == 0) {
        return arg0->unknown_a_;
    }
    SetFlags00(var4, 0x10);
    if (TestFlags00(var4, 0x1000) == 0 && func_020a1eb0() != 1) {
        func_020a1df8(1);
    }
    func_ov001_0215aa14((SafeAllocator*)NULL);
    func_020397cc((Struct_02018300_3*)var2, 1);
    func_020a27b8(var3);
    func_020d7aa0((Struct_020d7aa0_2*)func_020d7a50());
    *(unsigned short*)(var3 + 0x21e) = func_0202e7f0(var3);

    if (func_0202b7d8((int*)var5)) {
        char* var7 = (char*)func_02010828(var0);
        for (int var8 = 0; var8 < *(unsigned char*)(var7 + 0xf7c); var8++) {
            GameObject* var9 = func_0200ff1c(var0, *(unsigned char*)(var7 + var8 + 0xf78));
            if (var9 != NULL) {
                func_02053ec8(var9, 3);
                func_02053ed8(var9);
            }
        }
    }

    int var10;
    int var11[4];
    func_02010834((Struct_02010834*)var0, func_020100a8(var0), var11, &var10);
    for (int var12 = 0; var12 < var10; var12++) {
        GameObject* var13 = var0->GetPartyMemberByIndex(var11[var12]);
        if (var13 != NULL) {
            func_02033fcc((Struct_02033fcc*)var13);
            if (func_02039d7c((char*)var13) == 0 || func_020399a8(var13)->unknown_1_ != 2) {
                var13->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
            }
            func_02039d24((unsigned char*)var13);
        }
    }
    GameObject* var14 = var0->GetPartyMemberByIndex(0xce);
    if (var14 != NULL) {
        func_02039d24((unsigned char*)var14);
    }
    func_ov017_021bb088((Struct_ov017_021baedc*)arg0->unknown_d0_);
    int* var15 = func_02010768(var0);
    var15[0] = 0;
    var15[1] = 0;
    var1->AddFence();

    if (arg0->unknown_9c_ != 0) {
        arg0->unknown_74_ = var1->QueueLoadFile(data_ov017_021d7d9e, NULL);
    } else if (arg0->unknown_cc_ != 0) {
        char* var16 = *(char**)((char*)func_02012fe4() + 8);
        if (var0->GetGameObjectByIndex(arg0->unknown_cd_) == NULL || strstr(var16 + 5, data_ov017_021d7db8) == NULL ||
            strstr(var16 + 5, data_ov017_021d7dbb) == NULL) {
            SetBrightness(var4, 0, 0x28);
            func_ov017_021bb27c(arg0);
            arg0->unknown_1_ = 1;
            return arg0->unknown_a_;
        }
        return 0xc;
    } else {
        unsigned int var17 = arg0->unknown_8_;
        if (var17 >= 0x5208 && var17 < 0x9c40) {
            arg0->unknown_74_ = var1->QueueLoadFile(data_ov017_021d7dbf, NULL);
            var1->GetNumQueuedTasks();
        } else if (var17 >= 0x9c40) {
            arg0->unknown_74_ = var1->QueueLoadFile(data_ov017_021d7de0, NULL);
        } else {
            arg0->unknown_74_ = var1->QueueLoadFile(data_ov017_021d7df9, NULL);
        }
    }
    return 1;
}
