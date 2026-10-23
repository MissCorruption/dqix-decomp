#include <globaldefs.h>
extern "C" int func_020e0434(struct Container020e0310 *, int);

extern int data_021536ac;

// USA: func_020e51e4
extern "C" ARM int func_020e51e4(int value) {
    return func_020e0434((struct Container020e0310 *)(&data_021536ac), (int)(value));
}
