#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201b754_108 = 0x8c };
#else
enum { Enum_0201b754_108 = 0x6c };
#endif
extern "C" void* func_0201e838(unsigned char*, unsigned int);

struct Struct_0201b754 {
    unsigned char unknown_0_[0x2c];
    unsigned short unknown_2c_;
    unsigned char unknown_2e_[0x42];
    struct Struct_0201b754* unknown_70_;
};

// USA: func_0201b754
extern "C" ARM struct Struct_0201b754* func_0201b754(void* arg0, int arg1) {
    struct Struct_0201b754* var0 = (struct Struct_0201b754*)func_0201e838((unsigned char*)((char*)arg0 + Enum_0201b754_108), (unsigned int)(0xa));
    while (var0 != 0) {
        if (var0->unknown_2c_ == arg1) return var0;
        var0 = var0->unknown_70_;
    }
    return 0;
}
