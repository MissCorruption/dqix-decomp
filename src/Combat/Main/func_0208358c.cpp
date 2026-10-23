#include <globaldefs.h>
#include <std_library_functions.h>
#if defined(jpn)
extern "C" int func_020d2ff0(const char*);
#endif
struct Struct_0208358c { int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_; };
struct Struct_0208358c_2 { Struct_0208358c* unknown_0_; char* unknown_4_; unsigned int unknown_8_0_:4; unsigned int unknown_8_4_:28; char unknown_c_[20]; };
struct Struct_0208358c_3 { char unknown_0_[0x194]; Struct_0208358c_2 unknown_194_[11];
#if defined(jpn)
    char unknown_2f4_[0x364];
#else
    char unknown1_2f4_[0x3fc];
#endif
    Struct_0208358c unknown_6f0_[11]; };
struct Struct_02083508_2;
extern "C" void func_020de1d4(Struct_02083508_2*);
extern "C" void func_020836e4(Struct_0208358c_2*, Struct_0208358c_2*);
extern "C" unsigned char* func_0208349c(unsigned char*, int);
// USA: func_0208358c
extern "C" ARM void func_0208358c(Struct_0208358c_3* arg0, Struct_0208358c_2* arg1, int arg2) {
    if (!arg1) return;
    int var0 = -1;
    switch (arg1->unknown_8_0_) {
    case 0: var0 = 8; break;
    case 1: var0 = 9; break;
    case 4: var0 = 7; break;
    case 2: var0 = 0; break;
    case 5: var0 = 5; break;
    case 3: var0 = 1; break;
    case 6: var0 = 6; break;
    case 7: var0 = 10; break;
    case 11: var0 = arg2; break;
    }
    if (var0 < 0) return;
    Struct_0208358c_2* var1 = &arg0->unknown_194_[var0];
    Struct_0208358c* var2 = var1->unknown_0_;
    char* var3 = var1->unknown_4_;
    Struct_0208358c* var4 = arg1->unknown_0_;
    var2->unknown_0_ = var4->unknown_0_; var2->unknown_4_ = var4->unknown_4_; var2->unknown_8_ = var4->unknown_8_; var2->unknown_c_ = var4->unknown_c_;
    var2->unknown_10_ = var4->unknown_10_; var2->unknown_14_ = var4->unknown_14_; var2->unknown_18_ = var4->unknown_18_; var2->unknown_1c_ = var4->unknown_1c_;
#if defined(jpn)
    memset(var3, 0, 0x14);
    if (arg1->unknown_4_) { memcpy(var3, arg1->unknown_4_, func_020d2ff0(arg1->unknown_4_)); }
#else
    *var3 = 0;
    if (arg1->unknown_4_) { memset(var3, 0, 0x30); sprintf(var3, arg1->unknown_4_); }
#endif
    func_020de1d4((Struct_02083508_2*)var1);
    func_020836e4(var1, arg1);
    var1->unknown_0_ = &arg0->unknown_6f0_[var0];
#if defined(jpn)
    var1->unknown_4_ = (char*)arg0 + 0x56f + var0 * 0x15;
#else
    var1->unknown_4_ = (char*)func_0208349c((unsigned char*)arg0, var0);
#endif
}
