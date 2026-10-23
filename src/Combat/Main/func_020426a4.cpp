#include <globaldefs.h>
extern "C" int func_02042658(void*, int);

extern "C" int func_02042190(int arg0);

// USA: func_020426a4
extern "C" ARM int func_020426a4(int arg0, int arg1) {
    return func_02042658((void*)(func_02042190(arg0)), (int)(arg1));
}
