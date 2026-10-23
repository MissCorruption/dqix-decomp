#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_020546c8;
struct Struct_02055ed0_3
{
    unsigned char unknown_0_[0x148];
    Struct_02055ed0_3* unknown_148_;
};
struct Struct_02055c30;

struct Struct_02057334_2
{
    unsigned char unknown_0_[4];
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_[0x23];
    Struct_020546c8* unknown_30_;
    Struct_02055ed0_3* unknown_34_;
    unsigned char unknown_38_;
    unsigned char unknown_39_[0x13];
    float unknown_4c_[4];
    unsigned char unknown_5c_[8];
    float unknown_64_[3];
    float unknown_70_[3];
    float unknown_7c_[3];
    unsigned char unknown_88_[0x14];
    float unknown_9c_;
    unsigned char unknown_a0_[4];
    float unknown_a4_[3];
    float unknown_b0_[3];
    unsigned char unknown_bc_[0x5c];
    float unknown_118_[4];
    float unknown_128_[3];
    float unknown_134_[3];
    float unknown_140_[3];
    float unknown_14c_;
    int unknown_150_;
    unsigned int unknown_154_;
    float unknown_158_[3];
    float unknown_164_[3];
};

struct Struct_02057334
{
    unsigned char unknown_0_[6];
    unsigned char unknown_6_;
};

extern "C" int func_02057854(Struct_02057334_2*);
extern "C" void func_02058c88(Struct_02055ed0_3*);
extern "C" void* func_020550c0(Struct_020546c8*);
extern "C" void func_02055c30(Struct_02055c30*);
extern "C" void func_02056d80(Struct_02057334_2*);
extern "C" void func_020557a4(Struct_02057334_2*);
extern "C" void func_020559cc(Struct_02057334_2*);
extern "C" void func_02055ccc(Struct_02057334_2*);
extern "C" void func_02059720(Struct_02055ed0_3*);
extern "C" void func_02055f5c(Struct_02057334_2*, int, int);

// USA: func_02057334
extern "C" ARM int func_02057334(Struct_02057334_2* arg0)
{
    int var0 = 0;
    int var1 = 0;
    int var2 = GameState::GetInstance()->GetTickCount();
    if (!func_02057854(arg0))
    {
        if (arg0->unknown_4_ > arg0->unknown_8_ && arg0->unknown_38_)
        {
            Struct_02055ed0_3* var3 = arg0->unknown_34_;
            while (var3)
            {
                func_02058c88(var3);
                var3 = var3->unknown_148_;
            }
        }
        else if (arg0->unknown_4_ > arg0->unknown_8_ && !arg0->unknown_38_)
        {
            var1 = 1;
        }
        if (arg0->unknown_4_ > arg0->unknown_8_ && arg0->unknown_c_)
        {
            func_02056d80(arg0);
            var1 = 1;
        }
        if (!var1)
        {
            if (arg0->unknown_4_ > arg0->unknown_154_)
            {
                arg0->unknown_150_ -= var2;
                if (arg0->unknown_150_ < 0)
                {
                    int var4 = ((Struct_02057334*)func_020550c0(arg0->unknown_30_))->unknown_6_;
                    arg0->unknown_150_ = var4;
                    if (var2 < var4 + 1)
                    {
                        var0 = 1;
                    }
                    else
                    {
                        var0 = var2 / (var4 + 1);
                    }
                }
            }
            arg0->unknown_118_[0] += arg0->unknown_4c_[0] * (float)var2;
            arg0->unknown_118_[1] += arg0->unknown_4c_[1] * (float)var2;
            arg0->unknown_118_[2] += arg0->unknown_4c_[2] * (float)var2;
            arg0->unknown_118_[3] += arg0->unknown_4c_[3] * (float)var2;
            for (int var5 = 0; var5 < 3; var5++)
            {
                arg0->unknown_128_[var5] += (float)var2 * arg0->unknown_64_[var5];
                arg0->unknown_134_[var5] += (float)var2 * arg0->unknown_70_[var5];
                arg0->unknown_140_[var5] += (float)var2 * arg0->unknown_7c_[var5];
                arg0->unknown_158_[var5] += (float)var2 * arg0->unknown_a4_[var5];
                arg0->unknown_164_[var5] += (float)var2 * arg0->unknown_b0_[var5];
            }
            arg0->unknown_14c_ += arg0->unknown_9c_ * (float)var2;
            func_020557a4(arg0);
            func_020559cc(arg0);
            func_02055c30((Struct_02055c30*)arg0);
            func_02055ccc(arg0);
        }
    }
    if (!func_02057854(arg0) || !arg0->unknown_38_)
    {
        Struct_02055ed0_3* var6 = arg0->unknown_34_;
        while (var6)
        {
            func_02059720(var6);
            var6 = var6->unknown_148_;
        }
    }
    if (var0)
    {
        func_02055f5c(arg0, var2, var0);
    }
    if (!func_02057854(arg0))
    {
        arg0->unknown_4_ += var2;
    }
    return var0 != 0;
}
