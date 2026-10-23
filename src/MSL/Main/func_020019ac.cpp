#include <globaldefs.h>

extern int data_020eed28;

typedef int (*Type_020019ac)(void*, void*);

// USA: func_020019ac
extern "C" ARM int func_020019ac(void* arg0, void* arg1) {
    void* var0 = *(void**)((char*)&data_020eed28 + 8);
    Type_020019ac var1 = *(Type_020019ac*)((char*)var0 + 4);
    return var1(arg0, arg1);
}
