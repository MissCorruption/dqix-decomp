#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0217577c_4171 = 0xfc7 };
enum { Enum_ov003_0217577c_4172 = 0xfc8 };
enum { Enum_ov003_0217577c_2204 = 0x818 };
#else
enum { Enum_ov003_0217577c_4171 = 0x104b };
enum { Enum_ov003_0217577c_4172 = 0x104c };
enum { Enum_ov003_0217577c_2204 = 0x89c };
#endif

struct Struct_0207fdcc_2;
struct Struct_0207fdcc;
extern "C" struct Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" int func_0204c7cc(unsigned char* arg0);
extern "C" void func_020809c4(void* arg0, int arg1, int arg2, short* arg3, short* arg4);
extern "C" void func_ov003_0217585c(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4);

struct Struct_ov003_0217577c {
    char unknown_0_[Enum_ov003_0217577c_2204];
    struct Struct_0207fdcc_2* unknown_89c_;
};

// USA: func_ov003_0217577c
extern "C" ARM void func_ov003_0217577c(void* arg0) {
    Struct_ov003_0217577c* var0 = (Struct_ov003_0217577c*)arg0;
    struct Struct_0207fdcc_2* var1 = var0->unknown_89c_;
    struct Struct_0207fdcc* var2 = func_02081da8(var1, 9);
    if (var2 == 0) return;
    if (!func_0204c7cc((unsigned char*)var2)) return;

    short var3, var4;
    int var5 = 0;
    if (*(unsigned char*)((char*)arg0 + Enum_ov003_0217577c_4171) != 0) var5 = 1;
    func_020809c4(var1, 9, 0x58, &var3, &var4);
    func_ov003_0217585c(arg0, var3 + var5, var4 + var5, 0x1d, 0x1e);

    int var6 = 0;
    if (*(unsigned char*)((char*)arg0 + Enum_ov003_0217577c_4172) != 0) var6 = 1;
    func_020809c4(var1, 9, 0x59, &var3, &var4);
    func_ov003_0217585c(arg0, var3 + var6, var4 + var6, 0x1e, 0x1f);
}
