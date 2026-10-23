#include <globaldefs.h>
#if defined(jpn)
enum{Enum_ov004_0216a464_400=0x10,Enum_ov004_0216a464_2456=0x868};
#else
enum{Enum_ov004_0216a464_400=0x190,Enum_ov004_0216a464_2456=0x998};
#endif
#if defined(jpn)
#define func_ov023_021f6524 func_ov004_02168f08
#define func_ov004_02168b08 func_ov004_02169040
#define func_ov023_021f65d4 func_ov004_02168eac
#endif

#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" void* func_ov023_021f6524(void* arg0, int arg1);
struct Struct_02072a68_2;
extern "C" Struct_02072a68_2* func_ov004_02168b08(void* arg0, int arg1);
extern "C" int func_020421a0(void);
extern "C" int func_ov023_021f9bc8(char* arg0);
extern "C" void func_ov004_0216950c(void* arg0);
extern "C" void func_ov004_0216920c(void* arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" void func_02046380(void* arg0);
extern "C" void func_02042764(void* arg0, void* arg1, int arg2);
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
#if defined(jpn)
extern "C" void func_0204500c(void*, void*, int);
#else
extern "C" void func_0204500c(void* arg0, void* arg1, int arg2, int arg3);
#endif
extern "C" void func_ov023_021f65d4(void* arg0, int arg1, int arg2);
struct Struct_ov004_02158dcc;
extern "C" void func_ov011_021849e0(struct Struct_ov004_02158dcc* arg0, unsigned short arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

struct Struct_02072a68_2 { struct Struct_02072a68* unknown_0_; short unknown_4_; };
extern void* data_ov004_02171030;

struct Struct_ov004_0216a464 {
    unsigned char unknown_0_[6];
    char unknown_6_[11];
    unsigned char unknown_11_;
    unsigned short unknown_12_0_ : 14;
    unsigned short unknown_13_6_ : 1;
    unsigned short unknown_13_7_ : 1;
    unsigned char unknown_14_[0x18];
};
struct Struct_ov004_0216a464_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov004_0216a464 unknown_4_[16];
};

// USA: func_ov004_0216a464
extern "C" ARM int func_ov004_0216a464(void* arg0) {
    if (!*(void**)((char*)data_ov004_02171030 + Enum_ov004_0216a464_400)) return 0;

    void* var0 = func_ov023_021f6524(arg0, 0x64);
    Struct_02072a68_2* var1 = func_ov004_02168b08(arg0, 3);
    int var2 = func_020421a0();
    func_ov023_021f9bc8((char*)var0);
    func_ov004_0216950c(arg0);

    GameResources* var3 = GetGameResources();
    var0 = var3->unknown_ptr_array_3afc[34];
    Struct_ov004_0216a464_2* var4 = *(Struct_ov004_0216a464_2**)((char*)data_ov004_02171030 + Enum_ov004_0216a464_400);

    Struct_ov004_0216a464* var5 = var4->unknown_4_;
    int var6;
    for (var6 = 0; var6 < 16; var5++, var6++) {
        if (!var5->unknown_13_6_) {
            memcpy(var5, (char*)var0 + 0x28, sizeof(*var5));
            Struct_ov004_0216a464_2* var7 = *(Struct_ov004_0216a464_2**)((char*)data_ov004_02171030 + Enum_ov004_0216a464_400);
            ++var7->unknown_0_;
            break;
        }
    }

    func_ov004_0216920c(arg0);

#if !defined(jpn)
    char var8[0x30];
    __clear(var8, 0x30);
#endif

    void* var9 = func_02072a68(var1, 0xd);
    func_02046380((void*)var2);
#if defined(jpn)
    func_02046574((struct Struct_02046574_2*)var2, 0, (char*)var0+0x2e);
    func_0204500c((void*)var2, var9, 0);
#else
    func_02042764((char*)var0 + 0x2e, var8, 1);
    func_02046574((struct Struct_02046574_2*)var2, 0, var8);
    func_0204500c((void*)var2, var9, 0, 0xe3);
#endif
    *(int*)((char*)var2 + Enum_ov004_0216a464_2456) = 1;

    func_ov023_021f65d4(arg0, 0x1e, 8);
    func_ov023_021f65d4(arg0, 0x1f, 8);
    func_ov023_021f65d4(arg0, 2, 8);
    func_ov011_021849e0((struct Struct_ov004_02158dcc*)arg0, 0x66);
    func_ov011_021848a0(arg0, 0x68);
    return 0;
}
