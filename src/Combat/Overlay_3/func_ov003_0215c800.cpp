#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { kRegionValue80_98 = 0x98 };
enum { kRegionValue98_B0 = 0xb0 };
enum { kRegionValue7C_94 = 0x94 };
enum { kRegionValue3F1_409 = 0x409 };
enum { kRegionValue2D8_228 = 0x228 };
enum { kRegionValue2DC_22C = 0x22c };
enum { kRegionValue2E0_230 = 0x230 };
enum { kRegionValue3B4_3CC = 0x3cc };
enum { kRegionValue354_36C = 0x36c };
#else
enum { kRegionValue80_98 = 0x80 };
enum { kRegionValue98_B0 = 0x98 };
enum { kRegionValue7C_94 = 0x7c };
enum { kRegionValue3F1_409 = 0x3f1 };
enum { kRegionValue2D8_228 = 0x2d8 };
enum { kRegionValue2DC_22C = 0x2dc };
enum { kRegionValue2E0_230 = 0x2e0 };
enum { kRegionValue3B4_3CC = 0x3b4 };
enum { kRegionValue354_36C = 0x354 };
#endif

extern "C" int func_02094a00(void);
extern "C" void func_02094ab0(void);
struct Struct02074bd0;
extern "C" void func_02074bd0(struct Struct02074bd0* obj);
struct Cont0205d1e0;
extern "C" void func_0205d1e0(Cont0205d1e0*);
struct Cont0205d274;
extern "C" void func_0205d274(Cont0205d274*);
struct Obj0205d2bc;
extern "C" void func_0205d2bc(Obj0205d2bc*);
extern "C" void func_0205d048(void* obj);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToMainBG1CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int func_020421a0(void);
extern "C" void func_02043124(void* self);
extern "C" void func_02043204(char* obj);
extern "C" void* __clear(void* dst, int count);

// USA: func_ov003_0215c800
extern "C" ARM void func_ov003_0215c800(char* obj) {
    func_02094a00();
    func_02094ab0();

    int* reg = (int*)0x4000000;
    *reg = (*reg & ~0x1f00) | 0x100;
    *(short*)((char*)reg + 0x50) = 0;
    func_02074bd0((struct Struct02074bd0*)(obj + kRegionValue80_98));

    func_0205d1e0((Cont0205d1e0*)(obj + kRegionValue98_B0));
    func_0205d274((Cont0205d274*)(obj + kRegionValue98_B0));
    func_0205d2bc((Obj0205d2bc*)(obj + kRegionValue98_B0));
    func_0205d048(obj + kRegionValue98_B0);

    memset(*(void**)(obj + kRegionValue7C_94), 0, 0x20);
    CleanInvalidateCacheRange(*(void**)(obj + kRegionValue7C_94), 0x20);
    LoadToMainBG1CharacterData((int)*(void**)(obj + kRegionValue7C_94), 0, 0x20);

    void* g = (void*)func_020421a0();
    func_02043124(g);
    func_02043204((char*)g);

    if (*(unsigned char*)(obj + kRegionValue3F1_409) == 0) {
        *(int*)((char*)g + kRegionValue2D8_228) = 0;
        *(int*)((char*)g + kRegionValue2DC_22C) = 0;
        *(int*)((char*)g + kRegionValue2E0_230) = 0;
    }

    SafeAllocator* arr[6];
    __clear(arr, sizeof(arr));
    arr[0] = (SafeAllocator*)(obj + 0x50);
    arr[1] = (SafeAllocator*)(obj + 0x3c);
    arr[2] = (SafeAllocator*)(obj + 0x28);
    arr[3] = (SafeAllocator*)(obj + 0x14);
    arr[4] = (SafeAllocator*)obj;

    for (int i = 0; arr[i] != NULL; i++) {
        if (arr[i]->GetSignedAllocator() != NULL) {
            arr[i]->Destroy();
        }
    }

    *(int*)(obj + kRegionValue3B4_3CC) = 0;
    *(int*)(obj + kRegionValue354_36C) = 0;
}
