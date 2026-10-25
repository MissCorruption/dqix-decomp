#include <globaldefs.h>


extern "C" void func_020ca3ec(int arg0, void* arg1, int arg2);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int func_020d1ee4(int arg0, int arg1, int arg2, int arg3);

struct Struct_0210fd74_2 {
    char unknown_0_[0x48];
    int unknown_48_;
};

struct Struct_0210fdbc_2 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
    unsigned int unknown_14_;
    char unknown_18_[0x1c - 0x18];
    int unknown_1c_;
    char unknown_20_[0x24 - 0x20];
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
};

extern Struct_0210fd74_2 data_0210fd74;
extern Struct_0210fdbc_2 data_0210fdbc;

// USA: func_020bd08c
extern "C" ARM void func_020bd08c(void) {
    Struct_0210fdbc_2* var0 = &data_0210fdbc;
    if (data_0210fd74.unknown_48_ == 0) return;
    var0->unknown_1c_ = 0;
    func_020ca3ec(0, var0->unknown_c_, var0->unknown_14_);
    func_020ca3ec(0, var0->unknown_10_, var0->unknown_14_);
    CleanInvalidateCacheRange(var0->unknown_c_, var0->unknown_14_);
    CleanInvalidateCacheRange(var0->unknown_10_, var0->unknown_14_);
    int var1 = var0->unknown_2c_;
    int var2 = (var1 >= 0) ? (1 << var1) : 0;
    func_020d1ee4(var0->unknown_24_, var0->unknown_28_, var2, 0);
}
