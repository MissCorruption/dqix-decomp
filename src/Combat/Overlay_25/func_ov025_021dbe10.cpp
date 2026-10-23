#include "Resource/ActionDataTables.h"
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0203d028;
struct Struct_ov000_0215440c_2 { unsigned short unknown_0_; };
struct Struct_ov025_021dbe10_2 { unsigned char unknown_0_[0x20]; unsigned short unknown_20_; };
struct Struct_ov025_021d8a40;
struct Struct_ov025_021dbe10_3 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 4;
    unsigned int unknown_1a_0_ : 16;
};
struct Struct_ov025_021dbe10_4 {
    unsigned char unknown_0_[0x30];
    SafeAllocator unknown_30_;
    unsigned char unknown_44_[RG(0x14c, 0x138) - 0x30 - sizeof(SafeAllocator)];
    unsigned char unknown_14c_[RG(0x150, 0xe0)];
    char* unknown_29c_;
    unsigned char unknown_2a0_[8];
    char unknown_2a8_[0xc04];
    int unknown_eac_;
    unsigned char unknown_eb0_[RG(0x4874, 0x4ae8)];
    void* unknown_5724_;
    unsigned char unknown_5728_[0x229];
    unsigned char unknown_5951_;
    unsigned char unknown_5952_[0x14f9];
    unsigned char unknown_6e4b_;
    unsigned char unknown_6e4c_[2];
    unsigned char unknown_6e4e_;
    unsigned char unknown_6e4f_[0xad];
    short unknown_6efc_;
    unsigned char unknown_6efe_;
    unsigned char unknown_6eff_[2];
    unsigned char unknown_6f01_;
    unsigned char unknown_6f02_[0xb6];
    short unknown_6fb8_;
    unsigned char unknown_6fba_[0x1a];
    unsigned char unknown_6fd4_;
    unsigned char unknown_6fd5_;
    short unknown_6fd6_;
    unsigned char unknown_6fd8_;
    unsigned char unknown_6fd9_[3];
    Vector3i unknown_6fdc_;
    unsigned char unknown_6fe8_;
    unsigned char unknown_6fe9_[3];
    Vector3i unknown_6fec_;
    unsigned char unknown_6ff8_;
    unsigned char unknown_6ff9_;
    unsigned char unknown_6ffa_[0x74a];
    unsigned char unknown_7744_[3];
};
struct Struct_ov025_021dbe10 { unsigned char unknown_0_[0xc]; int unknown_c_; };
extern "C" Struct_ov025_021dbe10 _ZZ21inline_ov025_021dcf14vE1s;
extern char data_ov025_021ef40c[];
extern char data_ov025_021ef424[];
extern char data_ov025_021ef43c[];
extern int data_ov025_021ef404;
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_ov025_021dee20(Struct_ov025_021dbe10_4*);
extern "C" Struct_ov000_0215440c_2* func_ov000_02160f20(void*);
extern "C" Struct_ov025_021dbe10_2* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" void func_ov025_021dc0d8(void*);
extern "C" void* func_02048ab4(void*, int);
extern "C" void* func_ov025_021dfa9c(Struct_ov025_021dbe10_4*, char*);
extern "C" int func_ov000_0215fc60(char*);
extern "C" void* func_ov000_02169a58(void*, int);
extern "C" void func_ov025_021e88d8(void*);
extern "C" void func_ov025_021e8a40(char*, int, int);
extern "C" void func_ov025_021e8a4c(char*, int);
extern "C" void func_ov025_021e8d20(char*, void*);
extern "C" void func_ov025_021db8d8(Struct_ov025_021dbe10_4*);
extern "C" Struct_ov025_021dbe10_3* func_02079e2c(char*, int);
extern "C" void func_ov025_021d8a40(void*, Struct_ov025_021d8a40*);
extern "C" void func_ov025_021def30(unsigned char*);
static inline int inline_ov000_02156cc4_2(unsigned int arg0) { return arg0 <= 3; }

// USA: func_ov025_021dbe10
extern "C" ARM void func_ov025_021dbe10(Struct_ov025_021dbe10_4* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    char* var2 = arg0->unknown_29c_;
    arg0->unknown_30_.Reset();
    func_0207df50((Struct_0203d028*)arg0->unknown_14c_);
    func_ov025_021dee20(arg0);
    Struct_ov000_0215440c_2* var3 = func_ov000_02160f20(arg0);
    if (!var3) return;
    Struct_ov025_021dbe10_2* var4 = func_ov000_02160094(var3, 0);
    if (!var4) return;
    arg0->unknown_6e4b_ = 0;
    arg0->unknown_6e4e_ = 0;
    arg0->unknown_6efc_ = -1;
    arg0->unknown_6efe_ = 0;
    arg0->unknown_6fd6_ = -1;
    arg0->unknown_6fd8_ = 0;
    arg0->unknown_6fb8_ = -1;
    arg0->unknown_6f01_ = 0;
    arg0->unknown_6fd4_ = 0;
    Vector3i var5 = {};
    arg0->unknown_6fdc_ = var5;
    arg0->unknown_6fe8_ = 0;
    arg0->unknown_6fec_ = var5;
    arg0->unknown_6ff8_ = 0;
    arg0->unknown_6ff9_ = 0;
    arg0->unknown_7744_[0] = 0xff;
    arg0->unknown_7744_[1] = 0xff;
    arg0->unknown_7744_[2] = 0xff;
    arg0->unknown_5951_ &= ~4;
    _ZZ21inline_ov025_021dcf14vE1s.unknown_c_ = 0;
    func_ov025_021dc0d8(arg0);
    int var6 = 1;
    GameObject* var7 = var0->GetCombatantByIndex(var4->unknown_20_);
    if (var7) {
        int var8 = var3->unknown_0_;
        if (var8 == 0x3ae) var6 = 0;
        void* var9 = func_02048ab4(var7, var8);
        void* var10 = func_ov025_021dfa9c(arg0, arg0->unknown_29c_);
        if (var10) var9 = var10;
        if (func_ov000_0215fc60(var2) && var4->unknown_20_ == 0)
            var9 = func_ov000_02169a58(arg0->unknown_5724_, 0xdd);
        if (var9) {
            func_ov025_021e88d8(arg0->unknown_2a8_);
            func_ov025_021e8a40(arg0->unknown_2a8_, (int)&arg0->unknown_30_, (int)arg0->unknown_14c_);
            func_ov025_021e8a4c(arg0->unknown_2a8_, (int)arg0->unknown_29c_);
            func_ov025_021e8d20(arg0->unknown_2a8_, var9);
            func_ov025_021db8d8(arg0);
        } else {
            Struct_ov025_021dbe10_3* var11 = func_02079e2c((char*)func_020797dc(), (short)var8);
            if (var11) {
                if (var11->unknown_18_5_ == 0x22) func_ov025_021d8a40(arg0, (Struct_ov025_021d8a40*)var3);
                else {
                    char var12[0x50];
                    if (var11->unknown_19_4_ == 2) sprintf(var12, data_ov025_021ef40c);
                    else if ((var11->unknown_19_4_ == 1 || var11->unknown_19_4_ == 4) && inline_ov000_02156cc4_2(var4->unknown_20_))
                        sprintf(var12, data_ov025_021ef424);
                    else sprintf(var12, data_ov025_021ef43c);
                    data_ov025_021ef404 = var1->QueueLoadFile(var12, 0);
                    arg0->unknown_eac_ = 4;
                }
            }
        }
    }
    if (var6) arg0->unknown_6fd5_ = 0;
    if (arg0->unknown_eac_ == 1) func_ov025_021def30((unsigned char*)arg0);
}
