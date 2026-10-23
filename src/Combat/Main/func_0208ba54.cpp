#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_0208b9a0(void*, int);

extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);

struct Struct_0208ba54 {
    SafeAllocator* unknown_0_; // 0x0
    unsigned char unknown_4_[0xbc - 4];
    int unknown_bc_;
    int unknown_c0_;
};

// USA: func_0208ba54
extern "C" ARM void func_0208ba54(struct Struct_0208ba54* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_bc_));
    arg0->unknown_bc_ = -1;
    ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_c0_));
    arg0->unknown_c0_ = -1;

    if (arg0->unknown_0_ != NULL) {
        int var1;
        for (var1 = 0; var1 < 5; var1++) {
            if (arg0->unknown_0_[var1].GetSignedAllocator() != NULL) {
                arg0->unknown_0_[var1].Destroy();
            }
        }
    }

    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 1);
    func_0208b9a0(arg0, 0);
}
