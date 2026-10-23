#include <globaldefs.h>

struct Struct_0204254c
{
    char unknown_0_[5];
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 1;
    signed char unknown_5_7_ : 1;
};
struct Struct_02067fec
{
    unsigned int unknown_0_0_ : 28;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};
struct Struct_02067fec_2
{
    char unknown_0_[8];
    Struct_02067fec unknown_8_;
};
extern "C" Struct_0204254c* func_0204254c(int, int);
extern "C" int func_02067f9c(Struct_02067fec_2*, int, int);

// USA: func_02067fec
extern "C" ARM int func_02067fec(Struct_02067fec_2* arg0, signed char* arg1, int arg2)
{
    if (arg0 && !arg0->unknown_8_.unknown_3_6_)
        return arg0->unknown_8_.unknown_3_4_;
    signed char* var0 = arg1;
    Struct_0204254c* var1 = func_0204254c((int)var0, arg2);
    if (var1)
    {
        if (var1->unknown_5_6_)
            return 1;
        int var2 = *var0;
        var0 += var1->unknown_5_0_;
        if (var2 == 'h')
        {
            var1 = func_0204254c((int)var0, arg2);
            if (var1 && var1->unknown_5_6_)
                return !func_02067f9c(arg0, (int)(var0 + var1->unknown_5_0_), arg2);
        }
        else if (var2 == 'y')
            return !func_02067f9c(arg0, (int)var0, arg2);
    }
    return 0;
}
