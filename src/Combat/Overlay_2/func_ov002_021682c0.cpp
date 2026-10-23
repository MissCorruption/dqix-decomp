#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
struct Struct_ov002_021682c0;
struct SafeAllocator;
extern "C" void func_ov013_02186e74(Struct_ov002_021682c0*, SafeAllocator*);
extern "C" int func_ov002_021574d4(void*, int);
extern "C" void func_ov002_0215a878(char*);
extern "C" void func_ov002_0215b428(unsigned char*);
#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif
extern "C" void func_ov013_02186eec(void*, int);

// USA: func_ov002_021682c0
extern "C" ARM void func_ov002_021682c0(char* arg0) {
    *(unsigned int*)(arg0 + RG(0x247c, 0x22ac)) &= ~0x4;
    func_ov002_0215a878(arg0);
    func_0205d6a0((Struct_0205d6a0*)(arg0 + RG(0xec8, 0xe20)), 1);
    *(unsigned char*)(arg0 + RG(0x2454, 0x2288)) = 0;
    *(unsigned char*)(arg0 + RG(0x2455, 0x2289)) = 0;
#if !defined(jpn)
    func_ov002_0215b428((unsigned char*)arg0);
#endif
    ((SafeAllocator*)(arg0 + RG(0x850, 0x7b4)))->Reset();
    func_ov013_02186eec(arg0 + RG(0x1d04, 0x1bc8), 1);
    func_ov013_02186e74((Struct_ov002_021682c0*)(arg0 + RG(0x1d04, 0x1bc8)), (SafeAllocator*)(arg0 + RG(0x850, 0x7b4)));
    *(unsigned char*)(arg0 + RG(0x1d6b, 0x1c1b)) = func_ov002_021574d4(arg0, *(short*)(arg0 + RG(0x1c08, 0x1ad0)));
    (*(int*)(arg0 + RG(0x1bc0, 0x1a88)))++;
}
