#include <globaldefs.h>
#if defined(jpn)
#define func_ov009_02184bbc func_ov009_02185ee8
#endif

#if defined(jpn)
#endif
extern "C" void func_ov009_02184bbc(void* arg0);

// USA: func_ov003_0217eec4
extern "C" ARM void func_ov003_0217eec4(int* arg0) {
    if (arg0[7] != 0) {
        func_ov009_02184bbc((void*)arg0[7]);
    }
}
