#include <globaldefs.h>

extern "C" void* func_ov000_02160130(void);
extern "C" void func_ov000_021626a0(void* arg0, int arg1, int arg2);
struct Struct_ov025_021e4450;
extern "C" void func_ov025_021eb00c(struct Struct_ov025_021e4450* arg0);
extern int data_ov025_021ef988;

struct Struct_ov025_021e4450_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

// USA: func_ov025_021e4450
extern "C" ARM int func_ov025_021e4450(struct Struct_ov025_021e4450_2* arg0) {
#if defined(jpn)
 enum {Enum_ov025_021e4450_12=4};
#else
 enum {Enum_ov025_021e4450_12=0xc};
#endif
    void* var0 = func_ov000_02160130();
    unsigned char var1 = arg0->unknown_8_;
    if (var1 == 5) {
        int var2 = (arg0->unknown_9_ == 0) ? 1 : 0;
        func_ov000_021626a0(var0, 4, var2);
        var1 = 0;
    } else if (var1 == 6) {
        int var3 = (arg0->unknown_9_ == 0) ? 1 : 0;
        func_ov000_021626a0(var0, 4, var3);
        var1 = 1;
    }
    void* var4 = *(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e4450_12);
    if (var4 != 0) {
        func_ov025_021eb00c((struct Struct_ov025_021e4450*)var4);
        var4 = *(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e4450_12);
        *(int*)((char*)var4 + 0x1c4) &= ~0x40;
    }
    func_ov000_021626a0(var0, var1, arg0->unknown_9_);
    return 1;
}
