#include <globaldefs.h>

extern "C" void func_0203ac10(void*, void*, int);

// USA: func_0209c7fc
extern "C" ARM void func_0209c7fc(void* obj) {
    if (*(short*)((char*)obj + 0xce) < 0) return;
    func_0203ac10(obj, (char*)obj + 0xc4, 0);
    *(short*)((char*)obj + 0xce) = -1;
    *(short*)((char*)obj + 0xca) = 0;
}
