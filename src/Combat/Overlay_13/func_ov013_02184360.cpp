#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02074b64;
extern "C" ARM void func_02074b64(struct Struct_02074b64* arg0);
struct Struct_02074af4;
extern "C" ARM void func_02074af4(struct Struct_02074af4* arg0);
struct Struct_0205cfd4;
extern "C" ARM void func_0205cfd4(struct Struct_0205cfd4* arg0);
extern "C" ARM void func_0205c790(char* arg0);
struct Struct_02020cb8;
extern "C" ARM void func_0204af64(struct Struct_02020cb8* arg0);
extern "C" void func_0204c684(void* arg0);
struct Struct_0201099c_14;
extern "C" ARM void func_020dfc40(Struct_0201099c_14* arg0);

struct Struct_ov013_02184360 { unsigned int unknown_0_[20]; };
struct Struct_ov013_02184360_2 { unsigned int unknown_0_[16]; };

// USA: func_ov013_02184360
extern "C" ARM void func_ov013_02184360(void* arg0, void* arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[R(0x2e, 0x30)] = 0;
    var0[R(0x2f, 0x31)] = 0;
    var0[R(0x5cc, 0x640)] = (arg1 != 0);

    void* var1 = var0 + R(0x1e, 0x20);
    if (*(volatile unsigned char*)(var0 + R(0x5cc, 0x640)) != 0) {
        func_02074b64((Struct_02074b64*)var1);
        unsigned int var2 = *(volatile unsigned int*)0x4001000;
        *(int*)(var0 + R(0x30, 0x34)) = (var2 & 0x1f00u) >> 8;
    } else {
        func_02074af4((Struct_02074af4*)var1);
        volatile unsigned int* var3 = (volatile unsigned int*)0x4000000;
        unsigned int var4 = *var3;
        *(int*)(var0 + R(0x30, 0x34)) = (var4 & 0x1f00u) >> 8;
        var4 = *var3;
        *var3 = (var4 & ~0x1f00u) | 0x100u;
    }

    func_0205cfd4((Struct_0205cfd4*)(var0 + R(0x34, 0x38)));
    func_0205c790((char*)(var0 + R(0x3d0, 0x3d4)));

    if (var0[R(0x5cc, 0x640)] != 0) {
        unsigned char* var5 = (unsigned char*)arg1 + 0x188;
        *(Struct_ov013_02184360*)(var0 + R(0x38, 0x3c)) = *(Struct_ov013_02184360*)(var5 + 0x4);
        *(Struct_ov013_02184360_2*)(var0 + R(0x88, 0x8c)) = *(Struct_ov013_02184360_2*)(var5 + 0x54);

        var0[R(0xc8, 0xcc)] = var5[0x94];
        var0[R(0xc9, 0xcd)] = var5[0x95];
        var0[R(0xca, 0xce)] = var5[0x96];
        var0[R(0xcb, 0xcf)] = var5[0x97];
        *(unsigned int*)(var0 + R(0xcc, 0xd0)) = *(unsigned int*)(var5 + 0x98);
        *(unsigned int*)(var0 + R(0xd0, 0xd4)) = *(unsigned int*)(var5 + 0x9c);
        *(short*)(var0 + R(0xd4, 0xd8)) = *(short*)(var5 + 0xa0);
        *(short*)(var0 + R(0xd6, 0xda)) = *(short*)(var5 + 0xa2);
        *(short*)(var0 + R(0xd8, 0xdc)) = *(short*)(var5 + 0xa4);
        *(short*)(var0 + R(0xda, 0xde)) = *(short*)(var5 + 0xa6);
        *(short*)(var0 + R(0xdc, 0xe0)) = *(short*)(var5 + 0xa8);
        *(short*)(var0 + R(0xde, 0xe2)) = *(short*)(var5 + 0xaa);
        *(short*)(var0 + R(0xe0, 0xe4)) = *(short*)(var5 + 0xac);
        *(short*)(var0 + R(0xe2, 0xe6)) = *(short*)(var5 + 0xae);
        var0[R(0xe4, 0xe8)] = var5[0xb0];
        var0[R(0xe5, 0xe9)] = var5[0xb1];
        var0[R(0xe6, 0xea)] = var5[0xb2];
        var0[R(0xe7, 0xeb)] = var5[0xb3];
        var0[R(0xe8, 0xec)] = var5[0xb4];
        var0[R(0xe9, 0xed)] = var5[0xb5];
        var0[R(0xea, 0xee)] = var5[0xb6];
        var0[R(0xeb, 0xef)] = var5[0xb7];
        var0[R(0xec, 0xf0)] = var5[0xb8];
        var0[R(0xed, 0xf1)] = var5[0xb9];
        var0[R(0xee, 0xf2)] = var5[0xba];
        var0[R(0xef, 0xf3)] = var5[0xbb];
    }

    for (int var6 = 0; var6 < 2; var6++) {
        func_0204af64((Struct_02020cb8*)(var0 + R(0xf0, 0xf4) + var6 * 0x20));
    }
    for (int var7 = 0; var7 < 3; var7++) {
        func_0204c684((void*)(var0 + R(0x130, 0x134) + var7 * 0xe0));
    }

    ((SafeAllocator*)(var0 + R(0x598, 0x60c)))->ResetAllocatorPointer();
    func_020dfc40((Struct_0201099c_14*)(var0 + R(0x5ac, 0x620)));
    ((SafeAllocator*)var0)->ResetAllocatorPointer();

    for (int var8 = 0; var8 < 3; var8++) {
        unsigned char* var9 = var0 + var8;
        var9[R(0x5c4, 0x638)] = 0;
    }

    *(int*)(var0 + 0x14) = 0;
    *(int*)(var0 + 0x18) = 0;
    *(short*)(var0 + 0x1c) = 0xff;
#if !defined(jpn)
    *(short*)(var0 + 0x1e) = 0;
#endif
    var0[R(0x5c8, 0x63c)] = 0;
    var0[R(0x5c9, 0x63d)] = 0;
    var0[R(0x5ca, 0x63e)] = 0;
    var0[R(0x5cb, 0x63f)] = 0;
#if !defined(jpn)
    *(int*)(var0 + 0x644) = 0;
#endif
    *(int*)(var0 + R(0x5d0, 0x648)) = 0;
    *(int*)(var0 + R(0x5d4, 0x64c)) = 0;
    *(int*)(var0 + R(0x5e4, 0x65c)) = 0;
    *(int*)(var0 + R(0x5e8, 0x660)) = 0;
    var0[R(0x5ec, 0x664)] = 0;
    var0[R(0x5ed, 0x665)] = 0;
    *(int*)(var0 + R(0x5f0, 0x668)) = 0;
    *(int*)(var0 + R(0x5f4, 0x66c)) = 0;
    *(int*)(var0 + R(0x5f8, 0x670)) = 0;
    *(int*)(var0 + R(0x638, 0x6b0)) = 0;
    var0[R(0x63c, 0x6b4)] = 0;
    *(int*)(var0 + R(0x5e0, 0x658)) = 0;
    *(int*)(var0 + R(0x62c, 0x6a4)) = 0;
    var0[R(0x630, 0x6a8)] = 0;
    var0[R(0x644, 0x6bc)] = 0;
    *(int*)(var0 + R(0x640, 0x6b8)) = 0;

    unsigned char* var10 = var0 + 0x600;
    *(short*)(var10 + R(0x46, 0xbe)) = 0;
    *(short*)(var10 + R(0x48, 0xc0)) = 0;
    *(short*)(var10 + R(0x4a, 0xc2)) = 0;
    *(short*)(var10 + R(0x4c, 0xc4)) = 0;
    *(short*)(var10 + R(0x4e, 0xc6)) = 0;
    *(short*)(var10 + R(0x50, 0xc8)) = 0;
    *(short*)(var10 + R(0x52, 0xca)) = 0;

    for (int var11 = 0; var11 < 5; var11++) {
        *(int*)(var0 + R(0x5fc, 0x674) + var11 * 4) = 0;
    }
    for (int var12 = 0; var12 < 5; var12++) {
        *(int*)(var0 + R(0x610, 0x688) + var12 * 4) = 0;
    }
    for (int var13 = 0; var13 < 5; var13++) {
        unsigned char* var14 = var0 + var13;
        var14[R(0x624, 0x69c)] = 1;
    }

    *(int*)(var0 + R(0x5dc, 0x654)) = (var0[R(0x5cc, 0x640)] != 0) ? *(int*)((unsigned char*)arg1 + 0x178) : 0;

    for (int var15 = 0; var15 < 5; var15++) {
        unsigned char* var16 = var0 + var15;
        var16[R(0x631, 0x6a9)] = 0;
    }
}
