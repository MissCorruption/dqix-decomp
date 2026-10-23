#include <globaldefs.h>

extern "C" void func_ov031_02239368(int);
extern "C" int func_020d68d0(void *arg0);
extern "C" void func_ov031_022393e4(int arg0);

struct Struct_ov031_02290d18_15 { unsigned char unknown_0_[4]; char *unknown_4_; };
extern struct Struct_ov031_02290d18_15 data_ov031_02290d18;

// USA: func_ov031_02239a24
extern "C" ARM int func_ov031_02239a24(void) {
    if (*(int *)(data_ov031_02290d18.unknown_4_ + 0x40) != 6) {
        return 0;
    }
    func_ov031_02239368(3);
    void *var0 = data_ov031_02290d18.unknown_4_ + 0x1e00;
    int var1 = func_020d68d0(var0);
    if (var1 == 2) {
        return 1;
    }
    func_ov031_022393e4(var1);
    return 0;
}
