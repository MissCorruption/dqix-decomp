#include <globaldefs.h>

extern "C" void func_0206ddb8(void*);

// USA: func_0205facc
extern "C" ARM void func_0205facc(void* arg0) {
    func_0206ddb8(arg0);
    *(int*)((char*)arg0 + 0x480) = 0;
    *(int*)((char*)arg0 + 0x47c) = 0;
    *(int*)((char*)arg0 + 0x494) = 0;
    *(int*)((char*)arg0 + 0x498) = 0;
    *(char*)((char*)arg0 + 0x492) = 0;
}
