#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
extern "C" void func_ov000_02163344(void* arg0, int arg1, short arg2, unsigned char arg3, unsigned short arg4, unsigned short arg5);
typedef void (*Type_ov017_021cd2dc)(void*, int, unsigned short, unsigned int, unsigned short, unsigned short);

struct Struct_ov017_021cd2dc {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_0_ : 16;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_0_ : 4;
    unsigned short unknown_a_4_ : 12;
    unsigned short unknown_c_0_ : 4;
    unsigned short unknown_c_4_ : 12;
};
struct Struct_ov017_021cd2dc_2 { unsigned char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov017_021cd2dc
extern "C" ARM void func_ov017_021cd2dc(int arg0, Struct_ov017_021cd2dc* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cd2dc_1816=0x508};
#else
 enum {Enum_ov017_021cd2dc_1816=0x718};
#endif
    arg3 += 0x3000;
    void* var0 = *(void**)(arg3 + Enum_ov017_021cd2dc_1816);
    Struct_ov017_021cd2dc_2* var1 = (Struct_ov017_021cd2dc_2*)func_ov017_021b8478(var0);
    if (*(unsigned short*)((char*)var1 + 8) != arg1->unknown_4_0_) return;

    void* var2 = func_ov017_021b8468(var0);
    if (!var2) return;

    unsigned short var3 = arg1->unknown_c_0_;
    unsigned short var4 = arg1->unknown_a_4_;
    unsigned short var5 = arg1->unknown_6_;
    unsigned short var6 = arg1->unknown_8_;

    ((Type_ov017_021cd2dc)func_ov000_02163344)(var2, var5, var6, arg1->unknown_a_0_, var3, var4);
}
