#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);

extern "C" int func_ov023_021ddbb8(void* arg0, int arg1, int arg2);
struct Struct_ov023_021dd59c;
extern "C" int func_ov023_021ddbf8(struct Struct_ov023_021dd59c* arg0);
extern "C" void func_020dc2bc(void);

struct Struct_02074b64;
extern "C" void func_02074b64(struct Struct_02074b64* arg0);
extern "C" void func_02074af4(void* arg0);

struct Struct_020534ac;
struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);
struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0205a528(void* arg0, void* arg1, int arg2, void* arg3);
extern "C" void func_020dfec0(void* arg0, void* arg1, void* arg2, unsigned int arg3);

extern "C" void func_ov023_021dcc58(void* arg0);
extern "C" ARM void func_ov023_021db2e4(volatile int* arg0);

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;

#if defined(jpn)
struct Struct_ov023_021ff9e0_8 { unsigned int unknown_0_[5]; void* unknown_4_; };
#else
struct Struct_ov023_021ff9e0_8 { unsigned int unknown_0_; void* unknown_4_; };
#endif

extern struct Struct_ov023_021ff9e0_8 data_ov023_021ff9e0;

extern int data_ov023_021fdb40;
extern int data_ov023_021fdb52;
extern int data_ov023_021fdb60;
extern int data_ov023_021fdb72;
extern int data_ov023_021fdb80;
extern int data_ov023_021fdb99;

#if defined(jpn)
extern char data_ov023_021fce2d[];
extern char data_ov023_021fce42[];
#endif
// USA: func_ov023_021dd59c
extern "C" ARM void func_ov023_021dd59c(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021dd59c_1911=0x6f3, Enum_ov023_021dd59c_1908=0x6f0, Enum_ov023_021dd59c_1915=0x6f7, Enum_ov023_021dd59c_1916=0x6f8, Enum_ov023_021dd59c_380=0x178, Enum_ov023_021dd59c_364=0x168, Enum_ov023_021dd59c_384=0x17c, Enum_ov023_021dd59c_376=0x174, Enum_ov023_021dd59c_1844=0x6b0, Enum_ov023_021dd59c_300=0x128, Enum_ov023_021dd59c_1917=0x6f9, Enum_ov023_021dd59c_1840=0x6ac, Enum_ov023_021dd59c_1910=0x6f2, Enum_ov023_021dd59c_1848=0x6b4, Enum_ov023_021dd59c_1876=0x6d0, Enum_ov023_021dd59c_280=0x114};
#else
 enum {Enum_ov023_021dd59c_1911=0x777, Enum_ov023_021dd59c_1908=0x774, Enum_ov023_021dd59c_1915=0x77b, Enum_ov023_021dd59c_1916=0x77c, Enum_ov023_021dd59c_380=0x17c, Enum_ov023_021dd59c_364=0x16c, Enum_ov023_021dd59c_384=0x180, Enum_ov023_021dd59c_376=0x178, Enum_ov023_021dd59c_1844=0x734, Enum_ov023_021dd59c_300=0x12c, Enum_ov023_021dd59c_1917=0x77d, Enum_ov023_021dd59c_1840=0x730, Enum_ov023_021dd59c_1910=0x776, Enum_ov023_021dd59c_1848=0x738, Enum_ov023_021dd59c_1876=0x754, Enum_ov023_021dd59c_280=0x118};
#endif
    char* var0 = (char*)arg0;
    int var1 = (int)BackgroundLoader::GetInstance();
    func_0200fb8c((int*)GameState::GetInstance());

    if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 0) {
        if (data_ov023_021ff9e0.unknown_4_ == 0) {
            data_ov023_021ff9e0.unknown_4_ = func_02012d88(&data_02114e20, 0x1800);
        }
        if (!(*(unsigned short*)(var0 + Enum_ov023_021dd59c_1908) & 0x40)) {
            *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = 2;
            return;
        }
        if (*(signed char*)(var0 + Enum_ov023_021dd59c_1915) != 1) {
            func_ov023_021ddbb8(var0, ~0xf, 8);
        }
        *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
    }

    if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 1) {
        if (func_ov023_021ddbf8((struct Struct_ov023_021dd59c*)var0) == 0) {
            if (*(signed char*)(var0 + Enum_ov023_021dd59c_1915) != 1) {
                func_020dc2bc();
            }
            *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
        }
    }

    if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 2) {
        if (*(unsigned short*)(var0 + Enum_ov023_021dd59c_1908) & 0x10) {
            *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = 4;
            return;
        }
        Struct_0208cb08* var2 = func_02094a00();
        func_02094b30(var2, 0x1fa, 0);
        *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
    } else if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 3) {
        if (func_02094b4c(func_02094a00()) != 0) {
            *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
        }
    }

    if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 4) {
        if (*(signed char*)(var0 + Enum_ov023_021dd59c_1916) == 1) {
            func_02074b64((struct Struct_02074b64*)(var0 + Enum_ov023_021dd59c_280));
        } else {
            func_02074af4(var0 + Enum_ov023_021dd59c_280);
        }
        *(char*)(var0 + Enum_ov023_021dd59c_380) = *(signed char*)(var0 + Enum_ov023_021dd59c_1916);
        *(void**)(var0 + Enum_ov023_021dd59c_364) = var0 + Enum_ov023_021dd59c_384;
        *(short*)(var0 + Enum_ov023_021dd59c_376) = 30;
#if defined(jpn)
        *(int*)(var0 + Enum_ov023_021dd59c_1844) = ((BackgroundLoader*)(var1))->QueueLoadFile(data_ov023_021fce2d, (SafeAllocator*)0);
#else
        *(int*)(var0 + Enum_ov023_021dd59c_1844) = ((BackgroundLoader*)(var1))->QueueLoadFileInGP2((const char*)((int)&data_ov023_021fdb60), (const char*)((int)&data_ov023_021fdb72), (SafeAllocator*)(0));
#endif

        *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
    } else if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 5) {
        if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(*(int*)(var0 + Enum_ov023_021dd59c_1844))) != 0) {
            ((SafeAllocator*)(*(void**)(var0 + 0x44)))->Reset();
            void* var3;
            int var4, var5;
            int var6;
            ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(*(int*)(var0 + Enum_ov023_021dd59c_1844)), (void**)(&var4), (unsigned int*)(&var5));
