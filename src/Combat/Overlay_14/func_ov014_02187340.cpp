#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov014_02184f78 {
    Struct_ov014_02184f78* unknown_0_;
};

struct Struct_ov014_02186bc8 {
    char unknown_0_[0xb8];
    Struct_ov014_02184f78* unknown_b8_;
};

// USA: func_ov014_02187340
extern "C" ARM Struct_ov014_02184f78* func_ov014_02187340(Struct_ov014_02186bc8* arg0, short arg1)
{
    Struct_ov014_02184f78* var0 = arg0->unknown_b8_;
    int var1 = 0;
    Struct_ov014_02184f78* var2 = var0;
    short var3 = 0;
    for (; var0 != NULL; var0 = var0->unknown_0_)
    {
        if (var1 == 0)
        {
            var2 = var0;
            if (var3 == arg1)
                break;
            var3++;
        }
        var1 = (short)(var1 + 1) % 16;
    }
    return var2;
}
