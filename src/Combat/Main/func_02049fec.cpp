#include <globaldefs.h>
#include "Graphics/AlphaTween.h"

struct Struct_02049fec;

// USA: func_02049fec
extern "C" ARM float func_02049fec(char* arg0) {
    char* var0 = *(char**)(arg0 + 0x13c);
    if (var0 == NULL) return 0.0f;
    return ((AlphaTween*)((struct Struct_02049fec*)(var0 + 0x60)))->GetTarget();
}