#if defined(jpn)
            {
#else
            if (var4 != 0 && var5 != 0) {
#endif

                int var7 = func_02046900((struct Struct_02020cb8_4*)var4);
                for (int var8 = 0; var8 < var7; var8++) {
                    void* var9 = func_020467f0((struct Struct_02020aec*)var4, var8, &var3, &var6);
                    func_0205a528(var0 + Enum_ov023_021dd59c_300, var9, var6, *(void**)(var0 + 0x44));
                }
            }
            *(signed char*)(var0 + Enum_ov023_021dd59c_1917) = 1;
            ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(var0 + Enum_ov023_021dd59c_1844)));
            *(int*)(var0 + Enum_ov023_021dd59c_1844) = -1;
            *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
        }
    }

    if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 6) {
#if defined(jpn)
        *(int*)(var0 + Enum_ov023_021dd59c_1844) = ((BackgroundLoader*)(var1))->QueueLoadFile(data_ov023_021fce42, (SafeAllocator*)0);
#else
        *(int*)(var0 + Enum_ov023_021dd59c_1844) = ((BackgroundLoader*)(var1))->QueueLoadFileInGP2((const char*)((int)&data_ov023_021fdb80), (const char*)((int)&data_ov023_021fdb99), (SafeAllocator*)(0));
#endif

        *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
    } else if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 7) {
        if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(*(int*)(var0 + Enum_ov023_021dd59c_1844))) != 0) {
            int var10, var11;
            ((BackgroundLoader*)((struct Struct_020534ac*)var1))->GetLoadedFileByID((int)(*(int*)(var0 + Enum_ov023_021dd59c_1844)), (void**)(&var10), (unsigned int*)(&var11));
            ((SafeAllocator*)(var0 + 0x14))->Reset();
#if defined(jpn)
            {
#else
            if (var10 != 0 && var11 != 0) {
#endif

                func_020dfec0(var0 + 0x54, var0 + 0x14, (void*)var10, (unsigned int)var11);
            }
            ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(var0 + Enum_ov023_021dd59c_1844)));
            *(int*)(var0 + Enum_ov023_021dd59c_1844) = -1;
            *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) + 1;
        }
    }

    if (*(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) == 8) {
        unsigned int var12;
        if (*(signed char*)(var0 + Enum_ov023_021dd59c_1916) == 1) {
            var12 = *(volatile unsigned int*)0x4001000;
        } else {
            var12 = *(volatile unsigned int*)0x4000000;
        }
        *(int*)(var0 + Enum_ov023_021dd59c_1840) = (var12 & 0x1f00) >> 8;
        if (*(signed char*)(var0 + Enum_ov023_021dd59c_1915) != 1) {
            func_ov023_021dcc58(var0);
        }
        *(unsigned char*)(var0 + Enum_ov023_021dd59c_1910) = 1;
        *(unsigned char*)(var0 + Enum_ov023_021dd59c_1911) = 0;
        func_ov023_021db2e4((volatile int*)(var0 + Enum_ov023_021dd59c_1844));
        for (int var13 = 0; var13 < 7; var13++) {
            func_ov023_021db2e4((volatile int*)(var0 + Enum_ov023_021dd59c_1848 + var13 * 4));
        }
        *(int*)(var0 + Enum_ov023_021dd59c_1876) = 0;
        *(unsigned short*)(var0 + Enum_ov023_021dd59c_1908) |= 1;
    }
}
