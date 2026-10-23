#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217585c_2096 = 0x7ac };
enum { Enum_ov003_0217585c_2008 = 0x754 };
#else
enum { Enum_ov003_0217585c_2096 = 0x830 };
enum { Enum_ov003_0217585c_2008 = 0x7d8 };
#endif

extern "C" void func_0205ac40(void*, void*, int);

// USA: func_ov003_0217585c
extern "C" ARM void func_ov003_0217585c(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
    char* var0 = *(char**)((char*)arg0 + Enum_ov003_0217585c_2096) + arg3 * 0x28;
    *(unsigned char*)(var0 + 0x22) = arg4;
    *(int*)(var0 + 0x14) = arg1 << 12;
    *(int*)(var0 + 0x18) = arg2 << 12;
    func_0205ac40((char*)arg0 + Enum_ov003_0217585c_2008, var0, arg2 << 12);
}
