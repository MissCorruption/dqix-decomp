#include <globaldefs.h>

#if defined(jpn)
enum { stateLowOffset = 4, stateHighOffset = 0x1800 };
#else
enum { stateLowOffset = 0x9e0, stateHighOffset = 0x1000 };
#endif

extern "C" unsigned int func_02042b10(void*, void*);
extern "C" unsigned int func_02042b1c(unsigned char*);
struct CE28Obj;
extern "C" unsigned int func_0205ce28(CE28Obj*);
struct Field440Obj0202f6d4;
extern "C" unsigned int func_0202f6d4(Field440Obj0202f6d4*);
extern "C" unsigned int func_020421a0();

// USA: func_0205ce50
extern "C" ARM unsigned int func_0205ce50(unsigned char* arg0) {
    unsigned int self = (unsigned int)arg0;
    unsigned int global = func_020421a0();
    func_02042b10((void*)global, (void*)(self + 0xb4));
    if (func_0205ce28((CE28Obj*)(global + stateLowOffset + stateHighOffset)) == 0) {
        func_0202f6d4((Field440Obj0202f6d4*)(global + stateLowOffset + stateHighOffset));
    }
    return func_02042b1c((unsigned char*)global);
}
