#if defined(jpn)
enum { Enum_ov017_021a5bac_16832 = 0x3fa0, Enum_ov017_021a5bac_16824 = 0x3f98, Enum_ov017_021a5bac_16828 = 0x3f9c, Enum_ov017_021a5bac_16820 = 0x3f94, Enum_ov017_021a5bac_16532 = 0x3e74, Enum_ov017_021a5bac_16528 = 0x3e70 };
#else
enum { Enum_ov017_021a5bac_16832 = 0x41c0, Enum_ov017_021a5bac_16824 = 0x41b8, Enum_ov017_021a5bac_16828 = 0x41bc, Enum_ov017_021a5bac_16820 = 0x41b4, Enum_ov017_021a5bac_16532 = 0x4094, Enum_ov017_021a5bac_16528 = 0x4090 };
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" unsigned int GetMainBG1CharacterBase(void);

struct Struct_ov017_021a5ad0;
extern "C" void func_ov017_021a5ad0(struct Struct_ov017_021a5ad0* arg0, int arg1, int arg2);
extern "C" void func_ov017_021a5b08(struct Struct_ov017_021a5ad0* arg0, int arg1);

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0* arg0);
struct Struct_0205d274;
extern "C" void func_0205d274(struct Struct_0205d274* arg0);
struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc* arg0);
struct Struct_0205d048;
extern "C" void func_0205d048(struct Struct_0205d048* arg0);

extern "C" void func_ov017_021a5b48(unsigned char* arg0);

// USA: func_ov017_021a5bac
#pragma opt_common_subs off
extern "C" ARM void func_ov017_021a5bac(unsigned char* arg0) {
    if (*(int*)(arg0 + Enum_ov017_021a5bac_16832) == 0) {
        return;
    }

    if (*(int*)(arg0 + Enum_ov017_021a5bac_16824) != 0) {
        volatile unsigned int* var0 = (volatile unsigned int*)0x4000000;
        *var0 = (*var0 & ~0x1f00) | 0x100;

        if (*(int*)(arg0 + Enum_ov017_021a5bac_16828) >= 0) {
            ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->RemoveTask((int)(*(int*)(arg0 + Enum_ov017_021a5bac_16828)));
            *(int*)(arg0 + Enum_ov017_021a5bac_16828) = -1;
        }

        volatile unsigned short* var1 = (volatile unsigned short*)0x4000050;
        *var1 = 0;
        volatile unsigned short* var2 = (volatile unsigned short*)0x4000008;
        *var2 = (*var2 & ~3) | 1;

        if (*(int*)(arg0 + Enum_ov017_021a5bac_16820) != 0) {
            memset((void*)GetMainBG1CharacterBase(), 0, 0x20);
            func_ov017_021a5ad0((struct Struct_ov017_021a5ad0*)(arg0 + Enum_ov017_021a5bac_16532), 2, 0x800);

            void* var3 = *(void**)(arg0 + Enum_ov017_021a5bac_16528);
            func_0205d1e0((struct Struct_0205d1e0*)var3);
            func_0205d274((struct Struct_0205d274*)var3);
            func_0205d2bc((struct Struct_0205d2bc*)var3);

            func_ov017_021a5b08((struct Struct_ov017_021a5ad0*)(arg0 + Enum_ov017_021a5bac_16532), 2);

            func_0205d048((struct Struct_0205d048*)var3);

            *var0 = (*var0 & ~0x1f00) | 0x1300;
        }
    }

    func_ov017_021a5b48(arg0);
}
