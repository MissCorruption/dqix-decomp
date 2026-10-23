#include <globaldefs.h>

struct Struct_020bec98_2
{
    char unknown_0_[0xc4];
    unsigned short unknown_c4_;
    char unknown_c6_[0x9a];
    unsigned int unknown_160_;
};
struct Struct_020bec98 { Struct_020bec98_2* unknown_0_; };

static inline bool inline_020bec98(const Struct_020bec98* arg0)
{
    return arg0->unknown_0_ != NULL;
}

// USA: func_020bec98
extern "C" ARM unsigned int func_020bec98(void* arg0)
{
    Struct_020bec98* var0 = (Struct_020bec98*)arg0;
    Struct_020bec98_2* var1;
    unsigned long long var2;
    if (!inline_020bec98(var0))
        return 0;
    var1 = var0->unknown_0_;
    var2 = var1->unknown_160_;
    var2 *= 1000;
    var2 /= (unsigned int)var1->unknown_c4_;
    return (unsigned int)var2;
}
