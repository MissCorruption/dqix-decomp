#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02094654_968 = 0x138 };
#else
enum { Enum_02094654_968 = 0x3c8 };
#endif

struct Struct_02094654 {
    char unknown_0_[Enum_02094654_968];
    unsigned char unknown_3c8_0_ : 7;
    unsigned char unknown_3c8_7_ : 1;
};
struct Struct_02094654_2 { unsigned int unknown_0_; unsigned short unknown_4_; };
extern "C" int func_0209378c(int);
extern "C" unsigned int func_020937f0(int);
extern "C" int func_020d4ac8(void);
extern "C" Struct_02094654_2* func_02093704(int);
extern "C" void func_020946f8(Struct_02094654_2*, int, int, int, int, int, int, int, int, int, int, int);

// USA: func_02094654
extern "C" ARM void func_02094654(Struct_02094654* arg0) {
    int var0 = func_0209378c(arg0->unknown_3c8_7_);
    unsigned int var1 = func_020937f0(arg0->unknown_3c8_7_);
    if (var1) {
        unsigned int var2 = (var1 - 0xa00) >> var0;
        int var3 = 0x80 >> var0;
        int var4 = func_020d4ac8();
        Struct_02094654_2* var5 = func_02093704(arg0->unknown_3c8_7_);
        var2 += var4 * var3;
        func_020946f8(var5, 0, 0, 0, 0, 0, 0, 0x40000000, 0, var2, 15, 0);
    }
}
