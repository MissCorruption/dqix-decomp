#include <globaldefs.h>
#if defined(jpn)
#define func_0205b008 func_0205c3a4
#endif

extern "C" int func_0205b008(int arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_0205af38
extern "C" ARM void func_0205af38(int arg0, char* arg1, int arg2, int arg3) {
    if (arg1 != 0) {
        if (func_0205b008(arg0, arg1, 0, 0x300, 8, arg2 | (((unsigned int)arg3 << 17) >> 16)) == 0) {
            arg1[0x23] = (char)arg2;
            arg1[0x24] = (char)arg3;
        }
    }
}
