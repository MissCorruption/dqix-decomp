#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct Struct_0202b2f0;
extern "C" signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_0202c178
extern "C" ARM Struct_0202b2f0_2* func_0202c178(struct Struct_0202b2f0* arg0, int arg1) {
    int var0 = func_0202bcbc(arg0, arg1);
    if (var0 < 0) return NULL;
    return (Struct_0202b2f0_2*)((char*)arg0 + 0xbc0 + var0 * 0x74);
}
