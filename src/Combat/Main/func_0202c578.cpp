#include <globaldefs.h>

struct SearchStruct;
struct ByteSearchStruct;
extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);
extern "C" signed char func_0202bcf8(struct ByteSearchStruct* obj, int value);

// USA: func_0202c578
extern "C" ARM int func_0202c578(struct SearchStruct* obj, int value) {
    int idx = func_0202bcbc(obj, value);
    if (idx < 0) {
        idx = func_0202bcf8((struct ByteSearchStruct*)obj, value);
        if (idx < 0) return 0;
    }
    return *((unsigned char*)obj + 0x100e) & (1 << idx);
}
