#include <globaldefs.h>

extern "C" void func_0203a914(void* arg0);
extern "C" void func_020bc078(int* arg0);
extern "C" void func_0209c2e0(void* arg0, int arg1, int arg2);
extern "C" void func_0209ca70(void* arg0, int arg1);

struct Struct_02000c9c_16 {
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

// USA: func_0209c174
extern "C" ARM void func_0209c174(struct Struct_02000c9c_16* arg0) {
    func_0203a914(arg0);
    arg0->unknown_b0_ = 0;
    arg0->unknown_b4_ = 0;
    arg0->unknown_b8_ = -1;
    func_020bc078((int*)&arg0->unknown_bc_);
    arg0->unknown_ba_ = -1;
    func_020bc078((int*)&arg0->unknown_c0_);
    func_020bc078((int*)&arg0->unknown_c4_);
    arg0->unknown_c8_ &= ~1;
    func_0209c2e0(arg0, 0x7f, 0);
    func_0209ca70(arg0, 3);
    arg0->unknown_ce_ = -1;
    arg0->unknown_c9_ = 0;
    arg0->unknown_ca_ = 0;
    arg0->unknown_c8_ &= ~4;
    arg0->unknown_c8_ &= ~8;
}
