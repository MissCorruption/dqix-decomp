#include <globaldefs.h>


extern "C" void* func_020d41d8(void);
extern "C" int func_020d41e8(void);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
extern "C" int func_020ca4b4(void*, void*, int);

struct Struct_020d4848 {
    unsigned char unknown_0_[4];
    void* unknown_4_;
};

// USA: func_020d4848
extern "C" ARM int func_020d4848(void* arg0) {
    struct Struct_020d4848* var0 = (struct Struct_020d4848*)func_020d41d8();
    int var1 = func_020d41e8();
    if (var1 != 0) {
        return var1;
    }
    if (arg0 == NULL) {
        return 6;
    }
    InvalidateDataCacheRange((const void*)((int)var0->unknown_4_), 0x7d0);
    func_020ca4b4(var0->unknown_4_, arg0, 0x7d0);
    return 0;
}
