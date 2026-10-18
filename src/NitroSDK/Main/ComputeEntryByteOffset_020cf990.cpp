#include <globaldefs.h>

struct DateFields_020cf8e4;
extern "C" int func_020cf8e4(struct DateFields_020cf8e4* d);
int Get2DElementStride0x3c_020cf978(unsigned char* obj);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020cf990
ARM long long ComputeEntryByteOffset_020cf990(int date, unsigned char* time) {
    int day, sec;
    day = func_020cf8e4((struct DateFields_020cf8e4*)date);
    if (day == -1) {
        return -1;
    }
    sec = Get2DElementStride0x3c_020cf978(time);
    if (sec == -1) {
        return -1;
    }
    return ((long long)day) * (60 * 60 * 24) + sec;
}
