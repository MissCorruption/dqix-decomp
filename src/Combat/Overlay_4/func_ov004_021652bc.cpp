#include <globaldefs.h>

#if defined(jpn)
enum { StatusFieldOffset = 0x868 };
#else
enum { StatusFieldOffset = 0x998 };
#endif

extern "C" int func_020421a0(void);
extern "C" void func_ov011_021848a0(void* obj, int val);

// USA: func_ov004_021652bc
#if defined(jpn)
extern "C" ARM int func_ov004_02165b4c(void* obj)
#else
extern "C" ARM int func_ov004_021652bc(void* obj)
#endif
{
    if (*(int*)((char*)func_020421a0() + StatusFieldOffset) == 0) {
        func_ov011_021848a0(obj, 0x65);
    }
    return 0;
}
