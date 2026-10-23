#pragma opt_vectorize_loops off
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

extern "C" void func_020c39a0(short* arg0, int arg1);

extern "C" void MapVRAMBanksToMainBG(int);
extern "C" void func_ov020_0218c7bc(int, int, int, int, int);
struct Struct_02020cb8;
extern "C" void func_0204af64(Struct_02020cb8*);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b5b4(void*, int);
struct Struct_0204b12c;
extern "C" void func_0204b12c(Struct_0204b12c*, SafeAllocator*);
struct Struct_0204af38;
extern "C" void func_0204af38(Struct_0204af38*, int, SafeAllocator*);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5*, int, int);
extern "C" int DisableSubObjVRAMBanks();
extern "C" int DisableSubBGVRAMBanks();
extern "C" void func_020c3984(unsigned int);
extern "C" void MapVRAMBanksToSubObj(unsigned short value);
extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void func_ov020_0218cd64(int, int, int, int, int);
void LoadFileIntoMemory(const char*, void*, unsigned int*);
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4*);
struct Struct_02020aec;
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" void func_0204b2e0(void*, char*);
struct Struct_02020cb8_6;
extern "C" void func_0204b3a0(Struct_02020cb8_6*, char*);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(Struct_02020cb8_2*, void*);
struct Struct_02020cb8_3;
extern "C" void func_0204afb4(Struct_02020cb8_3*);
extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, unsigned char c, int d);

extern char data_ov020_0218dce2;
extern char data_ov020_0218dcf8;
extern int data_0211e33c;

struct Struct_ov020_0218d32c {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_[3];
};

struct Struct_ov020_0218d32c_2 {
#if defined(jpn)
    char unknown_0_[0x400];
#else
    char unknown1_0_[0x470];
#endif

    SafeAllocator unknown_470_;
};

// USA: func_ov020_0218d32c
extern "C" ARM void func_ov020_0218d32c(struct Struct_ov020_0218d32c_2* arg0, int arg1) {
#if defined(jpn)
 enum {Enum_ov020_0218d32c_156=0x2c};
#else
 enum {Enum_ov020_0218d32c_156=0x9c};
#endif
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned int var1;
    void* var2;
    char* volatile var3[3];
    int var4[3];
    unsigned char var5[0x20];

    arg0->unknown_470_.Reset();
    func_020c39a0((short*)0x400006c, -16);
    func_020c39a0((short*)0x400106c, -16);
    MapVRAMBanksToMainBG(8);
    func_ov020_0218c7bc(0, 1, 1, 1, 0);

    func_0204af64((Struct_02020cb8*)(var0 + Enum_ov020_0218d32c_156 + 0x400));
    func_0204b11c((unsigned char*)(var0 + Enum_ov020_0218d32c_156 + 0x400), 0);
    struct Struct_ov020_0218d32c* var6 = (struct Struct_ov020_0218d32c*)(var0 + Enum_ov020_0218d32c_156 + 0x400);
    var6->unknown_1c_0_ = 0;
    var6->unknown_1c_4_ = 1;
    func_0204b5b4(var6, 1);
    func_0204b12c((Struct_0204b12c*)(var0 + Enum_ov020_0218d32c_156 + 0x400), (SafeAllocator*)&arg0->unknown_470_);
    func_0204af38((Struct_0204af38*)(var0 + Enum_ov020_0218d32c_156 + 0x400), 1, (SafeAllocator*)&arg0->unknown_470_);
    func_0204b5e8((Struct_02020cb8_5*)(var0 + Enum_ov020_0218d32c_156 + 0x400), 0, 0);

    DisableSubObjVRAMBanks();
    DisableSubBGVRAMBanks();
    func_020c3984(0);

    volatile unsigned int* var7 = (volatile unsigned int*)0x4001000;
    *var7 = (*var7 & ~0x1f00) | 0x100;
    MapVRAMBanksToSubObj(0x100);

    *var7 = (*var7 & 0xffcfffef) | 0x10;
    MapVRAMBanksToSubBG(0x80);

    func_ov020_0218cd64(0, 0, 0xe, 0, 0);
    func_ov020_0218cd64(0, 0, 0xf, 0, 0);

    volatile unsigned short* var8 = (volatile unsigned short*)0x4001008;
    var8[0] = (var8[0] & ~3) | 1;
    var8[1] = (var8[1] & ~3) | 2;
    var8[2] = var8[2] & ~3;
    var8[3] = (var8[3] & ~3) | 3;

    BackgroundLoader::AddLockGlobal();

    if (arg1 == 1) {
        LoadFileIntoMemory((const char*)&data_ov020_0218dce2, (void*)&data_0211e33c, &var1);
    } else {
        LoadFileIntoMemory((const char*)&data_ov020_0218dcf8, (void*)&data_0211e33c, &var1);
    }

    int var9 = func_02046900((Struct_02020cb8_4*)&data_0211e33c);

    for (int var10 = 0; var10 < var9; var10++) {
        var3[var10] = (char*)func_020467f0((Struct_02020aec*)&data_0211e33c, var10, &var2, &var4[var10]);
    }

    func_0204af64((Struct_02020cb8*)var5);
    var5[0x1c] = (var5[0x1c] & ~0xf) | 1;
    var5[0x1c] = var5[0x1c] & ~0xf0;
    func_0204b5b4(var5, 3);
    func_0204b11c((unsigned char*)var5, 0);
    func_0204b5e8((Struct_02020cb8_5*)var5, 0, 0);

    for (int var11 = 0; var11 < 3; var11++) {
        func_0204b2e0(var5, var3[var11]);
        func_0204b3a0((Struct_02020cb8_6*)var5, var3[var11]);
    }

    func_0204b0e8((Struct_02020cb8_2*)var5, (void*)0);
    func_0204afb4((Struct_02020cb8_3*)var5);
    BackgroundLoader::RemoveLockGlobal();

    *(volatile unsigned short*)0x4000050 = 0;
    *(volatile unsigned short*)0x4001050 = 0;
    ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, 1, 2, 0xf, 0x1f);

    volatile unsigned int* var12 = (volatile unsigned int*)0x4000000;
    *var12 = (*var12 & ~0x1f00) | 0x1300;

    func_020c39a0((short*)0x400006c, -16);
    func_020c39a0((short*)0x400106c, -16);
}
