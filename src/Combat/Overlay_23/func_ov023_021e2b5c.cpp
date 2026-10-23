#include <globaldefs.h>

struct Struct_ov023_021e257c_3;

struct Struct_ov023_021e2868 {
    char unknown_0_[8];
    int unknown_8_;
    int unknown_c_;
    char unknown_10_[4];
    unsigned short unknown_14_;
    unsigned short unknown_16_;
};

extern "C" ARM void* func_ov023_021e2450(void* arg0, int arg1);
extern "C" ARM void* func_ov023_021e27f8(struct Struct_ov023_021e257c_3* arg0, int arg1);
extern "C" void func_ov023_021e2acc(void* arg0, int arg1, short* arg2, short* arg3);

// USA: func_ov023_021e2b5c
extern "C" ARM void func_ov023_021e2b5c(struct Struct_ov023_021e2868* arg0, int arg1, short* arg2, short* arg3) {
    if (arg0->unknown_8_ == 0 || arg0->unknown_14_ == 0 || arg0->unknown_c_ == 0 || arg0->unknown_16_ == 0) return;
    void* var0 = func_ov023_021e2450(arg0, arg1);
    if (!var0) return;
    *arg2 = *(short*)((char*)var0 + 4);
    *arg3 = *(short*)((char*)var0 + 6);
    void* var1 = func_ov023_021e27f8((struct Struct_ov023_021e257c_3*)arg0, arg1);
    if (!var1) return;
    short var2 = *(short*)var1;
    func_ov023_021e2acc(arg0, var2, arg2, arg3);
}
