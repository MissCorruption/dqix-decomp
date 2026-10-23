#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_0205d81c;
struct Struct_02021b84;

struct Struct_ov023_021e7d8c {
    char unknown_0_[0x78];
    char unknown_78_[0x5d8 - 0x78];
    char* unknown_5d8_;
};

typedef void (Struct_ov023_021e7d8c::*Type_ov023_021e7d8c)();

struct Struct_ov023_021fd7cc {
    Type_ov023_021e7d8c unknown_0_[3];
};

struct Struct_ov023_021e7d8c_2 {
    short unknown_0_[3];
};

struct Struct_ov023_021fd75c {
    char unknown_0_[0x32];
    Struct_ov023_021e7d8c_2 unknown_32_;
    char unknown_38_[0x6c - 0x38];
};

extern Struct_ov023_021fd7cc data_ov023_021fd7cc;
extern Struct_ov023_021fd75c data_ov023_021fd75c;

extern "C" Struct_02021b84* func_020421a0();
extern "C" void func_0205deb4(Struct_0205d81c* arg0, int arg1, int arg2);

extern "C" {
void func_02046380(Struct_02021b84* arg0);
void func_ov023_021e7cec(Struct_ov023_021e7d8c* arg0, int arg1, short arg2, short arg3);
void func_0205d304(void* arg0, char* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
}

// USA: func_ov023_021e7d8c
extern "C" ARM void func_ov023_021e7d8c(Struct_ov023_021e7d8c* arg0)
{
    Struct_02021b84* var0 = func_020421a0();
    Type_ov023_021e7d8c var1[3];
    *(Struct_ov023_021fd7cc*)var1 = data_ov023_021fd7cc;
    short var2[3];
    *(Struct_ov023_021e7d8c_2*)var2 = data_ov023_021fd75c.unknown_32_;
    for (unsigned char var3 = 0; var3 < 3; var3++)
    {
        func_02046380(var0);
        func_ov023_021e7cec(arg0, var3, 2, var2[var3]);
        memset(arg0->unknown_5d8_, 0, 0x960);
        (arg0->*var1[var3])();
        func_0205d304(arg0->unknown_78_, arg0->unknown_5d8_, 0, 0, 0, 1, 0, 0);
    }
    for (int var4 = 0; var4 < 3; var4++)
        func_0205deb4((Struct_0205d81c*)arg0->unknown_78_, (unsigned char)var4, 0);
}
