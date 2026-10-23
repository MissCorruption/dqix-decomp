#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021f6524 func_ov004_02168f08
#define func_ov004_02168b08 func_ov004_02169040
#endif

extern "C" int func_020421a0(void);
extern "C" void* func_ov023_021f6524(void* arg0, int arg1);
struct Struct_02072a68_2;
extern "C" Struct_02072a68_2* func_ov004_02168b08(void* arg0, int arg1);
extern "C" int func_ov023_021f9bc8(char* arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02046380(void* arg0);
extern "C" void func_02042764(unsigned char* arg0, char* arg1, int arg2);
struct Struct_02046574_2;
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

extern void* data_ov004_02171030;

// USA: func_ov004_02169a28
// KEEP-NAME
extern "C" ARM int func_ov004_02169a28(void* arg0) {
#if defined(jpn)
    char* var0 = *(char**)((char*)data_ov004_02171030 + 0x10);
#else
    char* var0 = *(char**)((char*)data_ov004_02171030 + 0x190);
#endif
    if (!var0) return 0;

    void* var1 = (void*)func_020421a0();
    char* var2 = (char*)func_ov023_021f6524(arg0, 0x64);
    func_ov004_02168b08(arg0, 3);
    short var3 = *(short*)(var2 + 0x5c);
    int var4 = func_ov023_021f9bc8(var2);

#if !defined(jpn)
    char var5[0x30];
    __clear(var5, 0x30);
#endif
    func_02046380(var1);

    char (*var6)[0x2c] = (char (*)[0x2c])(var0 + 4);
    char* var7 = var6[var4 + var3 * 8] + 6;
#if defined(jpn)
    func_02046574((struct Struct_02046574_2*)var1, 0, var7);
#else
    func_02042764((unsigned char*)var7, var5, 1);
    func_02046574((struct Struct_02046574_2*)var1, 0, var5);
#endif
    func_ov011_021848a0(arg0, 0x51);
    return 0;
}
