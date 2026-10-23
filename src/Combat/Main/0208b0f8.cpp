#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_02010834;
struct Struct_0208ab34;
struct Struct_0208ab34_2;
struct Struct_02048228;
struct Struct_02048284;
extern "C" void* func_0205ec34();
extern "C" void* func_0202ae18();
extern "C" void* func_02012fe4();
extern "C" void* __clear(void*, int);
extern "C" void func_0206f81c(void*);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_02010834(Struct_02010834*, int, int*, int*);
extern "C" int func_02046b08(void**);
extern "C" int func_020649b0(void*, int, void*);
extern "C" void* func_020e2ff8();
extern "C" int func_020e34bc(Struct_0208ab34*, int);
extern "C" int func_0202b7d8(int*);
extern "C" unsigned char func_02039d7c(char*);
extern "C" int func_020852a4(unsigned char*);
extern "C" int func_02085318(unsigned char*);
extern "C" void func_020e3368(unsigned char*, unsigned char);
extern "C" void func_02026f08(unsigned char*, int, int);
extern "C" int func_02048228(Struct_02048228*, int);
extern "C" int func_02048284(Struct_02048284*, int);
extern "C" void func_020e3428(void*, int);
extern "C" void func_020e3468(Struct_0208ab34_2*, int);

struct Struct_0208b0f8 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0xb2 - 6];
    short unknown_b2_;
    char unknown_b4_[0x130 - 0xb4];
    unsigned int* unknown_130_;
#if defined(jpn)
    char unknown_134_[0x144 - 0x134];
#else
    char unknown1_134_[0x150 - 0x134];
#endif
    unsigned char* unknown_150_;
};
struct Struct_0208b0f8_2 {
    char unknown_0_[0x94];
    unsigned char unknown_94_[4];
    unsigned char unknown_98_[4];
    unsigned char unknown_9c_;
    char unknown_9d_[0xa8 - 0x9d];
    unsigned char unknown_a8_;
};
struct Struct_0208b0f8_3 {
    char unknown_0_[0xc];
    unsigned int unknown_c_;
    char unknown_10_[0x30 - 0x10];
    void* unknown_30_;
};

// USA: func_0208b0f8
extern "C" ARM void func_0208b0f8(void* arg0) {
    Struct_0208b0f8_2* var0 = (Struct_0208b0f8_2*)arg0;
    GameState* var1;
    void* var2;
    GameResources* var3;
    int* var4;
    unsigned char* var5;
    unsigned int var6;
    int var7;
    void** var8;
    void* var9;
    unsigned char* var10;
    unsigned char* var11;
    Struct_0208b0f8* var12;
    int var13;
    int var14;
    Struct_0208b0f8* var15;
    int var16;
    int var17;
    var1 = GameState::GetInstance();
    var3 = GetGameResources();
    var12 = (Struct_0208b0f8*)var1->GetUnknownGameObject();
    var2 = func_0205ec34();
    func_02010828(var1);
    var4 = (int*)func_0202ae18();
    var5 = (unsigned char*)var3->unknown_ptr_36d0;
    var8 = (void**)var3->unknown_ptr_array_36fc[0];
    if (var12 == NULL) return;
    var6 = TestFlags04(var3, 0x10);
    int var18[4];
    int var19;
    __clear(var18, sizeof(var18));
    func_02010834((Struct_02010834*)var1, var12->unknown_4_, var18, &var19);
    if (func_02046b08(var8) && var12->unknown_b2_ != 0 && var0->unknown_a8_ != 0) {
        var0->unknown_a8_--;
        if (var0->unknown_a8_ == 0) {
            Struct_0208b0f8_3 var20;
            var20.unknown_c_ = *(unsigned short*)func_02012fe4();
            if (func_020649b0(var2, 0x19, &var20)) {
                func_0206f81c(&var20);
            }
        }
    }
    var9 = func_020e2ff8();
    var7 = 0;
    var11 = var0->unknown_94_;
    var10 = var0->unknown_98_;
    for (var13 = 0; var13 < var19; var13++) {
        var14 = func_020e34bc((Struct_0208ab34*)var9, 1);
        var15 = (Struct_0208b0f8*)var1->GetPartyMemberByIndex(var18[var13]);
        if (!func_0202b7d8(var4) || (func_0202b7d8(var4) && var14 != 1)) {
            if (var15 == NULL || var12->unknown_b2_ == 0 || func_02039d7c((char*)var12) != 0 ||
                (var15->unknown_130_[0] & 1) || !func_02046b08(var8)) {
                var7 = 1;
                continue;
            }
        }
        var16 = func_020852a4(var15->unknown_150_);
        if (var16 > 0 && var0->unknown_9c_ && !var6) {
            if (var11[var13] == 0) {
                if (var14 != 2 && var14 != 1) func_020e3368((unsigned char*)var9, 1);
                if (var14 == 1) {
                    func_02026f08(var5, (unsigned char)var18[var13], 0);
                    if (!(var15->unknown_130_[0] & 1)) func_02048228((Struct_02048228*)var15, var16);
                    var11[var13] = 0x28;
                    if (func_0202b7d8(var4)) func_ov017_021c9e00(var18[var13], 1, 0, 0);
                    var7 = 1;
                }
            } else var11[var13]--;
        }
        var17 = func_02085318(var15->unknown_150_);
        if (var17 > 0 && var0->unknown_9c_ && !var6) {
            if (var10[var13] == 0) {
                if (var14 != 2 && var14 != 1) func_020e3368((unsigned char*)var9, 1);
                if (var14 == 1) {
                    func_02026f08(var5, (unsigned char)var18[var13], 0);
                    if (!(var15->unknown_130_[0] & 1)) func_02048284((Struct_02048284*)var15, var17);
                    var10[var13] = 0x28;
                    if (func_0202b7d8(var4)) func_ov017_021c9e00(var18[var13], 1, 1, 0);
                    var7 = 1;
                }
            } else var10[var13]--;
        }
    }
    if (var7) {
        int var21 = func_020e34bc((Struct_0208ab34*)var9, 1);
        if (var21 == 1) func_020e3428(var9, 1);
        else if ((unsigned int)(var21 - 3) <= 2) func_020e3468((Struct_0208ab34_2*)var9, 1);
    }
}
