#include <globaldefs.h>

struct SearchStruct {
    char pad[0x1038];
    signed char arr[16];
};
struct ByteSearchStruct;

extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);
extern "C" signed char func_0202bcf8(struct ByteSearchStruct* obj, int value);
extern "C" void func_0202c69c(struct SearchStruct* obj, int value);
extern "C" void func_0202c288(struct SearchStruct* obj);

// USA: func_0202c21c
extern "C" ARM void func_0202c21c(struct SearchStruct* obj, int value) {
    int idx = func_0202bcbc(obj, value);
    if (idx < 0) {
        idx = func_0202bcf8((struct ByteSearchStruct*)obj, value);
        if (idx < 0) return;
    }
    *((unsigned char*)obj + 0x100c) &= ~(1 << idx);
    func_0202c69c(obj, value);
    func_0202c288(obj);
    obj->arr[idx] = 0;
}
