#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

class Struct_ov004_0216276c_2 {
public:
    virtual void inline_ov004_0216276c_19(); virtual void inline_ov004_0216276c_20(); virtual void inline_ov004_0216276c_21(); virtual void inline_ov004_0216276c_22();
    virtual void inline_ov004_0216276c_23(); virtual void inline_ov004_0216276c_24(); virtual void inline_ov004_0216276c_25();
    virtual void inline_ov004_0216276c_26(const Vector3i&);
    virtual Vector3i inline_ov004_0216276c_27();
    virtual void inline_ov004_0216276c_28(); virtual void inline_ov004_0216276c_29(); virtual void inline_ov004_0216276c_30(); virtual void inline_ov004_0216276c_31();
    virtual void inline_ov004_0216276c_32(); virtual void inline_ov004_0216276c_33(); virtual void inline_ov004_0216276c_34(); virtual void inline_ov004_0216276c_35();
    virtual void inline_ov004_0216276c_36(); virtual void inline_ov004_0216276c_37(); virtual void inline_ov004_0216276c_38(); virtual void inline_ov004_0216276c_39();
    virtual void inline_ov004_0216276c_40(); virtual void inline_ov004_0216276c_41(); virtual void inline_ov004_0216276c_42(); virtual void inline_ov004_0216276c_43();
    virtual void inline_ov004_0216276c_44(); virtual void inline_ov004_0216276c_45(); virtual void inline_ov004_0216276c_46(); virtual void inline_ov004_0216276c_47();
    virtual void inline_ov004_0216276c_48(); virtual void inline_ov004_0216276c_49(); virtual void inline_ov004_0216276c_50(); virtual void inline_ov004_0216276c_51();
    virtual void inline_ov004_0216276c_52(); virtual void inline_ov004_0216276c_53(); virtual void inline_ov004_0216276c_54(); virtual void inline_ov004_0216276c_55();
    virtual void inline_ov004_0216276c_56(); virtual void inline_ov004_0216276c_57(); virtual void inline_ov004_0216276c(); virtual void inline_ov004_0216276c_2();
    virtual void inline_ov004_0216276c_3(); virtual void inline_ov004_0216276c_4(); virtual void inline_ov004_0216276c_5(); virtual void inline_ov004_0216276c_6();
    virtual void inline_ov004_0216276c_7(); virtual void inline_ov004_0216276c_8(); virtual void inline_ov004_0216276c_9(); virtual void inline_ov004_0216276c_10();
    virtual void inline_ov004_0216276c_11(); virtual void inline_ov004_0216276c_12(); virtual void inline_ov004_0216276c_13(); virtual void inline_ov004_0216276c_14();
    virtual void inline_ov004_0216276c_15(); virtual void inline_ov004_0216276c_16(int); virtual void inline_ov004_0216276c_17();
    virtual void inline_ov004_0216276c_18(int);
    char unknown_4_[8];
    unsigned char unknown_c_;
    char unknown_d_[0x2b];
    short unknown_38_;
};
struct Struct_ov004_0216276c {
    char unknown_0_[0x16c];
    unsigned short unknown_16c_[13];
    unsigned char unknown_186_[13];
};
struct Struct_ov004_021707e8_6 {
#if defined(jpn)
    char unknown_0_[6]; unsigned char unknown1_7_; char unknown_7_[0x15];
#else
    char unknown1_0_[7]; unsigned char unknown1_7_; char unknown_8_[0x14];
#endif
    int unknown_1c_;
};
extern Struct_ov004_021707e8_6 data_ov004_021707e8;
#if defined(jpn)
extern int data_ov004_021705c4[];
extern unsigned char data_ov004_021710d5[];
#else
extern int data_ov004_0216fe5c[];
extern unsigned char data_ov004_02170845[];
#endif
extern "C" Struct_ov004_0216276c* func_02053c6c(unsigned char*);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void func_ov004_0215e574(void*, int, int, int, int);
extern "C" Struct_ov004_0216276c_2* func_ov023_021f6880(void*, int);
extern "C" int func_ov004_0215eb20(void*, int);
extern "C" int func_ov004_0215e460();
extern "C" void func_ov004_0215e49c(void*, int, int);
extern "C" int func_ov004_0215e4e8(void*, short);
extern "C" Struct_ov004_0216276c_2* func_ov004_0215e47c(void*, int);

