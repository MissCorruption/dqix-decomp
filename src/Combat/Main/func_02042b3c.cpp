#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif


#if defined(jpn)
extern "C" void func_02043270(void*, int, int, int, int);
#else
extern "C" void func_02042b98(void*, int, int, int, int);
#endif

// USA: func_02042b3c
extern "C" ARM void func_02042b3c(void* arg0) {
    *(int*)((char*)arg0 + (IS_JPN ? 0x1730 : 0x1860)) = 0xc;
    *(int*)((char*)arg0 + (IS_JPN ? 0x1734 : 0x1864)) = 0x10;
    #if defined(jpn)
    func_02043270(arg0, 0xc, 0x90, 0x100, 0x30);
#else
    func_02042b98(arg0, 2, 0x92, 0xfc, 0x4a);
#endif
    *(unsigned char*)((char*)arg0 + (IS_JPN ? 0x17e2 : 0x19b2)) = 0;
    *(unsigned char*)((char*)arg0 + (IS_JPN ? 0x17e1 : 0x19b1)) = 0;
    *(unsigned char*)((char*)arg0 + (IS_JPN ? 0x1789 : 0x195b)) |= 2;
}
