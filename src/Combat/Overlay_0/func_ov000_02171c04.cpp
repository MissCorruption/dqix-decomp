#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02171c04_134 = 0xc6, Enum_ov000_02171c04_135 = 0xc7, Enum_ov000_02171c04_1008 = 0x430, Enum_ov000_02171c04_336 = 0x144 };
#else
enum { Enum_ov000_02171c04_134 = 0x86, Enum_ov000_02171c04_135 = 0x87, Enum_ov000_02171c04_1008 = 0x3f0, Enum_ov000_02171c04_336 = 0x150 };
#endif

#include <GameState/GameState.h>

struct Struct_ov000_02171c04 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
    unsigned char unknown_c_[0xc];
    short unknown_18_;
    unsigned char unknown_1a_[6];
};
struct Struct_ov000_02171c04_2 {
    unsigned char unknown_0_[0x194];
    Struct_ov000_02171c04 unknown_194_[8];
};
struct Struct_ov000_02171c04_3 {
    unsigned char unknown_0_[0x4c];
    int unknown_4c_;
    unsigned char unknown_50_[Enum_ov000_02171c04_134 - 0x50];
    signed char unknown_86_;
    unsigned char unknown_87_[Enum_ov000_02171c04_1008 - Enum_ov000_02171c04_135];
    Struct_ov000_02171c04* unknown_3f0_[16];
};
extern "C" {
    void* func_02053c6c(void*);
    extern unsigned char data_ov000_02183380[8];
    void func_ov000_02171b68(Struct_ov000_02171c04_3*, int, Struct_ov000_02171c04*);
}

// USA: func_ov000_02171c04
extern "C" ARM void func_ov000_02171c04(Struct_ov000_02171c04_3* arg0)
{
    signed char var0 = arg0->unknown_4c_;
    int var1 = var0 >= 0 && var0 <= 3;
    if (var1) {
        char* var2 = (char*)func_0200ff1c(GameState::GetInstance(), var0);
        if (var2 && func_02053c6c(var2)) {
            arg0->unknown_86_ = 0;
            for (signed char var3 = 0; var3 < 16; ++var3) {
                Struct_ov000_02171c04* var4 = arg0->unknown_3f0_[var3];
                if (!var4)
                    break;
                int var5 = var4->unknown_8_0_ <= 7;
                if (var5)
                    break;
                ++arg0->unknown_86_;
            }
            unsigned char var6 = (arg0->unknown_86_ + 3) & ~3;
            for (unsigned char var7 = var6; var7 < 16; ++var7)
                arg0->unknown_3f0_[var7] = NULL;
            unsigned char var8[8];
            unsigned int var9 = sizeof(var8);
            unsigned char* var10 = var8;
            const unsigned char* var11 = data_ov000_02183380;
            do {
                unsigned char var12 = *var11;
                *var10 = var12;
                ++var11;
                ++var10;
            } while (--var9);
            for (unsigned char var13 = 0; var13 < 8; ++var13) {
                Struct_ov000_02171c04_2* var14 = *reinterpret_cast<Struct_ov000_02171c04_2**>(var2 + Enum_ov000_02171c04_336);
                Struct_ov000_02171c04* var15 = &var14->unknown_194_[var8[var13]];
                if (var15 && var15->unknown_18_ > 0) {
                    int var16 = var15->unknown_8_0_ <= 7;
                    if (var16) {
                        func_ov000_02171b68(arg0, var6, var15);
                        ++var6;
                    }
                }
            }
        }
    }
}
