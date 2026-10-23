#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1faa
#define REGION_OFFSET_1 0x1fa0
#define REGION_OFFSET_2 0x1f98
#else
#define REGION_OFFSET_0 0x1d72
#define REGION_OFFSET_1 0x1d68
#define REGION_OFFSET_2 0x1d60
#endif


extern "C" int func_02092bcc(void* arg0, int arg1);
extern "C" int func_02092b34(void* arg0);
extern "C" void func_ov000_02176e3c(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_ov000_0217c638(void* arg0, int arg1, int arg2);

// USA: func_ov000_0217de64
extern "C" ARM void func_ov000_0217de64(char* arg0, int arg1, int arg2) {
    unsigned short var0 = *(unsigned short*)(arg0 + REGION_OFFSET_0);
    *(unsigned short*)(arg0 + REGION_OFFSET_0) = var0 & ~0x100;
    int var1 = func_02092bcc(arg0 + 0x7c, *(int*)(arg0 + 0x94c));
    if (var1 == 0) {
        return;
    }
    func_02092b34(arg0 + 0x7c);
    signed char var2 = *(signed char*)(arg0 + REGION_OFFSET_1);
    *(unsigned char*)(arg0 + var2 + REGION_OFFSET_2) = 0;
    *(signed char*)(arg0 + REGION_OFFSET_1) = *(signed char*)(arg0 + REGION_OFFSET_1) - 1;
    func_ov000_02176e3c(arg0, 0, *(signed char*)(arg0 + *(signed char*)(arg0 + REGION_OFFSET_1) + REGION_OFFSET_2), arg1, arg2, 0);
    func_ov000_0217c638(arg0, arg1, arg2);
}
