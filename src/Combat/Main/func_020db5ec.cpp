#include <globaldefs.h>

extern "C" unsigned int func_020937f0(int arg0);
extern "C" int func_0209378c(int arg0);
extern "C" void func_0203bd08(int arg0);

extern "C" int func_020db2dc(int arg0, int arg1);

struct Struct_020db264;
extern "C" void func_020db360(struct Struct_020db264* arg0, int arg1);

extern "C" void func_020db6e4(void* arg0, int arg1);

struct Struct_020db5ec;
extern "C" void func_020db768(struct Struct_020db5ec* arg0, void* arg1);

void DMAMemsetSynchronous(int, unsigned int, unsigned int, unsigned int);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);

struct Struct_020db3f4_3;
extern "C" void func_020db844(struct Struct_020db3f4_3* arg0, int arg1, int arg2, int arg3);

typedef void (*Type_01ff8b48_8)(int, int, int);
extern Type_01ff8b48_8 data_020f2904[];
typedef void (*Type_01ff8b48_9)(int);
extern Type_01ff8b48_9 data_020f28f4[];

struct Struct_020db5ec_2 {
    unsigned char unknown_0_[0x3c];
    unsigned char unknown_3c_;
    unsigned char unknown_3d_[0x51 - 0x3c - 1];
    unsigned char unknown_51_;
    unsigned char unknown_52_[0x53 - 0x51 - 1];
    unsigned char unknown_53_;
    unsigned char unknown_54_[0x58 - 0x53 - 1];
    unsigned int unknown_58_;
};

// USA: func_020db5ec
extern "C" ARM void func_020db5ec(struct Struct_020db5ec_2* arg0) {
    if (arg0->unknown_51_ == 0) return;
    unsigned int var0 = func_020937f0(arg0->unknown_3c_);
    int var1 = func_0209378c(arg0->unknown_3c_);
    int var2 = (var0 - 0xb80) >> var1;
    int var3 = (var0 - 0x800) >> var1;
    func_0203bd08(var1);
    int var4 = func_020db2dc((int)arg0, arg0->unknown_3c_);
    func_020db360((struct Struct_020db264*)arg0, 0);
    if (arg0->unknown_53_ != 0) {
        func_020db6e4(arg0, var3);
    }
    func_020db768((struct Struct_020db5ec*)arg0, (void*)var2);
    CleanInvalidateCacheRange((const void*)var4, 0xe0);
    data_020f2904[arg0->unknown_3c_](var4, 0, 0xe0);
    CleanCacheRange((const void*)var4, 0xe0);
    DMAMemsetSynchronous(3, var4 + 0x20, 0xc0, 0x60);
    func_020db844((struct Struct_020db3f4_3*)arg0, arg0->unknown_3c_, 0, 0);
    data_020f28f4[arg0->unknown_3c_](arg0->unknown_58_);
}
