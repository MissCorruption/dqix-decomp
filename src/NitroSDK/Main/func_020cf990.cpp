#include <globaldefs.h>

struct DateFields_020cf8e4;
extern "C" int func_020cf8e4(struct DateFields_020cf8e4* d);
extern "C" int func_020cf978(unsigned char* obj);

// USA: func_020cf990
extern "C" ARM long long func_020cf990(int date, unsigned char* time) {
    int day, sec;
    day = func_020cf8e4((struct DateFields_020cf8e4*)date);
    if (day == -1) {
        return -1;
    }
    sec = func_020cf978(time);
    if (sec == -1) {
        return -1;
    }
    return ((long long)day) * (60 * 60 * 24) + sec;
}
