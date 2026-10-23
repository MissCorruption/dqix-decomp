#include <globaldefs.h>

extern "C" int func_020d424c(int arg0, int arg1);
extern "C" int func_020d40bc(int arg0, int arg1, void* arg2, int arg3);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" void* func_020d41d8(void);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);

struct Struct_020d5b5c {
    char unknown_0_[0x10];
    int unknown_10_;
};

struct Struct_020d5b5c_2 {
    char unknown_0_[4];
    struct Struct_020d5b5c* unknown_4_;
};

// USA: func_020d5b5c
extern "C" ARM int func_020d5b5c(int arg0, void* arg1, unsigned int arg2) {
    struct Struct_020d5b5c_2* var0 = (struct Struct_020d5b5c_2*)func_020d41d8();
    int var1 = func_020d424c(1, 8);
    if (var1 != 0) {
        return var1;
    }
    InvalidateDataCacheRange((char*)var0->unknown_4_ + 0x10, 4);
    if (var0->unknown_4_->unknown_10_ == 1) {
        return 3;
    }
    if (arg2 < 0x10) {
        return 6;
    }
    if (arg1 == 0) {
        return 6;
    }
    CleanCacheRange(arg1, arg2);
    func_020d404c(0x11, arg0);
    var1 = func_020d40bc(0x11, 2, arg1, arg2);
    if (var1 == 0) {
        var1 = 2;
    }
    return var1;
}
