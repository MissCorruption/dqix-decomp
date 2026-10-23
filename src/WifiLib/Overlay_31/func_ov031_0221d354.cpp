#include <globaldefs.h>

struct Struct_ov031_0221d354 {
    unsigned char unknown_0_[6];
    unsigned short unknown_6_;
};

extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" unsigned short func_ov031_0221e664();
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);

// USA: func_ov031_0221d354
extern "C" THUMB void func_ov031_0221d354(int arg0, Struct_ov031_0221d354* arg1, const void* arg2)
{
    int var0;
    Struct_ov031_0221d354* var1 = arg1;
    var0 = 0;
    if (arg0 > 0) do {
        func_ov031_0221e51c(var1->unknown_0_, arg2, 6);
        var1->unknown_6_ = func_ov031_0221e664();
        var1->unknown_6_ = func_ov031_0221e5f8(var1->unknown_6_);
        ++var0;
        ++var1;
    } while (var0 < arg0);
}
