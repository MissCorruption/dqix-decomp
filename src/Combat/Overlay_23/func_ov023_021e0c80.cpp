#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" int func_02005a94(signed char* arg0);
extern "C" void func_ov023_021e0f44(void* arg0);

struct Struct_020534ac;
extern "C" int func_020e0028(void* arg0, void* arg1, int arg2, int arg3, void* arg4, int arg5);

extern "C" int func_020ac020(void* arg0, short* arg1, int* arg2, int arg3);

struct Struct_ov023_021e0c80 {
    char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    char* unknown_4_;
};

struct Struct_ov023_021e0c80_2 {
    short unknown_0_;
    short unknown_2_;
    struct Struct_ov023_021e0c80* unknown_4_;
};

// USA: func_ov023_021e0c80
extern "C" ARM int func_ov023_021e0c80(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0c80_1872=0x6cc};
#else
 enum {Enum_ov023_021e0c80_1872=0x750};
#endif
    int var0[24];
    short var1[24];
    unsigned char var2[24];
    int var3;
    int var4;

    memset((char*)arg0 + 0xbc, 0, 6);
    *(short*)((char*)arg0 + 0xc2) = 0;

    short var5 = 0;

    struct Struct_ov023_021e0c80_2* var6 = *(struct Struct_ov023_021e0c80_2**)((char*)arg0 + 0x84);
    if (var6) {
        int var7;
        short var8;
        struct Struct_ov023_021e0c80* var9;
        var9 = var6->unknown_4_;
        var8 = var6->unknown_2_;
        for (var7 = 0; var7 < var8; var7++, var9++) {
            if (var9->unknown_1_ == 0 || var9->unknown_4_ == 0) continue;
            signed char var10 = var9->unknown_4_[0];
            if (var10 < 0x30 || var10 > 0x39) continue;
            short var11 = func_02005a94((signed char*)var9->unknown_4_);
            short var12 = var11;
            signed char var13 = 0;
            if (10000 <= var11) {
                var12 -= 10000;
                var13 = 1;
            }
            var1[var5] = var12;
            var2[var5] = var13;
            var5++;
            if (var5 >= 0x18) break;
        }
    }

    if (var5 > 0) {
        if (func_020ac020(0, var1, var0, var5)) {
            int var14;
            for (var14 = 0; var14 < var5; var14++) {
                short var15 = var1[var14];
                if (var15 < 1 || var15 > 0x134) continue;
                unsigned char var16 = var2[var14];
                if (var16 == 0) {
                    if (((unsigned int)(var0[var14] << 0xe) >> 0x19) != 0) goto store021e0c80;
                }
                if (var16 != 0) {
                    if (((unsigned int)(var0[var14] << 0x7) >> 0x19) != 0) goto store021e0c80;
                }
                continue;
            store021e0c80:
                *(short*)((char*)arg0 + 0xbc + *(short*)((char*)arg0 + 0xc2) * 2) = var15;
                *(short*)((char*)arg0 + 0xc2) = *(short*)((char*)arg0 + 0xc2) + 1;
                if (*(short*)((char*)arg0 + 0xc2) >= 3) break;
            }
        }
    }

    if (*(short*)((char*)arg0 + 0xc2) <= 0) {
        func_ov023_021e0f44(arg0);
        return -1;
    }

    if (*(int*)((char*)arg0 + Enum_ov023_021e0c80_1872) == -1) {
        return -1;
    }

    int var17 = (int)BackgroundLoader::GetInstance();
    if (!((BackgroundLoader*)(var17))->GetTaskStatus((int)(*(int*)((char*)arg0 + Enum_ov023_021e0c80_1872)))) {
#if defined(jpn)
        return 0xf;
#else
        goto retf_021e0c80;
#endif

    }

    ((BackgroundLoader*)((struct Struct_020534ac*)var17))->GetLoadedFileByID((int)(*(int*)((char*)arg0 + Enum_ov023_021e0c80_1872)), (void**)(&var3), (unsigned int*)(&var4));
#if defined(jpn)
    {
#else
    if (var3 != 0 && var4 != 0) {
#endif

        unsigned short var18 = *(unsigned short*)((char*)arg0 + 0xc2);
        func_020e0028((char*)arg0 + 0xa4, (char*)arg0 + 0x28, var3, var4, (char*)arg0 + 0xbc, var18);
    }

    ((BackgroundLoader*)(var17))->RemoveTask((int)(*(int*)((char*)arg0 + Enum_ov023_021e0c80_1872)));
    *(int*)((char*)arg0 + Enum_ov023_021e0c80_1872) = -1;
    func_ov023_021e0f44(arg0);
    return -1;

retf_021e0c80:
    return 0xf;
}
