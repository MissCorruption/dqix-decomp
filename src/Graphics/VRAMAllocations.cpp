#include "Graphics/VRAMAllocations.h"
#include <globaldefs.h>

struct Struct_020f1f14
{
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    char unknown_c_[4];
    unsigned short unknown_10_;
    char unknown_12_[2];
    unsigned int unknown_14_;
} extern data_020f1f14[5];

extern Struct_020f1f14* data_020f1ef8[2];
// points to elements in the above array.
// Initially in the order ([4], [3], [0], [2], [1]).
// No idea why
extern Struct_020f1f14* data_020f1f00[5];

struct Struct_0210cf88
{
    unsigned int unknown_0_;
    unsigned int unknown_4_;
} extern data_0210cf88;

#pragma optimize_for_size off

// I wasn't able to get this to match, so the file isn't delinked yet
extern "C" unsigned int inline_020f1f14_2(unsigned int arg0, bool arg1, unsigned int arg2)
{
    unsigned int var0 = arg2;
    unsigned int var1 = arg0 + 0xf;
    if (arg0 == 0)
        var1 = 0x10;
    else
        var1 = (arg0 + 0xf) & ~0xf;

    if (var1 >= 0x7fff0)
        return 0;

    bool var2;
    if (arg1)
    {
        int var3 = 0;
        do
        {
            unsigned int var4;
            Struct_020f1f14* var5;
            Struct_020f1f14* var6;
            
            var6 = data_020f1ef8[var3];
            
            if (var6->unknown_8_ == 0)
                continue;
                
            var4 = var6->unknown_0_;
            if (var6->unknown_4_ - var4 < var1)
                continue;
            
            switch (var6->unknown_10_)
            {
            case 0:
                var5 = &data_020f1f14[1];
                break;
            case 3:
                var5 = &data_020f1f14[2];
                break;
            default:
                var5 = NULL;
                break;
            }
            if (var5->unknown_8_ == 0)
                continue;
            if (var5->unknown_4_ - var5->unknown_0_ >= (var1 >> 1))
            {
                var6->unknown_0_ += var1;
                var2 = true;
                var5->unknown_0_ += (var1 >> 1);
                var0 = var4 + var6->unknown_14_;
                goto end;
            }
        } while (var3++, var3 < 2);
        var2 = false;
    }
    else
    {
        int var7 = 0;
        do
        {
            Struct_020f1f14* var8;
            var8 = data_020f1f00[var7];
            if (var8->unknown_8_ == 0)
                continue;
            if (var8->unknown_4_ - var8->unknown_0_ >= var1)
            {
                var2 = true;
                var8->unknown_4_ = (volatile unsigned int&)var8->unknown_4_ - var1;
                var0 = var8->unknown_4_ + var8->unknown_14_;
                goto end;
            }
        } while (var7++, var7 < 5);
        var2 = false;
    }

end:
    if (!var2)
        return 0;

    return ((var1 >> 4) << 16) | ((var0 << 13) >> 16) | (arg1 << 31);
}

// What a horrible, horrible way to write a function
unsigned int inline_020f1f14(unsigned int arg0, bool arg1, bool arg2)
{  
    unsigned int var0 = 0;
    unsigned int var1;
    unsigned int var2;
    unsigned int var3;

    if (arg0 == 0)
        var2 = 8;
    else
        var2 = (arg0 + 7) & ~7;

    // this is 512k, which is better suited as a bound for texture image VRAM
    // but I guess it's general purpose
    if (var2 >= 0x7fff8)
        return 0;

    bool var4;
    
    if (arg2 == true)
    {
        unsigned int var5 = data_0210cf88.unknown_0_;
        if (arg1)
            var1 = (8 - (var5 & 7)) & 7;
        else
            var1 = (16 - (var5 & 15)) & 15;
        
        var3 = var2 + var1;
        unsigned var6;
        if (data_0210cf88.unknown_4_ - var5 < var3)
            goto lab_a4;
        var6 = var5 + var3;
        if (!arg1)
            goto lab_88;
        if (var6 > 0x10000)
        {
            var4 = false;
            goto end;
        }
    lab_88:
        var4 = true;
        var0 = data_0210cf88.unknown_0_ + var1;
        data_0210cf88.unknown_0_ += var3;
        goto end;
    lab_a4:
        var4 = false;
    }
    else
    {
        if (data_0210cf88.unknown_4_ >= var2)
        {
            if (!arg1)
                var1 = (data_0210cf88.unknown_4_ - var2) & 15;
            else
                var1 = (data_0210cf88.unknown_4_ - var2) & 7;

            int var7 = var2 + var1;

            if (data_0210cf88.unknown_4_ - data_0210cf88.unknown_0_ >= var2 + var1)
            {
                if (arg1 && data_0210cf88.unknown_4_ > 0x10000)
                {
                    var4 = false;
                    goto end;
                }
                else
                {
                    var4 = true;
                    var0 = *(volatile unsigned int*)&data_0210cf88.unknown_4_ - var7;
                    data_0210cf88.unknown_4_ = var0;
                    goto end;
                }
            }
        }
        var4 = false;
    }
end:
    if (!var4)
        return 0;

    int var8 = (var2 >> 3) << 16 | ((var0 << 13) >> 16);
    return var8;
}