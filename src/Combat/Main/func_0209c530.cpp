#include <globaldefs.h>

struct Struct_02109bf4_4;
struct Struct_0209c3b4_2;

extern "C" void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1);
extern "C" int func_0209c0f4(int arg0, int arg1);
extern "C" void func_0209c3b4(struct Struct_0209c3b4_2* arg0, int arg1);
extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" int func_0203ab6c(void*, void*);
extern "C" int func_0209c140();
extern "C" void* func_020bc068(void* arg0, int arg1);
extern "C" int func_0209c6bc(void* arg0);
extern "C" void func_0209c5e8(void* arg0);

struct Struct_0209c530 {
    char unknown_0_[0xb0];
    int unknown_b0_;
    int unknown_b4_;
    short unknown_b8_;
    short unknown_ba_;
    void* unknown_bc_;
    void* unknown_c0_;
    void* unknown_c4_;
    unsigned char unknown_c8_;
    unsigned char unknown_c9_;
    short unknown_ca_;
    unsigned char unknown_cc_;
    unsigned char unknown_cd_;
    short unknown_ce_;
};

// USA: func_0209c530
extern "C" ARM void func_0209c530(struct Struct_0209c530* arg0) {
    if (arg0->unknown_b0_ != 2) return;

    func_0209c678((struct Struct_02109bf4_4*)arg0, 0);
    arg0->unknown_b0_ = 1;

    if (func_0209c0f4(arg0->unknown_b8_, arg0->unknown_ba_) != 0) {
        short var0 = arg0->unknown_b8_;
        arg0->unknown_b8_ = -1;
        func_0209c3b4((struct Struct_0209c3b4_2*)arg0, var0);
    } else {
        if (arg0->unknown_b4_ > 0) {
            func_0203aa80(arg0, arg0->unknown_b4_);
        }
        func_0203ab6c(arg0, (void*)arg0->unknown_b8_);
        if (func_0209c140() != 0) {
            func_0209c678((struct Struct_02109bf4_4*)arg0, 0);
        } else {
            func_020bc068(&arg0->unknown_bc_, 0);
            if (func_0209c6bc(arg0) == 0) {
                func_0209c5e8(arg0);
            }
        }
    }

    arg0->unknown_ce_ = -1;
}
