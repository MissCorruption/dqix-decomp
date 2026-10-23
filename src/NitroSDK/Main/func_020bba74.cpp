#include <globaldefs.h>

extern "C" int LoadToMainBG1ScreenData(int, int, unsigned int);

// USA: func_020bba74
extern "C" ARM int func_020bba74(int arg0, int arg1, unsigned int arg2) {
    return LoadToMainBG1ScreenData(arg0, arg1, arg2);
}
