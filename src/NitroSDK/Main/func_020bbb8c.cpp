#include <globaldefs.h>

extern "C" int LoadToSubBG3ScreenData(int, int, unsigned int);

// USA: func_020bbb8c
extern "C" ARM int func_020bbb8c(int arg0, int arg1, unsigned int arg2) {
    return LoadToSubBG3ScreenData(arg0, arg1, arg2);
}
