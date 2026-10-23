#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#if defined(jpn)
#define func_ov014_0218854c func_ov014_0218942c
#endif

struct Struct_02081164;

extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
extern "C" void func_02080798(void* arg0, int arg1, int arg2);
extern "C" void func_02081164(struct Struct_02081164* arg0, int arg1, int arg2);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov014_0218854c
extern "C" ARM void func_ov014_0218854c(void* arg0) {
    int var0 = (*((unsigned char*)arg0 + 0x17e) & 8) ? 1 : 0;
    short var1 = 0x1b + var0;
    func_0208103c(*(void**)((char*)arg0 + 0xc0), 0x1a, var1);
#if !defined(jpn)
    func_02080798(*(void**)((char*)arg0 + 0xc0), 0x1a, 1);
#endif
    func_02081164(*(struct Struct_02081164**)((char*)arg0 + 0xc0), 4, 1);
    func_02080c68(*(void**)((char*)arg0 + 0xc0), 4, 1);
    func_020813ec(*(void**)((char*)arg0 + 0xc0), 4);
}
