#include <globaldefs.h>
#include <std_library_functions.h>

ARM char* strcat(char* arg0, const char* arg1) {
    char* var0 = arg0;
    char* var1;
    while (*var0++ != 0) ;
    var0--;
    do {
        var1 = var0++;
        *var1 = *arg1++;
    } while (*var1 != 0);
    return arg0;
}
