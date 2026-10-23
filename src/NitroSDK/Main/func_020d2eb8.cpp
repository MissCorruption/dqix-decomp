#include <globaldefs.h>

extern "C" void func_020d21f8(void);
extern "C" void func_020d220c(void);
void CleanCacheRange(const void* addr, unsigned int size);

struct Struct_020be4f4 { unsigned char unknown_0_[0x3c]; int unknown_3c_[1]; };

// USA: func_020d2eb8
extern "C" ARM void func_020d2eb8(struct Struct_020be4f4* arg0, int arg1, int arg2) {
    func_020d21f8();
    arg0->unknown_3c_[arg1] = arg2;
    CleanCacheRange((const void*)((int)&arg0->unknown_3c_[arg1]), 4);
    func_020d220c();
}
