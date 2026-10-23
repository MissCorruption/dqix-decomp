#include <globaldefs.h>

struct SearchStruct {
    char pad[0x1038];
    signed char arr[16];
};

extern "C" int func_0202c540(struct SearchStruct* obj, int value);
extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);

// USA: func_0202c718
extern "C" ARM void func_0202c718(struct SearchStruct* obj, int value) {
    if (func_0202c540(obj, value)) return;
    {
        int idx = func_0202bcbc(obj, value);
        *((unsigned char*)obj + 0x1010) &= ~(1 << idx);
    }
}
