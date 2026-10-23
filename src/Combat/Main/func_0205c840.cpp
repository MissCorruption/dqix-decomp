#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0205c73c;
extern "C" void func_0205c73c(struct Struct_0205c73c* arg0);
struct Struct_0205c53c;
extern "C" void func_0205c564(struct Struct_0205c53c* arg0);
struct Struct_02042c68;
extern "C" void func_02042fcc(struct Struct_02042c68* arg0);
extern "C" int func_020421a0(void);
#if defined(jpn)
extern "C" void func_020471d0(void* arg0, int arg1, void* arg2, int arg3);
#else
extern "C" void func_020462d0(void* arg0, void* arg1, int arg2);
#endif

// USA: func_0205c840
extern "C" ARM void func_0205c840(char* arg0) {
    unsigned char* var0 = (unsigned char*)func_020421a0();
    var0[RG(0x19b0, 0x17e0)] = 0;

    func_0205c73c((struct Struct_0205c73c*)(arg0 + 0x4));
    func_0205c564((struct Struct_0205c53c*)(arg0 + 0x1c));
    func_02042fcc((struct Struct_02042c68*)(arg0 + 0xb4));

    *(int*)(arg0 + 0xd0) = 0;

    if (*(unsigned char*)(arg0 + RG(0x232, 0x1c2)) != 0) {
        unsigned char* var1 = (unsigned char*)func_020421a0();
        for (int var2 = 0; var2 < *(unsigned char*)(arg0 + RG(0x232, 0x1c2)); var2++) {
            unsigned short var3 = *(unsigned short*)(arg0 + RG(0x220, 0x1b0) + var2 * 2);
#if defined(jpn)
            func_020471d0(var1, 0xc, (unsigned short*)(arg0 + 0x120) + var3, 0x100);
#else
            func_020462d0(var1, (unsigned short*)(arg0 + 0x120) + var3, 0x100);
#endif
        }
    }

    memset(arg0 + 0x120, 0, RG(0x100, 0x90));
    memset(arg0 + RG(0x220, 0x1b0), 0, 0x10);

    *(short*)(arg0 + RG(0x230, 0x1c0)) = 0;
    *(unsigned char*)(arg0 + RG(0x232, 0x1c2)) = 0;
    *(unsigned char*)(arg0 + RG(0x233, 0x1c3)) = 0;
    *(unsigned char*)(arg0 + RG(0x234, 0x1c4)) = 0;
}
