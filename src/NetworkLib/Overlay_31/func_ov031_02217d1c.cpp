#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov031_02218528(void* arg0, void* arg1, void* arg2);
extern "C" int func_020c7170(char*, unsigned long, const char*, ...);

extern int data_ov031_02249de4;
extern int data_ov031_02249df0;
extern char data_ov031_02249df8;
extern const char data_ov031_02249e00[];
extern int data_ov031_02249e04;

// USA: func_ov031_02217d1c
extern "C" ARM int func_ov031_02217d1c(void* arg0) {
    if (func_ov031_02218528(arg0, &data_ov031_02249de4, &data_ov031_02249df0) != 0) {
        return 1;
    }
    char* var0 = strstr(*(char**)((char*)arg0 + 0x1000 + 0x9f8), &data_ov031_02249df8);
    int var1 = strlen(var0 + 4);
    if (var1 != 0) {
        char var2[8];
        func_020c7170(var2, 7, data_ov031_02249e00, var1);
        if (func_ov031_02218528(arg0, &data_ov031_02249e04, var2) != 0) {
            return 1;
        }
    }
    return 0;
}
