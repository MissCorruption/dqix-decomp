#include <globaldefs.h>

struct Struct_0204b878;
extern "C" void func_0204b878(struct Struct_0204b878* arg0, int arg1, int arg2, int arg3,
                                                  short arg4, short arg5, short arg6, short arg7, unsigned short arg8);

struct Struct_0204c8f0 {
    char unknown_0_[0x4];
    void* unknown_4_;               // 0x4
    char unknown_8_[0x94];            // 0x8..0x9b
    int unknown_9c_;                // 0x9c
    char unknown_a0_[0xc];              // 0xa0..0xab
    short unknown_ac_;               // 0xac
    short unknown_ae_;               // 0xae
    char unknown_b0_[0x10];              // 0xb0..0xbf
    short unknown_c0_;                // 0xc0
    unsigned short unknown_c2_;       // 0xc2
    char unknown_c4_[0x1];                 // 0xc4
    unsigned char unknown_c5_;          // 0xc5
    char unknown_c6_[0x2];                   // 0xc6..0xc7
    short unknown_c8_;                    // 0xc8
};

// USA: func_0204c8f0
extern "C" ARM void func_0204c8f0(struct Struct_0204c8f0* arg0) {
    if (arg0->unknown_4_ == NULL) return;
    if (!(arg0->unknown_c5_ & 1) || arg0->unknown_9c_ == 0) return;
    if (arg0->unknown_c5_ & 0x20) return;

    func_0204b878(
        (struct Struct_0204b878*)arg0->unknown_4_,
        (int)((char*)arg0 + 0xc8),
        0, 0,
        arg0->unknown_ac_, arg0->unknown_ae_, arg0->unknown_c8_, arg0->unknown_c0_,
        arg0->unknown_c2_);
}
