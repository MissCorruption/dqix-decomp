#include <globaldefs.h>

extern "C" void func_020d1b68(const unsigned char* arg0, unsigned char* arg1, const unsigned char* arg2, unsigned int arg3);

// USA: func_020d1ca0
extern "C" ARM unsigned char func_020d1ca0(const unsigned char* arg0, const unsigned char* arg1, unsigned int arg2) {
    unsigned char var0 = 0;
    func_020d1b68(arg0, &var0, arg1, arg2);
    return var0;
}
