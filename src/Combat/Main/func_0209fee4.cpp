#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern "C" void func_ov017_021d4c04(void*, int, void*, int, void*, int);
extern "C" void func_ov023_021eb000(void*);

extern void* data_02109d8c;

struct Struct_0209fee4 {
    char unknown_0_[0x4];
    int unknown_4_;
    int unknown_8_;
    char unknown_c_[0x1000];
};

// USA: func_0209fee4
extern "C" ARM void func_0209fee4(struct Struct_0209fee4* arg0, struct SafeAllocator* arg1, int arg2, int arg3) {
    data_02109d8c = arg0;
    arg0->unknown_4_ = arg2;
    arg0->unknown_8_ = arg3;

    void* var0 = arg1->Allocate(0x400);
    void* var1 = arg1->Allocate(0x1800);
    if (var0 == NULL || var1 == NULL) {
        func_020c9be0();
    }

    func_ov017_021d4c04(&arg0->unknown_c_, arg0->unknown_4_, var0, 0x80, var1, 0x200);
    func_ov023_021eb000(&arg0->unknown_c_);
}
