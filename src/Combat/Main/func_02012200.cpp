#include <globaldefs.h>

extern "C" void func_02099898(unsigned int*);
extern "C" void func_0200f3a4(void*);

// USA: func_02012200
extern "C" ARM char* func_02012200(char* obj) {
    func_02099898((unsigned int*)(obj + 0x468));
    func_0200f3a4(obj);
    return obj;
}
