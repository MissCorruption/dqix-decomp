#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_021065d8[];
extern char data_02105fd8[];

// USA: func_0203b718
extern "C" ARM void func_0203b718(void* arg0, int arg1, int arg2, int arg3) {
    char* var0 = (char*)arg0;
    switch (arg1) {
    case 0:
    case 1:
        switch (arg2) {
        case 0:
            memset(data_021065d8, arg3, 0x1000);
            break;
        case 1:
            memset(data_02105fd8, arg3, 0x600);
            break;
        }
        break;
    }
    ((int*)(var0 + 0x40))[arg2 + arg1 * 4] = 1;
}
