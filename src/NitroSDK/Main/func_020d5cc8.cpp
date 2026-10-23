#include <globaldefs.h>

extern "C" void* func_020d41d8(void);
extern "C" int func_020d424c(int, int);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d40bc(int, int);

struct Struct_020d5cc8 {
    unsigned char unknown_0_[4];
    void* unknown_4_;
};

// USA: func_020d5cc8
extern "C" ARM int func_020d5cc8(int arg0) {
    struct Struct_020d5cc8* var0 = (struct Struct_020d5cc8*)func_020d41d8();
    int var1 = func_020d424c(1, 0xb);
    if (var1 != 0) return var1;
    InvalidateDataCacheRange((const void*)((int)((char*)var0->unknown_4_ + 0x10)), 4);
    if (*(int*)((char*)var0->unknown_4_ + 0x10) == 0) return 3;
    func_020d404c(0x13, arg0);
    int var2 = func_020d40bc(0x13, 0);
    return (var2 == 0) ? 2 : var2;
}
