#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02023b0c_1913 = 0x6cd };
enum { Enum_02023b0c_2490 = 0x90e };
#else
enum { Enum_02023b0c_1913 = 0x779 };
enum { Enum_02023b0c_2490 = 0x9ba };
#endif

#include "std_library_functions.h"

// USA: func_02023b0c
extern "C" ARM void func_02023b0c(char* arg0, char* arg1) {
    if (arg1 == NULL) return;
    if (strcmp(arg1, arg0 + 2) == 0) {
        ((unsigned char*)arg0)[0x12] = 0;
    } else {
        ((unsigned char*)arg0)[0x12] = 1;
    }
    if (((unsigned char*)arg0)[0x12] != 0) {
        arg0[Enum_02023b0c_1913] = 0;
        arg0[Enum_02023b0c_2490] = 0;
    }
    strcpy(arg0 + 2, arg1);
}
