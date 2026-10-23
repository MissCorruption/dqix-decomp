#include <globaldefs.h>

extern "C" int func_02088e04(unsigned char* arg0);

// USA: func_02088dd8
extern "C" ARM int func_02088dd8(unsigned char* arg0) {
    if (func_02088e04(arg0) == 0) {
        return 0;
    }
    return (*(int*)(arg0 + 0x18) & 0x1000) == 0;
}
