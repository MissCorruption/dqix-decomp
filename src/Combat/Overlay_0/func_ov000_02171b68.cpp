#include <globaldefs.h>

extern "C" int func_ov000_02171bc0(void*);

#if defined(jpn)
enum { Enum_ov000_02171b68_1008 = 0x430, Enum_ov000_02171b68_134 = 0xc6 };
#else
enum { Enum_ov000_02171b68_1008 = 0x3f0, Enum_ov000_02171b68_134 = 0x86 };
#endif

// USA: func_ov000_02171b68
extern "C" ARM void func_ov000_02171b68(void* arg0, int arg1, void* arg2) {
    if (arg1 < 0) return;
    if (arg1 >= 0x10) return;
    if (arg2 == 0) return;
    *(void**)((char*)arg0 + arg1 * 4 + Enum_ov000_02171b68_1008) = arg2;
    *(unsigned char*)((char*)arg0 + Enum_ov000_02171b68_134) = (unsigned char)func_ov000_02171bc0(arg0);
}
