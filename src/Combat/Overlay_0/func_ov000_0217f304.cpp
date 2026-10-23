#include <globaldefs.h>

struct Struct_0205c570;
struct Struct_0205bb84;

extern "C" int func_0205bf58(void* arg0, int arg1);
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" int func_0205bb84(struct Struct_0205bb84* arg0);
extern "C" int func_ov000_021753d8(void* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);
extern "C" void func_0205d7a0(unsigned char* arg0, int arg1);

struct Struct_ov000_0217f304 {
    char unknown_0_[0x10];
    signed char unknown_10_[8];
    signed char unknown_18_;
    char unknown_19_[0x1d - 0x19];
    signed char unknown_1d_;
};

struct Struct_ov000_0217f304_2 {
    char unknown_0_[0x1c];
    signed char unknown_1c_;
    char unknown_1d_[0x118 - 0x1d];
    int unknown_118_;
    char unknown_11c_[0x188 - 0x11c];
    unsigned char unknown_188_[0x244 - 0x188];
#if defined(jpn)
    unsigned char unknown_244_[0x1f54 - 0x244];
#else
    unsigned char unknown_244_[0x1d1c - 0x244];
#endif
    int unknown_1d1c_[1];
};

// USA: func_ov000_0217f304
extern "C" ARM void func_ov000_0217f304(struct Struct_ov000_0217f304_2* arg0, int arg1, int arg2, struct Struct_ov000_0217f304* arg3) {
    int var0;
    if (arg3 == NULL) return;
    int var1 = arg3->unknown_10_[arg3->unknown_18_];
    if (var1 != 0xe && var1 != 0x19) return;
    func_0205bf58(arg0->unknown_244_, 1);
    var0 = func_0205d794((struct Struct_0205c570*)arg0->unknown_188_);
    int var2 = func_0205bb84((struct Struct_0205bb84*)arg0->unknown_244_);
    int var3 = arg3->unknown_1d_;
    int var4 = func_ov000_021753d8(arg0, var0);
    if (var1 == 0x19) var3 = arg0->unknown_1c_;
    if (var0 != var3) {
        func_0205bb04(arg0->unknown_244_, var4);
        return;
    }
    if (var2 == var4) return;
    int var5 = -1;
    int var6 = -1;
    for (int var7 = 0; var7 < arg2; var7++) {
        int var8 = arg0->unknown_1d1c_[var7];
        if (var5 != var8) {
            var6++;
            var5 = var8;
            if (var2 == var6) {
                func_0205d7a0(arg0->unknown_188_, var7);
                arg0->unknown_118_ = 1;
                return;
            }
        }
    }
}
