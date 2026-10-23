#include <globaldefs.h>

struct Struct_ov031_0223bb58 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_ov031_0223bb58
extern "C" ARM void func_ov031_0223bb58(void* arg0, int arg1, int arg2, int arg3) {
    Struct_ov031_0223bb58* var0 = *(Struct_ov031_0223bb58**)((char*)arg0 + 0x8);
    if (arg1 >= 0) {
        var0[arg1].unknown_0_ = (var0[arg1].unknown_0_ & ~0xc00) | (arg2 << 10);
        var0[arg1].unknown_4_ = (var0[arg1].unknown_4_ & ~0xf000) | (arg3 << 12);
    } else {
        for (int var1 = 0; var1 < *((unsigned char*)arg0 + 0xc); var1++) {
            var0[var1].unknown_0_ = (var0[var1].unknown_0_ & ~0xc00) | (arg2 << 10);
            var0[var1].unknown_4_ = (var0[var1].unknown_4_ & ~0xf000) | (arg3 << 12);
        }
    }
}
