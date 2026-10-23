#include <globaldefs.h>
#include <GameState/GameState.h>
#include <World/Zone3D.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct Struct_0203d028;
struct Struct_ov017_0218f064_6;
struct Struct_02048104;
struct Struct_02054664;
struct Struct_020415d8;
struct Struct_02010604;
struct Struct_020545b8 {
    short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_[0x5d4];
    SafeAllocator unknown_5d8_;
};
struct Struct_ov017_0218f064_8 { char unknown_0_[0x70]; };
#if defined(jpn)
struct Struct_ov017_0218f064_9 { char unknown_0_[0x27c]; Struct_ov017_0218f064_8 unknown_2cc_[22]; };
struct Struct_ov017_0218f064 { char unknown_0_[0x4114]; Object3D* unknown_4334_; Object3D* unknown_4338_; Object3D* unknown_433c_; Object3D* unknown_4340_; };
struct Struct_ov017_0218f064_10 { char unknown_0_[0x1b58]; Struct_020545b8* unknown_1b58_; char* unknown_1b5c_; };
struct Struct_ov017_0218f064_3 {
    char unknown_0_[0x860];
    Struct_ov017_0218f064_10 unknown_860_;
    Struct_ov017_0218f064_10* inline_ov017_0218f064_3() { return &unknown_860_; }
};
#else
struct Struct_ov017_0218f064_9 { char unknown_0_[0x2cc]; Struct_ov017_0218f064_8 unknown_2cc_[22]; };
struct Struct_ov017_0218f064 { char unknown_0_[0x4334]; Object3D* unknown_4334_; Object3D* unknown_4338_; Object3D* unknown_433c_; Object3D* unknown_4340_; };
struct Struct_ov017_0218f064_2 { char unknown_0_[0xb58]; Struct_020545b8* unknown_b58_; char* unknown_b5c_; };
struct Struct_ov017_0218f064_3 { char unknown_0_[0x1840]; Struct_ov017_0218f064_2 unknown_1840_; };
static inline Struct_ov017_0218f064_2* inline_ov017_0218f064(Zone3D* arg0) { SDK_NULL_ASSERT(arg0); return &((Struct_ov017_0218f064_3*)arg0)->unknown_1840_; }
#endif
struct Struct_ov017_0218f064_4 { char unknown_0_[0x10]; Vector3i unknown_10_; short unknown_1c_; };
struct Struct_ov017_0218f064_5 {
    Object3D unknown_0_;
    char unknown_ac_[4];
    unsigned short unknown_b0_, unknown_b2_, unknown_b4_;
#if defined(jpn)
    char unknown_b6_[0x148 - 0xb6];
#else
    char unknown1_b6_[0x9e];
#endif
    Struct_020545b8* unknown_154_;
    char unknown_158_[0x17a];
    unsigned char unknown_2d2_;
};
struct Struct_ov017_0218f064_7 { Object3D unknown_0_[11]; };
#if defined(jpn)
enum { Enum_ov017_0218f064_720 = 0x2c4, Enum_ov017_0218f064_724 = 0x2c8, Enum_ov017_0218f064_760 = 0x2ec };
#else
enum { Enum_ov017_0218f064_720 = 0x2d0, Enum_ov017_0218f064_724 = 0x2d4, Enum_ov017_0218f064_760 = 0x2f8 };
#endif
extern "C" void* func_0200fd0c(GameState*);
extern "C" Zone3D* func_02012fe4();
extern "C" void func_0202ae18();
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_020545b8(Struct_020545b8*);
extern "C" void func_020542b4(Struct_020545b8*, SafeAllocator*, Struct_ov017_0218f064_8*);
extern "C" int func_ov017_021925e0();
extern "C" void* func_ov017_021a11b4(Struct_ov017_0218f064_6*);
extern "C" void func_02054464(Struct_020545b8*, SafeAllocator*, Struct_ov017_0218f064_8*);
extern "C" void func_02037d10(Struct_ov017_0218f064_5*);
extern "C" void func_02048104(Struct_02048104*);
extern "C" void func_02054664(Struct_02054664*);
extern "C" int func_ov017_02192548();
extern "C" void func_020415d8(Struct_020415d8*);
extern "C" void func_020c9be0();
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" void func_0203db34(unsigned char*, int, int, int);
extern "C" void func_02033b88(Struct_02010604*, int);
extern "C" void func_02053c4c(char*, char*);
extern "C" void func_02053c74(char*, int);
extern "C" void func_ov017_0218f57c(void*, int);
extern "C" int func_ov017_0218f5a4(GameResources*, int, int, int, int);
#if defined(jpn)
#define data_ov017_021d73a4 data_ov017_021d7804
#endif
extern const char data_ov017_021d73a4[];

