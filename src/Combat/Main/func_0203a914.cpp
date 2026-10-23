#include <globaldefs.h>
extern "C" void func_020bec74(int*);
extern "C" void func_020bc078(int*);


// USA: func_0203a914
extern "C" ARM void func_0203a914(void* obj) {
    char* p = (char*)obj;
    *(int*)(p + 0x0) = 0;
    func_020bc078((int*)(p + 0x98));
    func_020bec74((int*)(p + 0x9c));
    *(short*)(p + 0xa4) = -1;
    *(int*)(p + 0xa8) = 0;
    *(short*)(p + 0xac) = -1;
    *(short*)(p + 0xae) = -1;
}
