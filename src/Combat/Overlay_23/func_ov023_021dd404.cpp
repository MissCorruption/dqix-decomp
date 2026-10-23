#if defined(jpn)
enum {Enum_ov023_021dd404_1792=0x600, Enum_ov023_021dd404_116=0xf0, Enum_ov023_021dd404_1947=0x717, Enum_ov023_021dd404_520=0x204, Enum_ov023_021dd404_300=0x128};
#else
enum {Enum_ov023_021dd404_1792=0x700, Enum_ov023_021dd404_116=0x74, Enum_ov023_021dd404_1947=0x79b, Enum_ov023_021dd404_520=0x208, Enum_ov023_021dd404_300=0x12c};
#endif
#include <globaldefs.h>

extern "C" void func_0205ac40(void* arg0, void* arg1, void* arg2, int arg3);

struct Struct_ov023_021dd404 {
    unsigned char unknown_0_0_:1;
    unsigned char unknown_0_1_:1;
    unsigned char unknown_0_2_:6;
};

struct Struct_ov023_021dd404_2 {
    char unknown_0_[Enum_ov023_021dd404_116];
    unsigned short unknown_74_;
    char unknown_76_[0x7b - 0x76];
    signed char unknown_7b_;
    char unknown_7c_[0x7d - 0x7c];
    signed char unknown_7d_;
};

// USA: func_ov023_021dd404
extern "C" ARM void func_ov023_021dd404(char* arg0) {
    if (((Struct_ov023_021dd404_2*)(arg0 + Enum_ov023_021dd404_1792))->unknown_7b_ == 1) {
        if (!((Struct_ov023_021dd404*)(arg0 + Enum_ov023_021dd404_1947))->unknown_0_1_) return;
        Struct_ov023_021dd404_2* var0 = (Struct_ov023_021dd404_2*)(arg0 + Enum_ov023_021dd404_1792);
        if (!(var0->unknown_74_ & 0x2000)) return;
    }
    signed char var1 = ((Struct_ov023_021dd404_2*)(arg0 + Enum_ov023_021dd404_1792))->unknown_7d_;
    if (var1 == 1) {
        Struct_ov023_021dd404_2* var2 = (Struct_ov023_021dd404_2*)(arg0 + Enum_ov023_021dd404_1792);
        if (!(var2->unknown_74_ & 0x800)) return;
        char* var3 = arg0 + Enum_ov023_021dd404_520;
        *(unsigned char*)(var3 + 0x426) = 1;
        *(unsigned int*)(var3 + 0x414) = 0x10000;
        *(unsigned int*)(var3 + 0x418) = 0x68000;
        *(unsigned char*)(var3 + 0x422) = 0x58;
        func_0205ac40(arg0 + Enum_ov023_021dd404_300, var3 + 0x400, var3, 0x58);
        return;
    }
    if (var1 == 2) {
        Struct_ov023_021dd404_2* var4 = (Struct_ov023_021dd404_2*)(arg0 + Enum_ov023_021dd404_1792);
        if (!(var4->unknown_74_ & 0x800)) return;
        char* var5 = arg0 + Enum_ov023_021dd404_520;
        *(unsigned char*)(var5 + 0x426) = 2;
        *(unsigned int*)(var5 + 0x414) = 0x10000;
        *(unsigned int*)(var5 + 0x418) = 0x68000;
        *(unsigned char*)(var5 + 0x422) = 0x58;
        func_0205ac40(arg0 + Enum_ov023_021dd404_300, var5 + 0x400, var5, 0x58);
        return;
    }
}
