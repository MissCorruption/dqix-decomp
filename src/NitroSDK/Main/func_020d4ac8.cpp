#include <globaldefs.h>

extern "C" void* func_020d41d8(void);
extern "C" int func_020d41e8(void);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);

struct Struct_020d4ac8 {
    unsigned char unknown_0_[4];
    void* unknown_4_;
};

// USA: func_020d4ac8
extern "C" ARM int func_020d4ac8(void) {
    struct Struct_020d4ac8* var0 = (struct Struct_020d4ac8*)func_020d41d8();
    if (func_020d41e8() != 0) return 0;

    InvalidateDataCacheRange((const void*)var0->unknown_4_, 2);
    unsigned short var1 = *(unsigned short*)var0->unknown_4_;

    if (var1 != 9) {
        if (var1 != 10 && var1 != 11) goto return_zero;
    } else {
        InvalidateDataCacheRange((const void*)((char*)var0->unknown_4_ + 0x182), 2);
        if (*(unsigned short*)((char*)var0->unknown_4_ + 0x182) == 0) return 0;
    }

    InvalidateDataCacheRange((const void*)((char*)var0->unknown_4_ + 0xbc), 2);
    return *(unsigned short*)((char*)var0->unknown_4_ + 0xbc);
return_zero:
    return 0;
}
