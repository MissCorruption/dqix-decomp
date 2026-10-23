#include <globaldefs.h>
extern "C" int func_020ce56c(int, int, int);

extern "C" int func_020cede0(void);

// USA: func_020ce7e0
extern "C" ARM int func_020ce7e0(int id) {
    if (func_020cede0() == 0) {
        return 0;
    }
    return func_020ce56c((int)(0x10), (int)((unsigned short)id), (int)(0));
}
