#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201bf38_10053 = 0x2785, Enum_0201bf38_10054 = 0x2786, Enum_0201bf38_10056 = 0x2788 };
#else
enum { Enum_0201bf38_10053 = 0x2745, Enum_0201bf38_10054 = 0x2746, Enum_0201bf38_10056 = 0x2748 };
#endif

extern "C" ARM void func_0201bf98(unsigned char* arg0, int arg1, int arg2);

// USA: func_0201bf38
extern "C" ARM void func_0201bf38(unsigned char* arg0, int arg1, int arg2, int arg3, unsigned short arg4) {
    func_0201bf98(arg0, 0, arg1);
    arg0[Enum_0201bf38_10053] = arg2;
    arg0[Enum_0201bf38_10054] = arg3;
    *(unsigned short*)(arg0 + Enum_0201bf38_10056) = arg4;
}
