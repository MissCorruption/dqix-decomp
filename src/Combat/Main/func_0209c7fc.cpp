#include <globaldefs.h>

extern "C" void func_0203ac10(void*, void*, int);

// USA: func_0209c7fc
extern "C" ARM void func_0209c7fc(void* arg0) {
    if (*(short*)((char*)arg0 + 0xce) < 0) return;
    func_0203ac10(arg0, (char*)arg0 + 0xc4, 0);
    *(short*)((char*)arg0 + 0xce) = -1;
    *(short*)((char*)arg0 + 0xca) = 0;
}
