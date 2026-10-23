#include <globaldefs.h>

extern "C" void func_020a0d58(void* arg0);
extern "C" void func_0202e694(void* arg0, int* arg1);

// USA: func_020a2744
extern "C" ARM void func_020a2744(char* arg0) {
    func_020a0d58(arg0 + 0x248);
    *(int*)(arg0 + 0x220) = *(short*)(arg0 + 0x21e);
    func_0202e694(arg0, (int*)(arg0 + 0x220));
}
