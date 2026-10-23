// KEEP-NAME
#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov012_0218aabc_4977 = 0x1341, Enum_ov012_0218aabc_4980 = 0x1344, Enum_ov012_0218aabc_2400 = 0x800, Enum_ov012_0218aabc_144 = 0x90 };
#define func_ov012_0218ab34 func_ov012_0218b634
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#else
enum { Enum_ov012_0218aabc_4977 = 0x1371, Enum_ov012_0218aabc_4980 = 0x1374, Enum_ov012_0218aabc_2400 = 0x960, Enum_ov012_0218aabc_172 = 0xac };
extern "C" void func_0205d304(void*, void*, int, int, int, int, int, int);
#endif

extern "C" void func_ov012_021893b4(void*, int, int, int);
extern "C" void func_ov012_0218ab34(void*, void*, int);

// USA: func_ov012_0218aabc
extern "C" ARM void func_ov012_0218aabc(char* arg0) {
    func_ov012_021893b4(arg0, *(unsigned char*)(arg0 + Enum_ov012_0218aabc_4977), 1, 3);
    memset(*(void**)(arg0 + Enum_ov012_0218aabc_4980), 0, Enum_ov012_0218aabc_2400);
    func_ov012_0218ab34(arg0, *(void**)(arg0 + Enum_ov012_0218aabc_4980), 0);
#if defined(jpn)
    func_0205d304(arg0 + Enum_ov012_0218aabc_144, *(void**)(arg0 + Enum_ov012_0218aabc_4980), 0, 0, 0, 1, 0);
#else
    func_0205d304(arg0 + Enum_ov012_0218aabc_172, *(void**)(arg0 + Enum_ov012_0218aabc_4980), 0, 0, 0, 1, 0, 0);
#endif
}
