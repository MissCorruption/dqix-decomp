#include <globaldefs.h>

// USA: func_ov024_021fe698
extern "C" ARM int func_ov024_021fe698(char* arg0, int arg1) {
    if (*(unsigned char*)(arg0 + arg1 + 0x10) == 0) {
        return 0;
    }
    *(int*)(arg0 + 0x38) = arg1;
    return 1;
}
