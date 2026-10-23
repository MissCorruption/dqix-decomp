#if defined(jpn)
#define R(j,u) (j)
#define func_ov013_021846a0 func_ov013_021856dc
#define func_ov013_02184d80 func_ov013_02185db4
#define func_ov013_02186160 func_ov013_02187178
#define func_ov013_021864f0 func_ov013_02187820
#define func_ov013_02186590 func_ov013_021878c0
#define func_ov013_0218678c func_ov013_02187ab8
#define func_ov013_0218683c func_ov013_02187b68
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

#pragma opt_arithtransformation off

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_020dd11c(unsigned int arg0, unsigned int arg1);

// USA: func_ov013_02184b4c
extern "C" ARM void func_ov013_02184b4c(void* arg0, void* arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char* var1 = (unsigned char*)arg1;
    unsigned char* var2;
    unsigned short var3;
    int var4;
    int var5;

    if (arg1 == 0) return;

    var2 = (unsigned char*)func_02053c6c(var1);
    *(void**)(var0 + R(0x62c,0x6a4)) = *(void**)(var1 + 0x134);

    var3 = *(unsigned short*)(var2 + 0x564);
    *(int*)(var0 + R(0x5f4,0x66c)) = var3;
    *(int*)(var0 + R(0x5f0,0x668)) = var3;

    var4 = *(int*)(var2 + R(0x8b8,0x950));
    {
        unsigned int var6 = var4 & 0xff;
        var0[R(0x630,0x6a8)] = (unsigned char)var4;
        *(int*)(var0 + R(0x638,0x6b0)) = *(unsigned short*)(var2 + 0x16c + var6 * 2);
    }
    {
        unsigned char* var7 = var2 + var0[R(0x630,0x6a8)];
        *(int*)(var0 + R(0x640,0x6b8)) = var7[0x186];
    }

    *(unsigned short*)(var0 + R(0x648,0x6c0)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x134) + 0x30);
    *(unsigned short*)(var0 + R(0x64c,0x6c4)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x134) + 0x32);
    *(unsigned short*)(var0 + R(0x64e,0x6c6)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x134) + 0x34);
    *(unsigned short*)(var0 + R(0x650,0x6c8)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x134) + 0x36);
    *(unsigned short*)(var0 + R(0x652,0x6ca)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x134) + 0x38);

    if (var0[R(0x5cc,0x640)] != 0) {
        *(unsigned short*)(var0 + R(0x646,0x6be)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x138));
        *(unsigned short*)(var0 + R(0x64a,0x6c2)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x138) + 2);
    } else {
        *(unsigned short*)(var0 + R(0x646,0x6be)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x130) + 4);
        *(unsigned short*)(var0 + R(0x64a,0x6c2)) = *(unsigned short*)(*(unsigned char**)(var1 + 0x130) + 6);
    }

    if (*(int*)(var0 + R(0x640,0x6b8)) != 0) var0[R(0x63c,0x6b4)] = 1;
    *(int*)(var0 + R(0x5f8,0x670)) = 0x64;

    for (var5 = 0; var5 < 5; var5++) {
        (var0 + var5)[R(0x631,0x6a9)] = (unsigned char)func_020dd11c(var0[R(0x630,0x6a8)], (unsigned char)var5);
        (var0 + var5)[R(0x624,0x69c)] = 0;
        {
            unsigned char var8 = (var0 + var5)[R(0x631,0x6a9)];
            unsigned char* var9 = var2 + var8;
            *(int*)(var0 + R(0x5fc,0x674) + var5 * 4) = var9[0x464];
        }
    }
}
