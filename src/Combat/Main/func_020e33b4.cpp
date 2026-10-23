#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_0208ab34_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern "C" Struct_0208ab34_2* func_020e3054(Struct_0208ab34_2* arg0, int arg1);

struct Struct_020e3004_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern "C" void func_020e303c(Struct_020e3004_2* arg0);

struct Struct_0202c540 { int unknown_0_; };
extern "C" ARM int func_0202c540(Struct_0202c540* arg0);

struct Struct_0202c1a4 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);

extern "C" void func_ov017_021ceae4(unsigned char arg0, unsigned char arg1, unsigned char arg2);

// USA: func_020e33b4
extern "C" ARM void func_020e33b4(Struct_0208ab34_2* arg0, int arg1, int arg2) {
    void* var0 = func_0202ae18();
    if (!func_0202b7d8((int*)var0)) return;
    Struct_0208ab34_2* var1 = func_020e3054(arg0, arg1);
    if (var1 == NULL) return;
    if (var1->unknown_0_ != arg2) return;
    func_020e303c((Struct_020e3004_2*)var1);
    if (!func_0202c540((Struct_0202c540*)var0)) return;
    signed char var2 = func_0202c1a4((Struct_0202c1a4*)var0);
    func_ov017_021ceae4(0, (unsigned char)arg1, (unsigned char)var2);
}
