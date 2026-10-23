#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02175fd4_4088 = 0xf74 };
enum { Enum_ov003_02175fd4_4094 = 0xf7a };
enum { Enum_ov003_02175fd4_2204 = 0x818 };
enum { Enum_ov003_02175fd4_4064 = 0xf5c };
enum { Enum_ov003_02175fd4_2008 = 0x754 };
#else
enum { Enum_ov003_02175fd4_4088 = 0xff8 };
enum { Enum_ov003_02175fd4_4094 = 0xffe };
enum { Enum_ov003_02175fd4_2204 = 0x89c };
enum { Enum_ov003_02175fd4_4064 = 0xfe0 };
enum { Enum_ov003_02175fd4_2008 = 0x7d8 };
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

// USA: func_ov003_02175fd4
extern "C" ARM void func_ov003_02175fd4(unsigned char* arg0) {
    if (*(void**)(arg0 + Enum_ov003_02175fd4_4088) == NULL) {
        return;
    }
    if (*(short*)(arg0 + Enum_ov003_02175fd4_4094) < 0) {
        return;
    }
    Struct_0207fdcc* var0 = func_02081da8(*(Struct_0207fdcc_2**)(arg0 + Enum_ov003_02175fd4_2204), *(short*)(arg0 + Enum_ov003_02175fd4_4094));
    if (var0 == NULL) {
        return;
    }
    if (func_0204c7e0((unsigned char*)var0) == 0 || *(void**)(arg0 + 0x0) == NULL) {
        return;
    }
    if (func_020e28dc(*(Struct_020e28dc**)(arg0 + 0x0)) != 0) {
        return;
    }
    short var1, var2;
    func_020809c4(*(Struct_0207fdcc_2**)(arg0 + Enum_ov003_02175fd4_2204), *(short*)(arg0 + Enum_ov003_02175fd4_4094), *(short*)*(void**)(arg0 + Enum_ov003_02175fd4_4088), &var1, &var2);
    func_020e263c(*(Struct_020e263c_2**)(arg0 + 0x0), *(int*)(arg0 + Enum_ov003_02175fd4_4064));
    var1 = var1 - 0x10;
    var2 = var2 - 3;
    func_020e28f0(*(Struct_020e28f0**)(arg0 + 0x0), var1, var2);
    func_0205ae8c(arg0 + Enum_ov003_02175fd4_2008);
}
