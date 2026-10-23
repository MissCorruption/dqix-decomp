#include <globaldefs.h>

struct Struct_ov004_0215883c;
extern "C" int func_ov011_02184540(struct Struct_ov004_0215883c* arg0);
struct Struct_ov004_0215883c_2;
extern "C" int func_ov011_02184548(struct Struct_ov004_0215883c_2* arg0);

struct Struct_ov023_021f7688;
struct Struct_02020aec;
extern "C" void func_ov023_021f7aac(struct Struct_ov023_021f7688* arg0, void* arg1, struct Struct_02020aec* arg2, unsigned int arg3);
extern "C" void func_ov023_021f7b98(struct Struct_ov023_021f7688* arg0, void* arg1, int arg2, struct Struct_02020aec* arg3, unsigned int arg4);

struct Struct_ov023_021f7688_3 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
};

// USA: func_ov023_021f7ca0
extern "C" ARM void func_ov023_021f7ca0(struct Struct_ov023_021f7688_3* arg0, void* arg1) {
    struct Struct_02020aec* var0 = (struct Struct_02020aec*)func_ov011_02184540((struct Struct_ov004_0215883c*)arg1);
    unsigned int var1 = func_ov011_02184548((struct Struct_ov004_0215883c_2*)arg1);
    if (var0 != 0 && var1 != 0) {
        if (arg0->unknown_c_ & 0x2) {
            func_ov023_021f7b98((struct Struct_ov023_021f7688*)arg0, arg1, 1, var0, var1);
        } else {
            func_ov023_021f7aac((struct Struct_ov023_021f7688*)arg0, arg1, var0, var1);
        }
    }
}
