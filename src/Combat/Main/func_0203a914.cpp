#include <globaldefs.h>
extern "C" void func_020bec74(int*);
extern "C" void func_020bc078(int*);


// USA: func_0203a914
extern "C" ARM void func_0203a914(void* arg0) {
    char* var0 = (char*)arg0;
    *(int*)(var0 + 0x0) = 0;
    func_020bc078((int*)(var0 + 0x98));
    func_020bec74((int*)(var0 + 0x9c));
    *(short*)(var0 + 0xa4) = -1;
    *(int*)(var0 + 0xa8) = 0;
    *(short*)(var0 + 0xac) = -1;
    *(short*)(var0 + 0xae) = -1;
}
