#include <globaldefs.h>

extern "C" void func_0203cbd8(void* arg0);
extern "C" void func_0203f53c(void* arg0, int arg1, int arg2);

// USA: func_0203cd64
extern "C" ARM void func_0203cd64(char* arg0, int arg1) {
    int var0 = *(int*)(arg0 + 0x5c);
    if (!(var0 & 0x10) && !(var0 & 0x20)) {
        func_0203cbd8(arg0);
    }
    func_0203f53c(arg0, arg1, ((unsigned char*)arg0)[0x95] != 0 ? 0xe40 : 0x1000);
}
