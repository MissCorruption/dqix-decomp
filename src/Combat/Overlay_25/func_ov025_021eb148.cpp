#include <globaldefs.h>

struct Struct_ov025_021e88d8 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

extern "C" void func_ov025_021e8a20(struct Struct_ov025_021e88d8* arg0);
extern "C" int func_ov025_021eb188(void* arg0, struct Struct_ov025_021e88d8* arg1);

// USA: func_ov025_021eb148
extern "C" ARM int func_ov025_021eb148(void* arg0, short arg1, int arg2, unsigned char arg3) {
    struct Struct_ov025_021e88d8 var0;
    func_ov025_021e8a20(&var0);
    var0.unknown_4_ = arg1;
    var0.unknown_6_ = arg2;
    var0.unknown_8_ = arg3;
    return func_ov025_021eb188(arg0, &var0);
}
