#include <globaldefs.h>

#if defined(jpn)
#endif

extern "C" void func_0203ac40(void* arg0, int arg1, int arg2, int arg3);

// USA: func_0203aa08
extern "C" ARM void func_0203aa08(void* arg0) {
    short var0;
    if (*(void**)arg0 == NULL) return;
    var0 = *(short*)((char*)arg0 + 0xac);
    if (var0 < 0) return;
    func_0203ac40(arg0, var0, *(short*)((char*)arg0 + 0xae), 0);
    *(short*)((char*)arg0 + 0xac) = -1;
    *(short*)((char*)arg0 + 0xae) = -1;
}
