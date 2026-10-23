#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_ov025_021ef778[];
extern char data_ov025_021ef781[];
extern char data_ov025_021ef78a[];
extern char data_ov025_021ef791[];
extern char data_ov025_021ef7ac[];
extern char data_ov025_021ef7b5[];
extern char data_ov025_021ef7be[];

// USA: func_ov025_021e24d0
extern "C" ARM int func_ov025_021e24d0(char* arg0, char* arg1, char* arg2) {
    char* var0 = strstr(arg0, data_ov025_021ef778);
    if (!var0) {
        strstr(arg0, data_ov025_021ef781);
    }
    if (var0) {
        strcpy(arg2, var0 + strlen(data_ov025_021ef78a));
        strcpy(arg1, data_ov025_021ef791);
        return 1;
    }
    var0 = strstr(arg0, data_ov025_021ef7ac);
    if (!var0) {
        strstr(arg0, data_ov025_021ef7b5);
    }
    if (!var0) return 0;
    strcpy(arg2, var0 + strlen(data_ov025_021ef78a));
    strcpy(arg1, data_ov025_021ef7be);
    return 1;
}
