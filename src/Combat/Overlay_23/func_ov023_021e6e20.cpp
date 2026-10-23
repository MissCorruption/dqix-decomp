#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205d81c {
    char unknown_000[0xb0];
    unsigned char selected;
};

extern "C" int func_0205d97c(Struct_0205d81c* elements);

struct Obj021e6e20 {
#if defined(jpn)
    char unknown_000[0x90];
#else
    char unknown_000[0xac];
#endif
    Struct_0205d81c elements;
};

extern "C" ARM int func_ov023_021e6e20(Obj021e6e20* selection) {
    int inputTriggered = g_keyManager.TestKeysPressed(2);
    int touchOutsideSelection = func_0205d97c(&selection->elements) == 2;
    return (inputTriggered | touchOutsideSelection) != 0;
}
