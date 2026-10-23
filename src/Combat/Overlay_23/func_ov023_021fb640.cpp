#include <globaldefs.h>

extern "C" void func_ov023_021f6c3c(void*, unsigned int, unsigned int, unsigned int);
extern "C" void func_ov023_021f6d9c(void* arg0, void* arg1);
extern "C" void func_ov023_021f6e34(void* arg0, int arg1, unsigned int arg2);

// USA: func_ov023_021fb640
extern "C" ARM void func_ov023_021fb640(void* arg0, void* arg1) {
    func_ov023_021f6c3c(arg1, ((unsigned char*)arg0)[0x7e], *(unsigned short*)((char*)arg0 + 0x90), 1);
    func_ov023_021f6d9c(arg1, (char*)arg0 + 0x94);
    func_ov023_021f6e34(arg1, ((unsigned char*)arg0)[0x7e], *(unsigned int*)((char*)arg0 + 0x5c));
}