static inline Struct_ov017_0218f064_8* inline_ov017_0218f064_2(GameResources* arg0) { SDK_NULL_ASSERT(arg0); return ((Struct_ov017_0218f064_9*)arg0)->unknown_2cc_; }

// USA: func_ov017_0218f064
// JPN: func_ov017_0218fc44
extern "C" ARM void func_ov017_0218f064(GameResources* arg0, int arg1, int arg2, int arg3, int arg4) {
    GameState* var0 = GameState::GetInstance();
#if !defined(jpn)
    Zone3D* var1;
#endif
    Struct_ov017_0218f064_4* var2 = (Struct_ov017_0218f064_4*)func_0200fd0c(var0);
#if defined(jpn)
    Struct_ov017_0218f064_10* var3 = ((Struct_ov017_0218f064_3*)func_02012fe4())->inline_ov017_0218f064_3();
#else
    var1 = func_02012fe4();
#endif
    func_0202ae18();
    int var4 = 1;
    SafeAllocator* var5;
    Struct_020545b8* var6;
    if (arg2 == 0x4000) {
#if defined(jpn)
        var6 = var3->unknown_1b58_;
#else
        var6 = inline_ov017_0218f064(var1)->unknown_b58_;
#endif
        if (!var6) return;
        SafeAllocator* var7 = arg0->allocator_array_1a0;
        SafeAllocator* var8 = &var7[3];
        var5 = &var6->unknown_5d8_;
        Struct_ov017_0218f064_8* var9 = inline_ov017_0218f064_2(arg0);
        var8->Reset();
        Struct_ov017_0218f064_8* var10 = &var9[21];
        func_0207df50((Struct_0203d028*)var10);
        func_020545b8(var6);
        func_020542b4(var6, var8, var10);
    } else {
        if (func_ov017_021925e0()) {
            for (int var11 = 0; var11 < 4; ++var11) {
                if (((Struct_020545b8*)&arg0->substruct_array_12c8[var11])->unknown_0_ == arg1) return;
            }
        }
        var6 = (Struct_020545b8*)func_ov017_021a11b4((Struct_ov017_0218f064_6*)arg0);
        if (!var6) return;
        var5 = &var6->unknown_5d8_;
        int var12 = var6->unknown_2_ + 1;
        SafeAllocator* var13 = &arg0->allocator_array_38[var12];
        Struct_ov017_0218f064_8* var14 = &((Struct_ov017_0218f064_9*)arg0)->unknown_2cc_[var12];
        func_020545b8(var6);
        if (arg2 == 4) func_02054464(var6, var13, var14);
        else func_020542b4(var6, var13, var14);
    }
    Struct_ov017_0218f064* var15 = (Struct_ov017_0218f064*)arg0;
    if (var15->unknown_4334_) { var15->unknown_4334_->Destroy(); var15->unknown_4334_ = 0; }
    if (var15->unknown_4338_) { var15->unknown_4338_->Destroy(); var15->unknown_4338_ = 0; }
    if (var15->unknown_433c_) { var15->unknown_433c_->Destroy(); var15->unknown_433c_ = 0; }
    if (var15->unknown_4340_) { var15->unknown_4340_->Destroy(); var15->unknown_4340_ = 0; }
    var5->Reset();
    Struct_ov017_0218f064_5* var16 = 0;
    if (arg2 == 0x800) {
        var16 = (Struct_ov017_0218f064_5*)var5->Allocate(Enum_ov017_0218f064_720);
        func_02037d10(var16);
    } else if (arg2 == 0x200) {
        var16 = (Struct_ov017_0218f064_5*)var5->Allocate(Enum_ov017_0218f064_720);
        func_02048104((Struct_02048104*)var16);
    } else if (arg2 == 0x1000) {
        var16 = (Struct_ov017_0218f064_5*)var5->Allocate(Enum_ov017_0218f064_724);
        func_02054664((Struct_02054664*)var16);
        if (var16) var16->unknown_2d2_ = func_ov017_02192548();
    } else if (arg2 == 0x4000) {
        var16 = (Struct_ov017_0218f064_5*)var5->Allocate(Enum_ov017_0218f064_760);
        func_020415d8((Struct_020415d8*)var16);
    } else if (arg2 == 4) {
        var16 = (Struct_ov017_0218f064_5*)var5->Allocate(Enum_ov017_0218f064_724);
        func_02054664((Struct_02054664*)var16);
        if (var16) var16->unknown_2d2_ = func_ov017_02192548();
        var4 = 0;
    }
    if (!var16) func_020c9be0();
    var16->unknown_0_.unknown_4_ = (short)arg1;
    var16->unknown_154_ = var6;
    var6->unknown_0_ = (short)arg1;
    func_0200fd38(var0, arg1, (GameObject*)var16);
    if (var4) {
        Struct_ov017_0218f064_7* var17 = (Struct_ov017_0218f064_7*)var5->Allocate(0x764);
        if (!var17) func_020c9be0();
        var17->unknown_0_[0].Initialize();
        var17->unknown_0_[2].Initialize();
        var17->unknown_0_[1].Initialize();
        var17->unknown_0_[3].Initialize();
        var17->unknown_0_[4].Initialize();
        var17->unknown_0_[5].Initialize();
        Object3D* var18 = &var17->unknown_0_[6];
        var18->Initialize();
        Object3D* var19 = &var17->unknown_0_[7];
        var19->Initialize();
        var17->unknown_0_[8].Initialize();
        Object3D* var20 = &var17->unknown_0_[9];
        var20->Initialize();
        Object3D* var21 = &var17->unknown_0_[10];
        var21->Initialize();
        int var22 = arg1 * 12;
        func_0200fd38(var0, var22 + 0x13, (GameObject*)&var17->unknown_0_[0]);
        func_0200fd38(var0, var22 + 0x14, (GameObject*)&var17->unknown_0_[1]);
        func_0200fd38(var0, var22 + 0x15, (GameObject*)&var17->unknown_0_[2]);
        func_0200fd38(var0, var22 + 0x16, (GameObject*)&var17->unknown_0_[3]);
        func_0200fd38(var0, var22 + 0x17, (GameObject*)&var17->unknown_0_[5]);
        func_0200fd38(var0, var22 + 0x18, (GameObject*)var18);
        func_0200fd38(var0, var22 + 0x19, (GameObject*)var19);
        func_0200fd38(var0, var22 + 0x1a, (GameObject*)&var17->unknown_0_[8]);
        func_0200fd38(var0, var22 + 0x1b, (GameObject*)&var17->unknown_0_[4]);
        func_0200fd38(var0, var22 + 0x1c, (GameObject*)var20);
        func_0200fd38(var0, var22 + 0x1d, (GameObject*)var21);
    }
    var16->unknown_b0_ = 0x324;
    var16->unknown_b4_ = 0x189;
    var16->unknown_0_.SetHeight(0x1800);
    var16->unknown_0_.SetRadius(0x1000);
    var16->unknown_0_.MaybeSetRegularAnimation(data_ov017_021d73a4, 0);
    var16->unknown_0_.position_ = var2->unknown_10_;
    func_0203db34((unsigned char*)var16, var16->unknown_0_.rotation_.x, var2->unknown_1c_, var16->unknown_0_.rotation_.z);
    func_02033b88((Struct_02010604*)var16, 0);
    if (arg2 == 0x4000) {
#if defined(jpn)
        char* var23 = var3->unknown_1b5c_;
#else
        char* var23 = inline_ov017_0218f064(var1)->unknown_b5c_;
#endif
        if (var23) func_02053c4c((char*)var16, var23);
    } else func_02053c74((char*)var16, arg1);
    if (arg4 > 0) func_ov017_0218f57c(var16, arg4);
    if (arg3) func_ov017_0218f5a4(arg0, arg1, 0, 0, 0);
}

#if defined(jpn)
#undef data_ov017_021d73a4
#endif
