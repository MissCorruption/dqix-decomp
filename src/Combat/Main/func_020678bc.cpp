#include <globaldefs.h>

#if defined(jpn)
#include "Resource/MessageSystem.h"
#define func_020678bc func_0206917c
#else
enum { Enum_020678bc_120 = 0x78, Enum_020678bc_76 = 0x4c, Enum_020678bc_88 = 0x58, Enum_020678bc_144 = 0x90, Enum_020678bc_6605 = 0x19cd, Enum_020678bc_64 = 0x40, Enum_020678bc_2388 = 0x954 };
#endif

struct Struct_02108760;

extern "C" void func_0206b104(void* arg0);
#if defined(jpn)
extern "C" void func_0206cbe8(void*, unsigned short, unsigned short*);
#else
struct Struct_020678bc;
extern "C" void func_0206b2c8(Struct_020678bc*, int, void*);
#endif
#if defined(jpn)
extern "C" void func_0205c840(char* arg0);
#define func_0205c840(p) func_0205c840((char*)(p))
#else
extern "C" void func_0205c840(char* arg0);
#endif
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern char data_02108760;

// JPN: func_0206917c
// USA: func_020678bc
#if defined(jpn)
extern "C" ARM void func_020678bc(Struct_02021b84* arg0, int arg1) {
    int var0 = arg0->unknown_78_;
    unsigned short* var1 = arg0->unknown_4c_;
#else
extern "C" ARM void func_020678bc(char* arg0, int arg1) {
    int var0 = *(int*)(arg0 + Enum_020678bc_120);
    unsigned short* var1 = *(unsigned short**)(arg0 + Enum_020678bc_76);
#endif
    unsigned short var2 = var1[var0];
    int var3 = (var2 == 0xff06);
    int var4 = (var2 == 0xff07);

    switch (arg1) {
    case 0:
        func_0206b104(arg0);
        if (!var3) {
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
        }
#if defined(jpn)
        func_0206cbe8(arg0, 0xff14, arg0->unknown_24_);
#else
        func_0206b2c8((Struct_020678bc*)arg0, 0xff14, *(void**)(arg0 + Enum_020678bc_88));
#endif
#if defined(jpn)
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
#else
        func_0205c840(arg0 + Enum_020678bc_144);
        *(unsigned char*)(arg0 + Enum_020678bc_6605) = 1;
        *(int*)(arg0 + Enum_020678bc_64) = 0;
#endif
        return;
    case 1:
        if (!var3 && !var4) {
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
        }
    case -2:
#if defined(jpn)
        arg0->unknown_94c_[2] = 1;
#else
        *(int*)(arg0 + Enum_020678bc_2388) = 1;
#endif
        func_0206b104(arg0);
#if defined(jpn)
        func_0206cbe8(arg0, 0xff15, arg0->unknown_24_);
#else
        func_0206b2c8((Struct_020678bc*)arg0, 0xff15, *(void**)(arg0 + Enum_020678bc_88));
#endif
#if defined(jpn)
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
#else
        func_0205c840(arg0 + Enum_020678bc_144);
        *(unsigned char*)(arg0 + Enum_020678bc_6605) = 1;
        *(int*)(arg0 + Enum_020678bc_64) = 0;
#endif
        return;
    default:
        return;
    }
}

#if defined(jpn)
#undef func_020678bc
#undef func_0205c840
#endif
