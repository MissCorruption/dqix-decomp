#include <globaldefs.h>

struct SearchStruct0202c1a4 {
    char pad[0x1038];
    signed char arr[16];
};

extern "C" unsigned short func_0202df58(void);

// USA: func_0202c1a4
extern "C" ARM signed char func_0202c1a4(struct SearchStruct0202c1a4* obj) {
    return obj->arr[func_0202df58()];
}
