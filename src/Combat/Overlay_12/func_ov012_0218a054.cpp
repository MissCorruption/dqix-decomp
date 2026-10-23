#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_0218a1f4 func_ov012_0218ae20
#define func_ov012_0218a2b8 func_ov012_0218ad7c
#define func_ov012_0218a374 func_ov012_0218acd8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov012_021893b4(void *arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov012_0218a2b8(void *arg0, void *arg1, int arg2);
extern "C" void func_ov012_0218a1f4(void *arg0, void *arg1, int arg2);
extern "C" void func_ov012_0218a374(void *arg0, void *arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif
struct Struct_0205d81c;
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);

// USA: func_ov012_0218a054
extern "C" ARM void func_ov012_0218a054(char *arg0) {
    func_ov012_021893b4(arg0, 0x10, R(0x18,0x17), 0x15);
    memset(*(void **)(arg0 + R(0x1344,0x1374)), 0, R(0x800,0x960));
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 0, 0, 1, 0);
#else
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 0, 0, 1, 0, 0);
#endif

    func_ov012_021893b4(arg0, 8, R(0xd,0xa), 8);
    memset(*(void **)(arg0 + R(0x1344,0x1374)), 0, R(0x800,0x960));
    func_ov012_0218a2b8(arg0, *(void **)(arg0 + R(0x1344,0x1374)), 0);
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0, 0);
#endif
#endif
#endif

    func_ov012_021893b4(arg0, R(9,7), R(0x16,0x13), 8);
    memset(*(void **)(arg0 + R(0x1344,0x1374)), 0, R(0x800,0x960));
    func_ov012_0218a1f4(arg0, *(void **)(arg0 + R(0x1344,0x1374)), 0);
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0, 0);
#endif
#endif
#endif

    func_ov012_021893b4(arg0, *(unsigned char *)(arg0 + R(0x1341,0x1371)), 1, 8);
    memset(*(void **)(arg0 + R(0x1344,0x1374)), 0, R(0x800,0x960));
    func_ov012_0218a374(arg0, *(void **)(arg0 + R(0x1344,0x1374)), 0);
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
#if defined(jpn)
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0);
#else
    func_0205d304(arg0 + R(0x90,0xac), *(void **)(arg0 + R(0x1344,0x1374)), 0, 1, 0, 1, 0, 0);
#endif
#endif
#endif

    func_0205deb4((Struct_0205d81c*)(arg0 + R(0x90,0xac)), 0x10, 0);
}
