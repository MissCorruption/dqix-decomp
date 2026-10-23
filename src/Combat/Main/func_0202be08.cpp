#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct Struct_0202b2f0;
extern "C" int func_0202c1c0(struct Struct_0202b2f0* arg0, int arg1);
extern "C" unsigned short func_0202df58(void);

// USA: func_0202be08
extern "C" ARM int func_0202be08(struct Struct_0202b2f0* arg0, int arg1) {
    void* var0;
    if (!func_0202c1c0(arg0, arg1)) {
        return 0;
    }
    if (arg1 == *(signed char*)((char*)arg0 + func_0202df58() + 0x1000 + 0x38)) {
        var0 = (char*)arg0 + 0x7c0;
    } else {
        var0 = func_0202c178(arg0, arg1);
    }
    if (var0 == NULL) {
        return 0;
    }
    return (((unsigned int)*(unsigned short*)((char*)var0 + 0x2) << 0x14) >> 31) != 0;
}
