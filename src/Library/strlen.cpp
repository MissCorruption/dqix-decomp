#include <globaldefs.h>
#include <std_library_functions.h>

ARM unsigned int strlen(const char* arg0) {
    unsigned int var0 = -1;
    char var1;
    do {
        var1 = *arg0++;
        var0++;
    } while (var1 != 0);
    return var0;
}
