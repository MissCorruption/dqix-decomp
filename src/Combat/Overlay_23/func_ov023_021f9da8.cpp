#include <globaldefs.h>

struct Struct_ov023_021f9da8_3 {
    char unknown_0_[0x20];
    unsigned short* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
};

struct Struct_ov023_021f9da8 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
};

struct Struct_ov023_021f9da8_2 {
    char unknown_0_[0x20];
    Struct_ov023_021f9da8 unknown_20_;
    Struct_ov023_021f9da8* inline_ov023_021f9da8() { return &unknown_20_; }
};

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" Struct_ov023_021f9da8_2* func_ov023_021f9cb8(void* arg0, void* arg1, void* arg2);

// USA: func_ov023_021f9da8
extern "C" ARM int func_ov023_021f9da8(Struct_ov023_021f9da8_3* arg0, void* arg1, int arg2, int arg3) {
    void* var0 = func_ov011_021849c8(arg1);
    unsigned short var1 = arg0->unknown_24_ * arg0->unknown_26_;
    unsigned short var2;
    for (var2 = 0; var2 < var1; var2++) {
        void* var3 = func_ov023_021f6880(var0, arg0->unknown_20_[var2]);
        Struct_ov023_021f9da8_2* var4 = func_ov023_021f9cb8(arg0, arg1, var3);
        if (var4 == 0) {
            continue;
        }
        Struct_ov023_021f9da8* var5 = var4->inline_ov023_021f9da8();
        if (var5 == 0) {
            continue;
        }
        short var6 = var5->unknown_ae_ * 8;
        short var7 = var5->unknown_ac_;
        short var8 = var5->unknown_a8_;
        var7 = var7 * 8;
        var8 = var8 * 8;
        short var9 = (short)(var5->unknown_aa_ * 8) + var6;
        short var10 = var7 + var8;
        short var11 = var7;
        int var12 = 0;
        if (var9 - 16 > arg3) {
            return 0;
        }
        if (arg3 >= var9) {
            return 0;
        }
        if (var11 <= arg2 && arg2 < var11 + 16) {
            var12--;
        }
        if (var10 - 16 > arg2) {
            return var12;
        }
        if (arg2 < var10) {
            var12 = 1;
        }
        return var12;
    }
    return 0;
}
