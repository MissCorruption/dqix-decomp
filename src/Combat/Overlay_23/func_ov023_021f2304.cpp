#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" void* memset(void* arg0, int arg1, int arg2);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern char data_ov023_021fe144;

// USA: func_ov023_021f2304
extern "C" ARM void func_ov023_021f2304(void* arg0, char* arg1) {
    if (arg1 == NULL) {
        return;
    }
    memset((char*)arg0 + 0xc, 0, 0x38);
    sprintf((char*)arg0 + 0xc + func_020d2ff0((char*)arg0 + 0xc), &data_ov023_021fe144, arg1);
}
