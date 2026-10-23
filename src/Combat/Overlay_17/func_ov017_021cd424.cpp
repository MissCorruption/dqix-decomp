#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);

struct Struct_ov000_021633b8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
    unsigned short unknown_3_7_ : 1;
    unsigned char unknown_4_;
    signed char unknown_5_;
};
extern "C" void func_ov000_021633b8(char* arg0, Struct_ov000_021633b8* arg1);
extern "C" void func_ov000_02163404(void* arg0, unsigned char arg1);
extern "C" void func_ov000_02160fa8(void* arg0, int arg1);
typedef void (*Type_ov017_021cd424)(void*, int);

struct Struct_ov017_021cd424 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021cd424_2 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    signed char unknown_a_;
    unsigned char unknown_b_;
    signed char unknown_c_;
};

// USA: func_ov017_021cd424
extern "C" ARM void func_ov017_021cd424(int arg0, Struct_ov017_021cd424_2* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cd424_1816=0x508};
#else
 enum {Enum_ov017_021cd424_1816=0x718};
#endif
    unsigned char* var0 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021cd424_1816);
    Struct_ov017_021cd424* var1 = (Struct_ov017_021cd424*)func_ov017_021b8478(var0);
    if (var1->unknown_8_ != arg1->unknown_4_) return;
    unsigned char* var2 = (unsigned char*)func_ov017_021b8468(var0);
    if (!var2) return;
    Struct_ov000_021633b8 var3;
    var3.unknown_0_ = arg1->unknown_6_;
    var3.unknown_2_0_ = arg1->unknown_8_;
    var3.unknown_4_ = arg1->unknown_b_;
    var3.unknown_5_ = arg1->unknown_c_;
    func_ov000_021633b8((char*)var2, &var3);
    if (arg1->unknown_a_ >= 0) {
        ((Type_ov017_021cd424)func_ov000_02163404)(var2, arg1->unknown_a_);
    }
    func_ov000_02160fa8(var2, 0x8000);
}
