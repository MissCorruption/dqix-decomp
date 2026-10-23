#include <globaldefs.h>

extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_ov014_02188a8c(void* arg0, short arg1);

struct Struct_ov014_021873a0 {
    Struct_ov014_021873a0* unknown_0_;
    char unknown_4_[0x16];
    short unknown_1a_;
};

struct Struct_ov014_021873a0_2 {
    char unknown_0_[0x98];
    void* unknown_98_;
    char unknown_9c_[0x1c];
    Struct_ov014_021873a0* unknown_b8_;
    Struct_ov014_021873a0* unknown_bc_;
    void* unknown_c0_;
    char unknown_c4_[0xb2];
    short unknown_176_;
};

// USA: func_ov014_021873a0
extern "C" ARM Struct_ov014_021873a0* func_ov014_021873a0(Struct_ov014_021873a0_2* arg0) {
    void* var0 = arg0->unknown_c0_;
    short var1 = func_02080468(var0, 5);
    short var2 = (short)(arg0->unknown_176_ - var1);
    Struct_ov014_021873a0* var3 = arg0->unknown_bc_;
    short var4 = 0;
    while (var3 != 0) {
        if (var2 == var4) {
            break;
        }
        Struct_ov014_021873a0* var5 = var3->unknown_0_;
        if (var5 == 0) {
            break;
        }
        var4 = var4 + 1;
        var3 = var5;
    }
    if (var3 == 0) {
        arg0->unknown_bc_ = arg0->unknown_b8_;
        var4 = 0;
    }
    var1 = func_02080468(var0, 5);
    arg0->unknown_176_ = var4 + var1;
    if (var3 != 0) {
        short var6 = var3->unknown_1a_;
        func_ov014_02188a8c(arg0, var6);
        arg0->unknown_98_ = (char*)arg0 + 0x182;
    }
    return var3;
}
