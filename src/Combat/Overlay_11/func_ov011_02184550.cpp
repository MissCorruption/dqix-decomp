#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern "C" void func_ov017_021d4c04(void*, int, void*, int, void*, int);
extern "C" void func_ov011_021888ec(void* arg0);

struct Struct_ov011_02184550 {
    char unknown_0_[0xa8];
    int unknown_a8_;
    int unknown_ac_;
};

// USA: func_ov011_02184550
extern "C" ARM void func_ov011_02184550(struct Struct_ov011_02184550* arg0, SafeAllocator* arg1, int arg2, int arg3) {
    arg0->unknown_a8_ = arg2;
    arg0->unknown_ac_ = arg3;
    void* var0 = arg1->Allocate(0x400);
    void* var1 = arg1->Allocate(0x1800);
    if (var0 == 0 || var1 == 0) {
        func_020c9be0();
    }
    func_ov017_021d4c04((char*)arg0 + 0xb8, arg0->unknown_a8_, var0, 0x80, var1, 0x200);
    func_ov011_021888ec((char*)arg0 + 0xb8);
}
