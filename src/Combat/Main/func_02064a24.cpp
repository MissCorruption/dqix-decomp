#include <globaldefs.h>
struct Struct_02064a08;

extern "C" int func_020649b0(void*, int, void*);

// USA: func_02064a24
extern "C" ARM void func_02064a24(void* arg0, Struct_02064a08* arg1) {
    *(int*)((char*)arg0 + 0x498) = 0;
    func_020649b0(arg0, 0x10, (void*)arg1);
}
