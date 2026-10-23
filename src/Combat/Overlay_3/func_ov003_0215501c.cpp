#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0215501c_486 = 0x1e2 };
enum { Enum_ov003_0215501c_476 = 0x1d8 };
#else
enum { Enum_ov003_0215501c_486 = 0x1e6 };
enum { Enum_ov003_0215501c_476 = 0x1dc };
#endif

struct Struct_0207fdcc_2;
struct Struct_0207fdcc;
extern "C" Struct_0207fdcc* func_02081da8(Struct_0207fdcc_2* arg0, int arg1);

extern "C" int func_0204c7e0(unsigned char* arg0);

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);

extern "C" void func_020809c4(void* arg0, int arg1, int arg2, short* arg3, short* arg4);

struct Struct_020e263c_2;
extern "C" void func_020e263c(struct Struct_020e263c_2* arg0, int arg1);

struct Struct_020e28f0;
extern "C" void func_020e28f0(struct Struct_020e28f0* arg0, short arg1, short arg2);

extern "C" void func_0205ae8c(void* arg0);

// USA: func_ov003_0215501c
extern "C" ARM void func_ov003_0215501c(unsigned char* arg0) {
    if (*(void**)(arg0 + 8) == NULL) {
        return;
    }
    if (*(short*)(arg0 + Enum_ov003_0215501c_486) < 0) {
        return;
    }
    Struct_0207fdcc* var0 = func_02081da8(*(Struct_0207fdcc_2**)(arg0 + 0x18), *(short*)(arg0 + Enum_ov003_0215501c_486));
    if (var0 == NULL) {
        return;
    }
    if (func_0204c7e0((unsigned char*)var0) == 0 || *(void**)(arg0 + 0x1c) == NULL) {
        return;
    }
    if (func_020e28dc(*(Struct_020e28dc**)(arg0 + 0x1c)) != 0) {
        return;
    }
    short var1, var2;
    func_020809c4(*(Struct_0207fdcc_2**)(arg0 + 0x18), *(short*)(arg0 + Enum_ov003_0215501c_486), *(short*)*(void**)(arg0 + 8), &var1, &var2);
    func_020e263c(*(Struct_020e263c_2**)(arg0 + 0x1c), *(int*)(arg0 + Enum_ov003_0215501c_476));
    var1 = var1 - 0x10;
    var2 = var2 - 3;
    func_020e28f0(*(Struct_020e28f0**)(arg0 + 0x1c), var1, var2);
    func_0205ae8c(arg0 + 0x2c);
}
