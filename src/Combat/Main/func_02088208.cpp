#include <globaldefs.h>

extern "C" int func_0208767c(void*, int);

// USA: func_02088208
extern "C" ARM int func_02088208(void* arg0, int arg1) {
    *(unsigned int*)((char*)arg0 + 0x14) |= 0x800000;
    return func_0208767c(arg0, arg1);
}
