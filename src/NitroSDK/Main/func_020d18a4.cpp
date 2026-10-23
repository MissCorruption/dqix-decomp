#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern short data_0211214c;

// USA: func_020d18a4
extern "C" ARM void func_020d18a4(int arg0, int arg1) {
    if ((arg1 & 0x3f) == 1) {
        data_0211214c = 1;
    } else {
        func_020c9be0();
    }
}
