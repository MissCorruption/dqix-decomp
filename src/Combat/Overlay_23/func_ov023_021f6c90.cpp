#include <globaldefs.h>

struct Struct_ov023_021f6c90
{
    void* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_[2][4];
};

// USA: func_ov023_021f6c90
extern "C" ARM int func_ov023_021f6c90(Struct_ov023_021f6c90* arg0, int arg1, unsigned int arg2)
{
    for (int var0 = 0; var0 < 0x80; var0++)
    {
        int var1 = 1;
        unsigned int var2 = var0;
        for (unsigned short var3 = 0; var3 < arg2; var3++)
        {
            int var4 = var2 >> 2;
            int var5 = var2 & 3;
            if (arg0->unknown_8_[arg1][var4] & (1 << var5))
            {
                var1 = 0;
                break;
            }
            var2++;
        }
        if (var1)
            return var0;
    }
    return -1;
}
