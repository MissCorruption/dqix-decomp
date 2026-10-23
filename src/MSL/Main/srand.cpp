#include <globaldefs.h>

extern unsigned int data_020eef30;

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02003d48
extern "C" ARM void srand(int arg0) {
    data_020eef30 = arg0;
}
