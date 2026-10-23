#include <globaldefs.h>

extern "C" void* func_020d41d8(void);
extern "C" int func_020d424c(int arg0, int arg1, int arg2);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d40bc(int arg0, int arg1);

struct Struct_020d5aec {
    unsigned char unknown_0_[4];
    char* unknown_4_;
};

// USA: func_020d5aec
extern "C" ARM int func_020d5aec(int arg0) {
    struct Struct_020d5aec* var0 = (struct Struct_020d5aec*)func_020d41d8();
    int var1 = func_020d424c(2, 9, 0xa);
    if (var1 != 0) {
        return var1;
    }
    InvalidateDataCacheRange((const void*)((int)(var0->unknown_4_ + 0xc)), 4);
    if (*(int*)(var0->unknown_4_ + 0xc) == 0) {
        return 3;
    }
    func_020d404c(0x10, arg0);
    var1 = func_020d40bc(0x10, 0);
    return (var1 == 0) ? 2 : var1;
}
