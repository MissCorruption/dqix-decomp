#include <globaldefs.h>

struct Struct_ov025_021e88d8 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

extern "C" void* func_ov025_021eb3e0(void* arg0);

// USA: func_ov025_021eb188
extern "C" ARM int func_ov025_021eb188(void* arg0, struct Struct_ov025_021e88d8* arg1) {
    char* var0 = (char*)arg0 + 0x194 + 0x400;
    unsigned char var1 = 0;
    while (var1 < 4) {
        if (*(unsigned short*)(var0 + 4) == arg1->unknown_4_) {
            return 1;
        }
        var1++;
        var0 += 0xc;
    }
    struct Struct_ov025_021e88d8* var2 = (struct Struct_ov025_021e88d8*)func_ov025_021eb3e0(arg0);
    if (var2 == 0 || arg1 == 0) {
        return 0;
    }
    var2->unknown_4_ = arg1->unknown_4_;
    var2->unknown_6_ = arg1->unknown_6_;
    var2->unknown_8_ = arg1->unknown_8_;
    var2->unknown_9_ = 1;
    return 1;
}
