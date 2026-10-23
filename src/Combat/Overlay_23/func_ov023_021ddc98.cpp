#include <globaldefs.h>

struct Struct_ov023_021ddc98 {
#if defined(jpn)
    char unknown1_0_[0x6f8];
#else
    char unknown_0_[0x77c];
#endif

    signed char unknown_77c_;
};

struct Struct_ov023_021ff9e0_10 {
#if defined(jpn)
    char unknown_0_[0x14];
    void* unknown_4_;
    int unknown_18_;
    Struct_ov023_021ddc98* unknown_20_;

#else
    void* unknown1_0_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    void* unknown_14_;
    int unknown1_18_;
    int unknown_1c_;
    Struct_ov023_021ddc98* unknown_20_;

#endif
};
extern "C" Struct_ov023_021ff9e0_10 data_ov023_021ff9e0;

struct Struct_ov023_021ddc98_2 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
};

void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" void LoadToSubBG0CharacterData(const void* src, unsigned int offset, unsigned int size);
extern "C" void LoadToMainBG1CharacterData(const void* src, unsigned int offset, unsigned int size);
extern "C" void LoadToMainBG2CharacterData(const void* src, unsigned int offset, unsigned int size);
extern "C" unsigned short* func_ov023_021db2b8(signed char arg0, int arg1);

#if defined(jpn)
extern "C" unsigned short* GetSubBG0ScreenBase();
extern "C" unsigned short* GetMainBG1ScreenBase();
extern "C" unsigned short* GetMainBG2ScreenBase();
#endif
// USA: func_ov023_021ddc98
extern "C" ARM unsigned int func_ov023_021ddc98(Struct_ov023_021ddc98_2* arg0, unsigned int arg1, unsigned short arg2, int arg3)
{
    unsigned int var0 = 0;
    short var1;
    signed char var2;
    short var3;
    short var4;
    unsigned int var5;
    int var6;
    unsigned short* var7;
    short var8;
    unsigned short* var9;
    short var10;
    unsigned short var11;
    if (data_ov023_021ff9e0.unknown_4_ != NULL && arg0 != NULL)
    {
        var1 = arg0->unknown_a8_;
        var2 = data_ov023_021ff9e0.unknown_20_->unknown_77c_;
        var3 = arg0->unknown_aa_;
        var0 = (var1 * var3) << 5;
        var4 = arg0->unknown_ac_;
        var6 = arg0->unknown_ae_;
        if (var2 == 1)
        {
            CleanInvalidateCacheRange(data_ov023_021ff9e0.unknown_4_, var0);
            LoadToSubBG0CharacterData(data_ov023_021ff9e0.unknown_4_, arg1, var0);
        }
        else
        {
            CleanInvalidateCacheRange(data_ov023_021ff9e0.unknown_4_, var0);
            if (arg3)
                LoadToMainBG1CharacterData(data_ov023_021ff9e0.unknown_4_, arg1, var0);
            else
                LoadToMainBG2CharacterData(data_ov023_021ff9e0.unknown_4_, arg1, var0);
        }
        var5 = (arg1 << 11) >> 16;
#if defined(jpn)
        if (var2 == 1) var7 = GetSubBG0ScreenBase();
        else if (arg3) var7 = GetMainBG1ScreenBase();
        else var7 = GetMainBG2ScreenBase();
#else
        var7 = func_ov023_021db2b8(var2, arg3);
#endif

        if (var7 != NULL)
        {
            for (var8 = 0; var8 < var3; var8++)
            {
                var9 = var7 + (var6 << 5) + var4;
                for (var10 = 0; var10 < var1; var10++)
                {
                    var11 = var5;
                    var11 |= arg2 << 12;
                    CleanInvalidateCacheRange(&var11, 2);
                    *var9 = var11;
                    var5 = (unsigned short)(var5 + 1);
                    var9++;
                }
                var6++;
            }
        }
    }
    return var0;
}
