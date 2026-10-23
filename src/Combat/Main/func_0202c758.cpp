#include <globaldefs.h>

struct SearchStruct {
    char pad[0x1038];
    signed char arr[16];
};

extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);

// USA: func_0202c758
extern "C" ARM int func_0202c758(struct SearchStruct* obj, int value) {
    int bit = func_0202bcbc(obj, value);
    return *((unsigned char*)obj + 0x1010) & (1 << bit);
}
