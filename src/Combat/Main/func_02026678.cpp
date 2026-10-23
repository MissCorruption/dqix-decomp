#include <globaldefs.h>

extern "C" void func_02026644(char* arg0);

// USA: func_02026678
extern "C" ARM void func_02026678(char* arg0) {
#if defined(jpn)
    *(unsigned char*)(arg0 + 0x90c) = 1;
    *(unsigned char*)(arg0 + 0x90d) = 0;
#else
    *(unsigned char*)(arg0 + 0x9b8) = 1;
    *(unsigned char*)(arg0 + 0x9b9) = 0;
#endif
    func_02026644(arg0);
}
