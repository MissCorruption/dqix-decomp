#include <globaldefs.h>

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);
bool GetTreasureMapTypeFromItemID(unsigned short itemID, unsigned char* out);
extern "C" void func_ov000_0216341c(void* arg0, unsigned char arg1, unsigned char arg2, short arg3);
extern "C" void func_ov000_02163404(void* arg0, unsigned char arg1);
extern "C" void func_ov000_02160fa8(void* arg0, int arg1);
typedef void (*Type_ov017_021cd424)(void*, int);
typedef void (*Type_ov017_021cd510)(void*, unsigned char, unsigned char, unsigned short);

struct Struct_ov017_021cd510 { unsigned char unknown_0_[8]; unsigned short unknown_8_; };
struct Struct_ov017_021cd510_2 { unsigned char unknown_0_[4]; unsigned short unknown_4_; unsigned short unknown_6_; signed char unknown_8_; };

// USA: func_ov017_021cd510
extern "C" ARM void func_ov017_021cd510(int arg0, Struct_ov017_021cd510_2* arg1, int arg2, unsigned char* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021cd510_1816=0x508};
#else
 enum {Enum_ov017_021cd510_1816=0x718};
#endif
    unsigned char* var0 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021cd510_1816);
    Struct_ov017_021cd510* var1 = (Struct_ov017_021cd510*)func_ov017_021b8478(var0);
    if (var1->unknown_8_ != arg1->unknown_4_) return;

    unsigned char var2[4];
    if (!GetTreasureMapTypeFromItemID(arg1->unknown_6_, var2)) return;

    unsigned char* var3 = (unsigned char*)func_ov017_021b8468(var0);
    if (!var3) return;

    ((Type_ov017_021cd510)func_ov000_0216341c)(var3, var2[0], var2[1], *(unsigned short*)(var2 + 2));

    if (arg1->unknown_8_ >= 0) {
        ((Type_ov017_021cd424)func_ov000_02163404)(var3, arg1->unknown_8_);
    }
    func_ov000_02160fa8(var3, 0x8000);
}
