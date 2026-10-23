#include <globaldefs.h>

extern "C" int func_ov000_02156068(int, int, int, int);

// USA: func_ov024_021d9174
extern "C" ARM int func_ov024_021d9174(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    if (!func_ov000_02156068(*(int*)arg0, (short)arg2, 4, 0)) {
        return arg5;
    }
    return (int)((float)arg5 * 1.5f);
}
