#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern "C" void func_ov017_021d4c04(void*, int, void*, int, void*, int);
extern "C" void func_0209dc4c(void* arg0);

extern void* data_02109d88;

struct Struct_0209fd64 {
    char unknown_0_[0x8];
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[0x1000];
};

// USA: func_0209fd64
extern "C" ARM void func_0209fd64(struct Struct_0209fd64* arg0, struct SafeAllocator* arg1, int arg2, int arg3) {
    data_02109d88 = arg0;
    arg0->unknown_8_ = arg2;
    arg0->unknown_c_ = arg3;

    void* var0 = arg1->Allocate(0x400);
    void* var1 = arg1->Allocate(0x1800);
    if (var0 == NULL || var1 == NULL) {
        func_020c9be0();
    }

    func_ov017_021d4c04(&arg0->unknown_10_, arg0->unknown_8_, var0, 0x80, var1, 0x200);
    func_0209dc4c(&arg0->unknown_10_);
}
