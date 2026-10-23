#include <globaldefs.h>

extern "C" int func_0209c0f4(int arg0, int arg1);
extern "C" void func_0203aa44(void* arg0);
extern "C" int func_0203aa64(void* arg0);
extern "C" void* func_020bc068(void* arg0, int);
extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" int func_0203aaf8(void* arg0, void* arg1, int* arg2);
struct Struct_0203aba8;
extern "C" int func_0203aba8(struct Struct_0203aba8* arg0, void* arg1, void* arg2);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);

struct Struct_0209c480 {
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

// USA: func_0209c480
extern "C" ARM void func_0209c480(struct Struct_0209c480* arg0, int arg1) {
    if (arg0->unknown_b0_ == 2) return;
    arg0->unknown_b0_ = 2;
    if (func_0209c0f4(arg0->unknown_b8_, arg1)) {
        func_0203aa44(arg0);
        arg0->unknown_b4_ = func_0203aa64(arg0);
    } else {
        func_020bc068(&arg0->unknown_bc_, 1);
        if (arg0->unknown_b4_ > 0) {
            func_0203aa80(arg0, arg0->unknown_b4_);
        }
    }
    if (arg1 >= 0) {
        func_0203aaf8(arg0, (void*)arg1, 0);
        func_0203aba8((struct Struct_0203aba8*)arg0, (void*)arg1, &arg0->unknown_c0_);
        func_0209c2e0(arg0, arg0->unknown_cd_, 0);
        arg0->unknown_ba_ = (short)arg1;
    }
    arg0->unknown_ce_ = -1;
}
