#include <globaldefs.h>

extern "C" int LoadToSubObjStandardPalette(int, int, unsigned int);

// USA: func_020bbbb0
extern "C" ARM int func_020bbbb0(int arg0, int arg1, unsigned int arg2) {
    return LoadToSubObjStandardPalette(arg0, arg1, arg2);
}
