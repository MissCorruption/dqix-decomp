#include <globaldefs.h>

extern "C" void func_020d1be4(const unsigned short* arg0, unsigned short* arg1, const unsigned char* arg2, unsigned int arg3);

// USA: func_020d1cc8
extern "C" ARM unsigned short func_020d1cc8(const unsigned short* arg0, const unsigned char* arg1, unsigned int arg2) {
    unsigned short var0 = 0;
    func_020d1be4(arg0, &var0, arg1, arg2);
    return var0;
}
