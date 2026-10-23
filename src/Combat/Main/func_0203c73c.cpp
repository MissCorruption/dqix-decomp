#include <globaldefs.h>
extern "C" void func_0203c2c0(char*);

extern "C" void func_0203bd24(char*);

// USA: func_0203c73c
extern "C" ARM char* func_0203c73c(char* arg0) {
    func_0203c2c0((char*)(arg0 + 0x10));
    func_0203bd24((char*)arg0);
    return arg0;
}
