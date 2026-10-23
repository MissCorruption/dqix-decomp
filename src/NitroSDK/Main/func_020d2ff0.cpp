#include <globaldefs.h>

// USA: func_020d2ff0
extern "C" ARM int func_020d2ff0(const char* s) {
    int i = 0;
    if (s[i] != 0) {
        do {
            i++;
        } while (s[i] != 0);
    }
    return i;
}
