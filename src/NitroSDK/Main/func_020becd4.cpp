#include <globaldefs.h>

struct Struct_020becd4_2 {
    unsigned char unknown_0_[0xc4];
    unsigned short unknown_c4_;
    unsigned char unknown_c6_[6];
    unsigned int unknown_cc_;
};

struct Struct_020becd4 {
    Struct_020becd4_2* unknown_0_;
};

static inline bool inline_020becd4(const Struct_020becd4* arg0)
{
    return arg0->unknown_0_ != NULL;
}

// USA: func_020becd4
extern "C" ARM unsigned int func_020becd4(void* arg0)
{
    Struct_020becd4* var0 = (Struct_020becd4*)arg0;
    Struct_020becd4_2* var1;
    unsigned long long var2;
    if (!inline_020becd4(var0))
        return 0;
    var1 = var0->unknown_0_;
    var2 = var1->unknown_cc_;
    var2 *= 1000;
    var2 /= (unsigned int)var1->unknown_c4_;
    return (unsigned int)var2;
}
