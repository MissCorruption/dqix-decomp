#if defined(jpn)
#define REGION(j,u) (j)
#define data_ov020_0218d95c data_ov020_0218e1ac
#define data_ov020_0218d968 data_ov020_0218e1b8
#define data_ov020_0218dc9d data_ov020_0218e55b
#else
#define REGION(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

extern "C" void MapVRAMBanksToMainBG(int v);
extern "C" void MapVRAMBanksToSubBG(int v);
extern "C" void func_ov020_0218c7bc(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov020_0218cd64(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_0204b5b4(void*, int);

struct Struct_0204af38;
extern "C" void func_0204b174(struct Struct_0204af38* arg0, void* arg1, SafeAllocator* arg2, int arg3);

struct Struct_02020cb8;
extern "C" void func_0204af64(struct Struct_02020cb8* arg0);

extern "C" void func_0204b11c(unsigned char* arg0, int arg1);

struct Struct_0204b12c;
extern "C" void func_0204b12c(struct Struct_0204b12c* arg0, SafeAllocator* arg1);

extern "C" void func_0204af38(struct Struct_0204af38* arg0, int arg1, SafeAllocator* arg2);

struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(struct Struct_02020cb8_5* arg0, int arg1, int arg2);

struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);

struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

struct Struct_0204b8d0;
extern "C" void func_0204b8d0(struct Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);

struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2* arg0, void* arg1);

extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, unsigned char c, int d);

extern "C" void func_020c39a0(short* arg0, int arg1);

extern int data_ov020_0218d95c;
extern int data_ov020_0218d968;
extern int data_ov020_0218dc9d;

struct Struct_ov020_0218c98c {
    int unknown_0_, unknown_4_, unknown_8_;
};

struct Struct_ov020_0218c98c_2 {
    char unknown_0_[REGION(0x448, 0x4b8)];
    unsigned char unknown_4b8_0_ : 4;
    unsigned char unknown_4b8_4_ : 4;
    char unknown_4b9_[REGION(0x468, 0x4d8) - REGION(0x449, 0x4b9)];
    unsigned char unknown_4d8_0_ : 4;
    unsigned char unknown_4d8_4_ : 4;
};

