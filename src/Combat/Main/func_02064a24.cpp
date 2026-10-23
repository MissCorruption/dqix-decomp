#include <globaldefs.h>
struct Desc021b790c;

extern "C" int func_020649b0(void*, int, void*);

// USA: func_02064a24
extern "C" ARM void func_02064a24(void* obj, Desc021b790c* arg) {
    *(int*)((char*)obj + 0x498) = 0;
    func_020649b0(obj, 0x10, (void*)arg);
}
