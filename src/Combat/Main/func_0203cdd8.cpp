#include <globaldefs.h>

struct Struct_0203cdd8 {
    char unknown_0_[0x64];
    int unknown_64_;
};

// USA: func_0203cdd8
extern "C" ARM void func_0203cdd8(struct Struct_0203cdd8* arg0, int arg1) {
    int var0 = arg1 & ~0xff;
    arg0->unknown_64_ = arg1;
    if ((unsigned int)(arg1 & 0xff) >= (unsigned int)-128) {
        var0 += 0x100;
    }
    arg0->unknown_64_ = var0;
}
