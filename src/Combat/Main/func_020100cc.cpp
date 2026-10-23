#include <globaldefs.h>
extern "C" int func_0202e09c(int);

// USA: func_020100cc
extern "C" ARM int func_020100cc(char* obj) {
    int p = *(int*)(obj + 0x3b0);
    if (p != 0) {
        if (func_0202e09c((int)(p)) & 2) {
            return *(int*)(obj + 0x3b0);
        }
    }
    return 0;
}
