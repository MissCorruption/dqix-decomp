#include <globaldefs.h>

extern "C" ARM int LoadToMainBG3ScreenData(int arg0, int arg1, unsigned int arg2);

// USA: func_020bbaa4
extern "C" ARM int func_020bbaa4(int arg0, int arg1, unsigned int arg2) {
    return LoadToMainBG3ScreenData(arg0, arg1, arg2);
}
