#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);

struct Struct_ov017_021cac7c {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 4;
};

struct Struct_ov017_021cac7c_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_0_6_ : 1;
};

struct Struct_ov017_021cac7c_3 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    unsigned char unknown_10_;
    struct Struct_ov017_021cac7c unknown_11_;
    unsigned char unknown_12_;
    struct Struct_ov017_021cac7c_2 unknown_13_;
};

// USA: func_ov017_021cac7c
extern "C" ARM void func_ov017_021cac7c(int arg0, struct Struct_ov017_021cac7c_3* arg1, GameState* arg2, unsigned char* arg3) {
#if defined(jpn)
    void* var0 = *(void**)(arg3 + 0x3000 + 0x508);
#else
    void* var0 = *(void**)(arg3 + 0x3000 + 0x718);
#endif
    void* var1 = func_ov017_021b8470(var0);
    if (var1 == NULL) {
        return;
    }
    unsigned char* var2 = *(unsigned char**)((char*)var1 + 0x8000 + 0xe18);
    if (var2 == NULL) {
        return;
    }
    if (*(signed char*)(var2 + 0x2a) == func_020100a8(arg2)) {
        return;
    }
    if (*(unsigned short*)(var2 + 8) != arg1->unknown_4_) {
        return;
    }
    int var3 = arg1->unknown_6_ - 0xc0;
    if (var3 < 0) {
        return;
    }
    if (var3 >= 8) {
        return;
    }
    unsigned char* var4 = var2 + 0x158 + var3 * 0xa4;
    *(short*)(var4 + 0x32) = arg1->unknown_8_;
    *(short*)(var4 + 0x34) = arg1->unknown_a_;
    *(unsigned short*)(var4 + 0x30) = arg1->unknown_e_;
    *(var4 + 0x38) = arg1->unknown_10_;
    ((struct Struct_ov017_021cac7c*)(var4 + 0x3b))->unknown_0_0_ = arg1->unknown_11_.unknown_0_0_;
    ((struct Struct_ov017_021cac7c*)(var4 + 0x3b))->unknown_0_1_ = arg1->unknown_11_.unknown_0_1_;
    ((struct Struct_ov017_021cac7c*)(var4 + 0x3b))->unknown_0_2_ = arg1->unknown_11_.unknown_0_2_;
    ((struct Struct_ov017_021cac7c*)(var4 + 0x3b))->unknown_0_3_ = arg1->unknown_11_.unknown_0_3_;
    ((struct Struct_ov017_021cac7c*)(var4 + 0x3b))->unknown_0_4_ = arg1->unknown_11_.unknown_0_4_;
    *(var4 + 0x39) = 0;
    ((struct Struct_ov017_021cac7c_2*)(var4 + 0x3c))->unknown_0_0_ = arg1->unknown_13_.unknown_0_0_;
    ((struct Struct_ov017_021cac7c_2*)(var4 + 0x3c))->unknown_0_1_ = arg1->unknown_13_.unknown_0_1_;
    ((struct Struct_ov017_021cac7c_2*)(var4 + 0x3c))->unknown_0_2_ = arg1->unknown_13_.unknown_0_2_;
    ((struct Struct_ov017_021cac7c_2*)(var4 + 0x3c))->unknown_0_3_ = arg1->unknown_13_.unknown_0_3_;
    ((struct Struct_ov017_021cac7c_2*)(var4 + 0x3c))->unknown_0_4_ = arg1->unknown_13_.unknown_0_4_;
    ((struct Struct_ov017_021cac7c_2*)(var4 + 0x3c))->unknown_0_5_ = arg1->unknown_13_.unknown_0_5_;
    ((struct Struct_ov017_021cac7c_2*)(var4 + 0x3c))->unknown_0_6_ = arg1->unknown_13_.unknown_0_6_;
    *(var4 + 0x3d) = arg1->unknown_12_;
    *(unsigned short*)(var4 + 0xc) = arg1->unknown_c_;
}
