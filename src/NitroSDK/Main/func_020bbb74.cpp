#include <globaldefs.h>

extern "C" extern int LoadToSubBG1ScreenData(int arg0, int arg1, unsigned int arg2);

// USA: func_020bbb74
extern "C" ARM int func_020bbb74(int arg0, int arg1, unsigned int arg2) {
    return LoadToSubBG1ScreenData(arg0, arg1, arg2);
}
