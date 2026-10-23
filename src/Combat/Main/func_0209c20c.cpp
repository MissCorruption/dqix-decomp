#include <globaldefs.h>
extern "C" void func_0203ad88(void*, void*, int);

struct Struct_02109bf4_4;
extern "C" void func_0209c678(struct Struct_02109bf4_4* arg0, int arg1);

extern "C" void func_0203aa44(void* arg0);
extern "C" void func_020bc078(int* arg0);

extern "C" void func_020bbd9c(void);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);

struct Struct_02109bf4_3 {
    char unknown_0_[0xb0];
    int unknown_b0_;
    int unknown_b4_;
    short unknown_b8_;
    short unknown_ba_;
    void* unknown_bc_;
    void* unknown_c0_;
};

// USA: func_0209c20c
extern "C" ARM void func_0209c20c(struct Struct_02109bf4_3* arg0) {
    func_0203ad88((void*)(arg0), (void*)(0), (int)(0));
    func_0209c678((struct Struct_02109bf4_4*)arg0, 0);
    func_020bbd9c();
    func_0203aa44(arg0);
    arg0->unknown_b0_ = 0;
    arg0->unknown_b4_ = 0;
    arg0->unknown_b8_ = -1;
    func_020bc078((int*)&arg0->unknown_bc_);
    arg0->unknown_ba_ = -1;
    func_020bc078((int*)&arg0->unknown_c0_);
    func_0209c2e0(arg0, 0x7f, 0);
}