// USA: func_ov020_0218c98c
extern "C" ARM void func_ov020_0218c98c(void* arg0) {
    char* var0 = (char*)arg0;

    ((SafeAllocator*)(var0 + REGION(0x400, 0x470)))->Reset();
    MapVRAMBanksToMainBG(8);
    func_ov020_0218c7bc(0, 1, 1, 1, 0);

    func_0204af64((struct Struct_02020cb8*)(var0 + REGION(0x42c, 0x49c)));
    func_0204b11c((unsigned char*)(var0 + REGION(0x42c, 0x49c)), 0);
    ((struct Struct_ov020_0218c98c_2*)arg0)->unknown_4b8_0_ = 0;
    ((struct Struct_ov020_0218c98c_2*)arg0)->unknown_4b8_4_ = 1;
    func_0204b5b4(var0 + REGION(0x42c, 0x49c), 1);
    func_0204b12c((struct Struct_0204b12c*)(var0 + REGION(0x42c, 0x49c)), (SafeAllocator*)(var0 + REGION(0x400, 0x470)));
    func_0204af38((struct Struct_0204af38*)(var0 + REGION(0x42c, 0x49c)), 1, (SafeAllocator*)(var0 + REGION(0x400, 0x470)));
    func_0204b5e8((struct Struct_02020cb8_5*)(var0 + REGION(0x42c, 0x49c)), 0, 0);

    MapVRAMBanksToSubBG(4);
    func_ov020_0218cd64(0, 1, 1, 1, 0);

    func_0204af64((struct Struct_02020cb8*)(var0 + REGION(0x44c, 0x4bc)));
    func_0204b11c((unsigned char*)(var0 + REGION(0x44c, 0x4bc)), 0);
    ((struct Struct_ov020_0218c98c_2*)arg0)->unknown_4d8_0_ = 1;
    ((struct Struct_ov020_0218c98c_2*)arg0)->unknown_4d8_4_ = 0;
    func_0204b5b4(var0 + REGION(0x44c, 0x4bc), 0);
    func_0204b12c((struct Struct_0204b12c*)(var0 + REGION(0x44c, 0x4bc)), (SafeAllocator*)(var0 + REGION(0x400, 0x470)));
    func_0204af38((struct Struct_0204af38*)(var0 + REGION(0x44c, 0x4bc)), 1, (SafeAllocator*)(var0 + REGION(0x400, 0x470)));
    func_0204b5e8((struct Struct_02020cb8_5*)(var0 + REGION(0x44c, 0x4bc)), 0, 0);

    int var1;
    BackgroundLoader* var2 = BackgroundLoader::GetInstance();
    var2->MaybeReset();
    var1 = var2->QueueLoadFile((char const*)((int)&data_ov020_0218dc9d), (SafeAllocator*)0);

    for (;;) {
        if (var2->GetTaskStatus(var1)) {
            void* var3;
            int var4, var5;
            var2->GetLoadedFileByID(var1, (void**)&var4, (unsigned int*)&var5);
            int var6 = func_02046900((struct Struct_02020cb8_4*)var4);
            void* var7[5];
            int var8[5];
            for (int var9 = 0; var9 < var6; var9++) {
                var7[var9] = func_020467f0((struct Struct_02020aec*)var4, var9, &var3, &var8[var9]);
            }

            int var10 = 0;
            struct Struct_ov020_0218c98c var11 = *(struct Struct_ov020_0218c98c*)&data_ov020_0218d95c;
            struct Struct_ov020_0218c98c var12 = *(struct Struct_ov020_0218c98c*)&data_ov020_0218d968;
            int var13 = 0;
            for (int var14 = 0; var14 < var6; var14++) {
                if (var14 == ((int*)&var11)[var10]) {
                    func_0204b174((struct Struct_0204af38*)(var0 + REGION(0x2c, 0x9c) + 0x400), var7[var14], (SafeAllocator*)(var0 + REGION(0x400, 0x470)), var8[var14]);
                    var10++;
                }
                if (var14 == ((int*)&var12)[var13]) {
                    func_0204b174((struct Struct_0204af38*)(var0 + REGION(0x4c, 0xbc) + 0x400), var7[var14], (SafeAllocator*)(var0 + REGION(0x400, 0x470)), var8[var14]);
                    var13++;
                }
            }

            var2->RemoveTask(var1);

            func_0204b8d0((struct Struct_0204b8d0*)(var0 + REGION(0x42c, 0x49c)), 0, 0, 0, 0, 0, 0x20, 0x19, 0);
            func_0204b8d0((struct Struct_0204b8d0*)(var0 + REGION(0x44c, 0x4bc)), 0, 0, 0, 0, 0, 0x20, 0x19, 0);
            func_0204b0e8((struct Struct_02020cb8_2*)(var0 + REGION(0x42c, 0x49c)), 0);
            func_0204b0e8((struct Struct_02020cb8_2*)(var0 + REGION(0x44c, 0x4bc)), 0);
            break;
        }
        var2->RemoveAllLocks();
    }

    *(short*)0x4000050 = 0;
    *(short*)0x4001050 = 0;
    ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050, 1, 2, 0xf, 0x1f);
    ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4001050, 1, 2, 0x1f, 0);

    *(unsigned int*)0x4000000 = (*(unsigned int*)0x4000000 & ~0x1f00) | 0x300;
    *(unsigned int*)0x4001000 = (*(unsigned int*)0x4001000 & ~0x1f00) | 0x100;
    func_020c39a0((short*)0x400006c, 0);
    func_020c39a0((short*)0x400106c, 0);
}
