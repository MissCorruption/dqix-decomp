#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_0202ae18(void);
extern "C" int func_0202c508(void);
extern "C" void func_ov017_021ca2a0(int arg0, int arg1);
extern "C" void* func_0207d78c(void);
struct Struct_0207d7f4;
extern "C" struct Struct_0207d7f4* func_0207d9bc(struct Struct_0207d7f4* arg0, unsigned short arg1);
extern "C" void func_0207d7f4(void* arg0, unsigned short arg1, int arg2, int arg3, int arg4, unsigned short arg5, unsigned char arg6);
extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void func_ov017_021b88d0(void* arg0, int arg1, unsigned short arg2);

// USA: func_ov017_021c5a8c
extern "C" ARM void func_ov017_021c5a8c(int arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov017_021c5a8c_1816=0x508};
#else
 enum {Enum_ov017_021c5a8c_1816=0x718};
#endif
    func_0202ae18();
    if (func_0202c508()) {
        func_ov017_021ca2a0(arg0, (unsigned short)arg1);

        void* var0 = func_0207d78c();
        struct Struct_0207d7f4* var1 = func_0207d9bc((struct Struct_0207d7f4*)var0, arg1);
        if (var1 != NULL) {
            char* var2 = (char*)var1;
            func_0207d7f4(var0, arg1, arg0, 1, var2[4], *(unsigned short*)(var2 + 2), *(unsigned char*)(var2 + 5));
        }

        void* var3 = (char*)GetGameResources() + 0x3000;
        void* var4 = *(void**)((char*)var3 + Enum_ov017_021c5a8c_1816);
        void* var5 = func_ov017_021b8478(var4);
        unsigned short var6 = *(unsigned short*)((char*)var5 + 8);
        if (var6 == arg1) {
            func_ov017_021b88d0(var4, arg0, arg1);
        }
    }
}
