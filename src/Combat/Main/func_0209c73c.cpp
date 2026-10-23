#include <globaldefs.h>

extern "C" void func_0203ac10(void* arg0, void* arg1, int arg2);
extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" int func_0203ab6c(void* arg0, void* arg1);
extern "C" void func_0209c5e8(void* arg0);
extern "C" int func_0203aaf8(void* arg0, void* arg1, int* arg2);
struct Struct_0203aba8;
extern "C" int func_0203aba8(struct Struct_0203aba8* arg0, void* arg1, void* arg2);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);

struct Struct_02109bf4_5 {
    char unknown_0_[0xb0];
    int unknown_b0_;               // 0xb0
    int unknown_b4_;             // 0xb4
    short unknown_b8_;             // 0xb8
    short unknown_ba_;               // 0xba
    void* unknown_bc_;                 // 0xbc
    void* unknown_c0_;                   // 0xc0
    void* unknown_c4_;                     // 0xc4
    unsigned char unknown_c8_;              // 0xc8
    unsigned char unknown_c9_;                // 0xc9
    short unknown_ca_;                          // 0xca
    unsigned char unknown_cc_;                    // 0xcc
    unsigned char unknown_cd_;                      // 0xcd
    short unknown_ce_;                                // 0xce
};

// USA: func_0209c73c
extern "C" ARM void func_0209c73c(struct Struct_02109bf4_5* arg0) {
    if (arg0->unknown_ce_ < 0) return;
    func_0203ac10(arg0, (void*)&arg0->unknown_c4_, 0);
    arg0->unknown_ce_ = -1;
    if (arg0->unknown_b0_ == 1) {
        if (arg0->unknown_b4_ > 0) {
            func_0203aa80(arg0, arg0->unknown_b4_);
        }
        func_0203ab6c(arg0, (void*)(int)arg0->unknown_b8_);
        func_0209c5e8(arg0);
        func_0209c2e0(arg0, arg0->unknown_cd_, 0);
        return;
    }
    if (arg0->unknown_b0_ != 2) return;
    if (arg0->unknown_b4_ > 0) {
        func_0203aa80(arg0, arg0->unknown_b4_);
    }
    func_0203aaf8(arg0, (void*)(int)arg0->unknown_ba_, 0);
    func_0203aba8((struct Struct_0203aba8*)arg0, (void*)(int)arg0->unknown_ba_, &arg0->unknown_c0_);
    func_0209c2e0(arg0, arg0->unknown_cd_, 0);
}
