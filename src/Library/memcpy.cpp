#include <globaldefs.h>
#include <std_library_functions.h>

ARM void* memcpy(void* arg0, void* arg1, unsigned int arg2) {
    char* var0 = (char*)arg0;
    char* var1 = (char*)arg1;
    if (arg2 == 0) return arg0;
    do {
        *var0++ = *var1++;
    } while (--arg2);
    return arg0;
}
