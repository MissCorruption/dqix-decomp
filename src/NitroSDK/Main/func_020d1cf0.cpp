#include <globaldefs.h>

extern "C" void func_020d1c64(const unsigned int* arg0, unsigned int* arg1, const unsigned char* arg2, unsigned int arg3);

// USA: func_020d1cf0
extern "C" ARM unsigned int func_020d1cf0(const unsigned int* arg0, const unsigned char* arg1, unsigned int arg2) {
    unsigned int var0 = ~0;
    func_020d1c64(arg0, &var0, arg1, arg2);
    return ~var0;
}