// USA: func_ov004_0216276c
extern "C" ARM int func_ov004_0216276c(void* arg0) {
    data_ov004_021707e8.unknown1_7_ = 0x68;
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), data_ov004_021707e8.unknown_1c_);
    if (!var0) return 0;
    Struct_ov004_0216276c* var1 = func_02053c6c(((unsigned char*)(var0)));
    if (!var1) return 0;
    void* var2 = func_ov011_021849c8(arg0);
#if !defined(jpn)
    func_ov004_0215e574(arg0, 12, 255, 0, 0);
#endif
    unsigned char var3 = 0;
    while (var3 < 12) {
        Struct_ov004_0216276c_2* var4 = func_ov023_021f6880(var2, var3 + 0x51);
        if (!var4) { ++var3; continue; }
        var4->unknown_c_ |= 8;
        var4 = func_ov023_021f6880(var2, var3 + 13);
        if (!var4) { ++var3; continue; }
        var4->unknown_c_ |= 8;
        var4 = func_ov023_021f6880(var2, var3 + 25);
        if (!var4) { ++var3; continue; }
        var4->unknown_c_ |= 8;
        var4 = func_ov023_021f6880(var2, var3 + 38);
        if (!var4) { ++var3; continue; }
        var4->unknown_c_ |= 8;
        ++var3;
    }
    unsigned char var5 = 0;
#if defined(jpn)
    int* var6 = data_ov004_021705c4;
    unsigned char* var7 = data_ov004_021710d5;
#else
    int* var6 = data_ov004_0216fe5c;
    unsigned char* var7 = data_ov004_02170845;
#endif
    for (int var8 = 0; var8 < 12; ++var8) {
        int var9 = var8 + 1;
        if (!func_ov004_0215eb20(var0, var6[var9]) || !var7[var9]) continue;
        Struct_ov004_0216276c_2* var10 = func_ov023_021f6880(var2, var5 + 13);
        if (!var10) continue;
        var10->unknown_c_ &= ~8;
        var10 = func_ov023_021f6880(var2, var5 + 25);
        if (!var10) continue;
        var10->unknown_c_ &= ~8;
        if (func_ov004_0215e460())
            func_ov004_0215e49c(arg0, var5 + 13, 4);
        else
            func_ov004_0215e49c(arg0, var5 + 13, var6[var9] + 4);
        func_ov004_0215e49c(arg0, var5 + 25, 0x1f1);
        var10 = func_ov023_021f6880(var2, var5 + 0x51);
        if (!var10) continue;
        int var11 = var6[var8 + 1];
        var10->inline_ov004_0216276c_18(var1->unknown_16c_[var11]);
        var10->unknown_c_ &= ~8;
        unsigned char var12 = var1->unknown_186_[var11];
        if (var12 != 0) {
            var10 = func_ov023_021f6880(var2, var5 + 38);
            if (!var10) continue;
            var10->unknown_c_ &= ~8;
            int var13 = 13;
            var13 += var5;
            int var14 = func_ov004_0215e4e8(arg0, static_cast<short>(var13));
            var10 = func_ov004_0215e47c(arg0, var13);
            if (var10) {
                Vector3i var15;
                const Vector3i& var16 = var10->inline_ov004_0216276c_27();
                var15 = var16;
                var15.x += (var14 + 2) << 12;
#if defined(jpn)
                var15.y += 0x2000;
#endif
                var10 = func_ov004_0215e47c(arg0, var5 + 38);
                if (var10) {
                    var10->inline_ov004_0216276c_26(var15);
                    var10->unknown_38_ = var12 + 0x1d3;
                    if (var12 == 10) var10->inline_ov004_0216276c_16(13);
                    else var10->inline_ov004_0216276c_16(5);
                }
            }
        }
        ++var5;
    }
    return 0;
}
