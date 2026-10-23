#include <globaldefs.h>

struct Struct_0205d81c;
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
    unsigned char unknown_b0_[0xc];
    short unknown_bc_;
    short unknown_be_;
};
extern "C" Struct_0205d0e0* func_0205d8c4(Struct_0205d81c*);
extern "C" int func_0204c7e0(unsigned char*);

struct Struct_0205a254;
extern "C" void func_0205a370(Struct_0205a254*, int);
extern "C" unsigned char* func_0205a3d0(Struct_0205a254*, int);

struct Struct_0205a330;
extern "C" void func_0205a330(Struct_0205a330*, int);

extern "C" void func_0205ae8c(void*);

struct Struct_ov013_02186cac {
    char unknown_0_[0x3c];
    void* unknown_3c_;
};

// USA: func_ov013_02186cac
extern "C" ARM void func_ov013_02186cac(void* arg0) {
#if defined(jpn)
    enum { Enum_ov013_02186cac_1724 = 0x644, Enum_ov013_02186cac_56 = 0x34, Enum_ov013_02186cac_1596 = 0x5c8 };
#else
    enum { Enum_ov013_02186cac_1724 = 0x6bc, Enum_ov013_02186cac_56 = 0x38, Enum_ov013_02186cac_1596 = 0x63c };
#endif
    unsigned char* var0 = (unsigned char*)arg0;
    Struct_0205d0e0* var1;
    short var2, var3;
    unsigned char var4;
    Struct_ov013_02186cac* var5;
    Struct_0205a254* var6;
    unsigned char* var7;

    if (*(void**)(var0 + 0x18) == 0) return;
    if (!(var0[Enum_ov013_02186cac_1724] & 1)) return;

    var1 = func_0205d8c4((Struct_0205d81c*)(var0 + Enum_ov013_02186cac_56));
    if (var1 == 0) return;
    if (!func_0204c7e0((unsigned char*)var1)) return;

    var2 = var1->unknown_ac_ * 8;
    var3 = var1->unknown_ae_ * 8;
    var2 += var1->unknown_bc_;
    var3 += var1->unknown_be_;
    var4 = var0[Enum_ov013_02186cac_1596];

    if (var4 != 3 && var4 != 4) {
        var2 = var2 - 8;
        var3 = var3 - 2;
    } else {
        var2 = var2 - 8;
    }

    var5 = *(Struct_ov013_02186cac**)(var0 + 0x18);
    var6 = (Struct_0205a254*)var5->unknown_3c_;
    if (var6 == 0) return;

    func_0205a370(var6, *(unsigned short*)(var0 + 0x1c));
    var7 = func_0205a3d0(var6, *(unsigned short*)(var0 + 0x1c));
    if (var7 != 0) var7[0x15] |= 8;

    func_0205a330((Struct_0205a330*)var6, *(int*)(var0 + 0x14));

    var7 = func_0205a3d0(var6, *(unsigned short*)(var0 + 0x1c));
    if (var7 != 0) {
        *(short*)(var7 + 4) = var2;
        *(short*)(var7 + 6) = var3;
    }

    func_0205ae8c(*(void**)(var0 + 0x18));
}
