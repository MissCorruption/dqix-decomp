#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_020dc214_1744 = 0x4c0 };
#else
enum { Enum_020dc214_1744 = 0x6d0 };
#endif


extern "C" void* func_02012fe4(void);
struct Struct_02022d78;
extern "C" void func_02022d78(struct Struct_02022d78*, int);
extern "C" int func_0201b588(int);

// USA: func_020dc214
extern "C" ARM void func_020dc214(int arg0) {
    int var0 = (int)GetGameResources();
    void* var1 = *(void**)(var0 + 0x3000 + Enum_020dc214_1744);
    unsigned short var2 = *(unsigned short*)func_02012fe4();
    struct Struct_02022d78* var3 = (struct Struct_02022d78*)var1;
    if (arg0 == 1) {
        func_02022d78(var3, 1);
        return;
    }
    if (arg0 == 2) {
        func_02022d78(var3, 4);
        return;
    }
    if (arg0 != 0) {
        return;
    }
    if (func_0201b588(var2)) {
        func_02022d78(var3, 3);
        return;
    }
    if (var2 == 0x2710 || var2 == 0x2774) {
        func_02022d78(var3, 4);
    } else {
        func_02022d78(var3, 0);
    }
}
