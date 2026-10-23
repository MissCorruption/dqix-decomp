#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif


extern "C" void func_0206b104(void* arg0);
#if defined(jpn)
extern "C" void func_0206cba0(void* arg0);
struct Struct_02065920 { unsigned char unknown_0_0_:2; unsigned char unknown_0_2_:1; };
#else
extern "C" void func_0206b224(void* arg0, int arg1);
#endif

// USA: func_02065920
extern "C" ARM void func_02065920(unsigned char* arg0, unsigned int arg1) {
    if (
#if defined(jpn)
        ((Struct_02065920*)(arg0 + 0x17ff))->unknown_0_2_ != 0
#else
        (arg0 + 0x1000)[0x9d0] != 0
#endif
        || *(int*)(arg0 + (IS_JPN ? 0x870 : 0x9a0)) != 4) return;
    arg0[(IS_JPN ? 0x7e2 : 0x912)] = 0;
    if (arg1 < (arg0 + 0x1000)[(IS_JPN ? 0x78d : 0x95f)]) {
        (arg0 + 0x1000)[(IS_JPN ? 0x78d : 0x95f)] -= arg1;
        return;
    }
    (arg0 + 0x1000)[(IS_JPN ? 0x78d : 0x95f)] = 0;
    (arg0 + 0x1000)[(IS_JPN ? 0x7de : 0x9ae)] = 0;
    (arg0 + 0x1000)[(IS_JPN ? 0x7df : 0x9af)] = 0;
    (arg0 + 0x1000)[(IS_JPN ? 0x7fe : 0x9cd)] = 1;
    *(int*)(arg0 + (IS_JPN ? 0xc : 0x40)) = 0;
    *(int*)(arg0 + (IS_JPN ? 0x10 : 0x44)) = 0;
    func_0206b104(arg0);
#if defined(jpn)
    func_0206cba0(arg0);
    *(int*)(arg0 + 0x870) = 5;
#else
    *(int*)(arg0 + (IS_JPN ? 0x870 : 0x9a0)) = 5;
    func_0206b224(arg0, 5);
#endif
}
