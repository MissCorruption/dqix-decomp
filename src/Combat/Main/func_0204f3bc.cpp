#include <globaldefs.h>

extern "C" void func_0204cc68(void* arg0, int arg1, int arg2, int arg3, short arg4, short arg5);

struct Struct_0204f3bc {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
};

// USA: func_0204f3bc
extern "C" ARM void func_0204f3bc(struct Struct_0204f3bc* arg0, int arg1) {
    if (arg1 < 0) return;
    short var0 = arg0->unknown_aa_;
    short var1 = arg0->unknown_a8_;
    short var2 = var1 << 3;
    short var3 = var0 << 3;
    if (arg1 >= var3) return;
    short var4 = (short)(var2 - 1);
    short var5 = (short)(arg1 + 1);
    func_0204cc68(arg0, 0xf, 1, arg1, var4, var5);
}
