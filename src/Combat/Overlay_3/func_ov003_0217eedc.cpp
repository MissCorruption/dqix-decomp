#include <globaldefs.h>

#if defined(jpn)
#endif
extern "C" void func_ov009_02184c30(void* arg0);

// USA: func_ov003_0217eedc
extern "C" ARM void func_ov003_0217eedc(int* arg0) {
    if (arg0[7] != 0) {
        func_ov009_02184c30((void*)arg0[7]);
    }
}
