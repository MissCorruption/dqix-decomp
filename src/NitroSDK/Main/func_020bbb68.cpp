#include <globaldefs.h>

extern "C" extern int LoadToSubBG0ScreenData(int arg0, int arg1, unsigned int arg2);

// USA: func_020bbb68
extern "C" ARM int func_020bbb68(int arg0, int arg1, unsigned int arg2) {
    return LoadToSubBG0ScreenData(arg0, arg1, arg2);
}
