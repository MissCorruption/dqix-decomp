#include <globaldefs.h>

struct Struct_ov023_021e67f4_3 {
    char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xbc - 0xb0];
    short unknown_bc_;
    short unknown_be_;
};

struct Struct_ov023_021e67f4_2 {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    char unknown_8_[0x15 - 8];
    unsigned char unknown_15_;
};

struct Struct_0205d81c;
struct Struct_0205a254;
struct Struct_0205a330;

extern "C" Struct_ov023_021e67f4_3* func_0205d8c4(struct Struct_0205d81c* arg0);
extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" Struct_ov023_021e67f4_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);
extern "C" void func_0205ae8c(void* arg0);

#if defined(jpn)
struct Struct_ov023_021e67f4 {
    char unknown_0_[0x90];
    char unknown_ac_[0x1334 - 0x90];
    void* unknown_135c_;
    void* unknown_1360_;
    char unknown_133c_[0x1368 - 0x133c];
    unsigned char unknown_13a0_;
    char unknown_1369_[3];
    int unknown_13a4_;
};

#else
struct Struct_ov023_021e67f4 {
    char unknown_0_[0xac];
    char unknown_ac_[0x135c - 0xac];
    void* unknown_135c_;
    void* unknown_1360_;
    char unknown_1364_[0x13a0 - 0x1364];
    unsigned char unknown_13a0_;
    char unknown_13a1_[3];
    int unknown_13a4_;
};

#endif
// USA: func_ov023_021e67f4
extern "C" ARM void func_ov023_021e67f4(Struct_ov023_021e67f4* arg0)
{
    if (arg0->unknown_13a0_ == 0)
        return;
    Struct_ov023_021e67f4_3* var0 = func_0205d8c4((Struct_0205d81c*)arg0->unknown_ac_);
    if (var0 == NULL)
        return;
    if (!func_0204c7e0((unsigned char*)var0))
        return;
    short var1 = var0->unknown_ac_ * 8;
    short var2 = var0->unknown_ae_ * 8;
    var1 += var0->unknown_bc_;
    var2 += var0->unknown_be_;
    func_0205a370((Struct_0205a254*)arg0->unknown_1360_, 0);
    Struct_ov023_021e67f4_2* var3 = func_0205a3d0((Struct_0205a254*)arg0->unknown_1360_, 0);
    if (var3 != NULL)
        var3->unknown_15_ |= 8;
    func_0205a330((Struct_0205a330*)arg0->unknown_1360_, arg0->unknown_13a4_);
    var3 = func_0205a3d0((Struct_0205a254*)arg0->unknown_1360_, 0);
    if (var3 != NULL)
    {
        var3->unknown_4_ = var1 - 8;
        var3->unknown_6_ = var2 - 2;
    }
    func_0205ae8c(arg0->unknown_135c_);
}
