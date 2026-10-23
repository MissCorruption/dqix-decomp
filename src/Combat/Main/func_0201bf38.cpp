#include <globaldefs.h>

#if defined(jpn)
enum { ParamAOffset = 0x2785, ParamBOffset = 0x2786, ParamCOffset = 0x2788 };
#else
enum { ParamAOffset = 0x2745, ParamBOffset = 0x2746, ParamCOffset = 0x2748 };
#endif

extern "C" ARM void func_0201bf98(unsigned char* obj, int bit, int set);

// USA: func_0201bf38
extern "C" ARM void func_0201bf38(unsigned char* obj, int set, int a, int b, unsigned short c) {
    func_0201bf98(obj, 0, set);
    obj[ParamAOffset] = a;
    obj[ParamBOffset] = b;
    *(unsigned short*)(obj + ParamCOffset) = c;
}
