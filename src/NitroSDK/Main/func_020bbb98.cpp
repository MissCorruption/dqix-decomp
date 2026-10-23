#include <globaldefs.h>

extern "C" int LoadToSubBG2ScreenData(int, int, unsigned int);

// USA: func_020bbb98
extern "C" ARM int func_020bbb98(int arg0, int arg1, unsigned int arg2) {
    return LoadToSubBG2ScreenData(arg0, arg1, arg2);
}
