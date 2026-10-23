#include <globaldefs.h>

struct Struct_ov025_021e88d8 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

extern "C" void func_ov025_021e8a20(struct Struct_ov025_021e88d8* arg0);

// USA: func_ov025_021eb3e0
extern "C" ARM void* func_ov025_021eb3e0(void* arg0) {
    struct Struct_ov025_021e88d8* var0 = (struct Struct_ov025_021e88d8*)((char*)arg0 + 0x194 + 0x400);
    unsigned char var1 = 0;
    while (var1 < 4) {
        if (var0->unknown_9_ == 0) {
            func_ov025_021e8a20(var0);
            return var0;
        }
        var1++;
        var0++;
    }
    return 0;
}
