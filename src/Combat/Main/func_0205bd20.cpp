#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205bd20 {
    char pad[0x4c];
    unsigned char field4c;
    unsigned char field4d;
    unsigned char field4e;
};

// USA: func_0205bd20
extern "C" ARM int func_0205bd20(struct Struct_0205bd20* s, int key) {
    int result = 0;
    if (g_touchInput.pressed_ != 0 && s->field4e == 1 && s->field4c != 0) {
        result = 1;
    }
    return result;
}
