#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" void func_ov000_02162b90(void* arg0, int arg1, int arg2, int arg3, int arg4, signed char arg5, signed char arg6);

struct Struct_ov017_021c6b04 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c6b04_2 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    signed char unknown_a_;
    signed char unknown_b_;
};

// USA: func_ov017_021c6b04
extern "C" ARM void func_ov017_021c6b04(int arg0, Struct_ov017_021c6b04_2* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021c6b04_1816=0x508};
#else
 enum {Enum_ov017_021c6b04_1816=0x718};
#endif
    void* var0 = *(void**)(arg3 + 0x3000 + Enum_ov017_021c6b04_1816);
    Struct_ov017_021c6b04* var1 = (Struct_ov017_021c6b04*)func_ov017_021b8478(var0);
    if (!var1) return;
    void* var2 = func_ov017_021b8468(var0);
    if (!var2) return;
    void* var3 = func_ov017_021b8470(var0);
    if (!var3) return;
    if (var1->unknown_8_ != arg1->unknown_4_) return;
    func_ov000_02162b90(var2, *(short*)&arg1->unknown_4_, arg1->unknown_6_, arg1->unknown_8_, arg1->unknown_9_, arg1->unknown_a_, arg1->unknown_b_);
}
