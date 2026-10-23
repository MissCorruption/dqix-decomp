#if defined(jpn)
#define func_ov014_021885bc func_ov014_0218948c
#endif

#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" void func_02080bac(void* arg0, int arg1);
extern "C" void func_0208065c(void* arg0, int arg1);
struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c* arg0, int arg1, int arg2);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);
extern "C" void func_020806b0(void* arg0, int arg1);
extern "C" void func_02080b2c(void* arg0, int arg1);
extern "C" void func_02081130(void* arg0, int arg1, int arg2);
extern "C" int func_020813ec(void* arg0, int arg1);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
struct Struct_ov014_02186bc8_3;
extern "C" short func_ov014_021874f8(struct Struct_ov014_02186bc8_3* arg0);
struct Struct_ov014_021872dc;
extern "C" short func_ov014_02187520(struct Struct_ov014_021872dc* arg0);

struct Struct_ov014_021885bc {
    struct Struct_ov014_021885bc* unknown_0_;
    char unknown_4_[4];
    int unknown_8_;
    char unknown_c_[0x13 - 0xc];
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
};

// USA: func_ov014_021885bc
extern "C" ARM void func_ov014_021885bc(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + 0xc0);
    short var1 = *(short*)((char*)arg0 + 0x176);
    *(short*)((char*)var0 + LOW_REGION(0x2a, 0x36)) = var1;
    func_02080bac(var0, 5);
    func_0208065c(var0, 5);

    struct Struct_ov014_021885bc* var2 = *(struct Struct_ov014_021885bc**)((char*)arg0 + 0xbc);
    short var3 = 0x1b;
    short var4 = 0;
    for (; var4 < 0x10; var3++, var4++) {
        if (var2 != NULL) {
            int var5 = func_020e0434((struct Struct_0201099c_3*)((char*)arg0 + 0xe0), 0x15);
            func_02080f8c((struct Struct_02080f8c*)var0, var3, var5);
            if (var2->unknown_13_1_) {
                func_02080f8c((struct Struct_02080f8c*)*(void**)((char*)arg0 + 0xc0), var3, var2->unknown_8_);
            }
            var2 = var2->unknown_0_;
        } else {
            func_020806b0(var0, var3);
            func_02080b2c(var0, var3);
        }
    }

    short var6 = func_ov014_021874f8((struct Struct_ov014_02186bc8_3*)arg0);
    short var7 = (short)(func_ov014_02187520((struct Struct_ov014_021872dc*)arg0) + 1);
    func_02080fa8((struct Struct_02080fa8*)var0, 0x2b, var7);
    short var8 = (short)((var6 + 0xf) / 0x10);
    func_02080fa8((struct Struct_02080fa8*)var0, 0x2d, var8);
    int var9 = (var6 > 0x10) ? 1 : 0;
    func_02081130(var0, 5, var9);
    func_020813ec(var0, 5);
}
