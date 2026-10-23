#include <globaldefs.h>

struct SearchStruct;
extern "C" signed char func_0202bcbc(struct SearchStruct* obj, int value);
struct SearchStruct;
extern "C" int func_0202bc8c(struct SearchStruct*);

// USA: func_0202bd34
extern "C" ARM int func_0202bd34(struct SearchStruct* obj, int value) {
    int idx = func_0202bcbc(obj, value);
    if (idx < 0) return 0;
    return (func_0202bc8c((struct SearchStruct*)obj) & (1 << idx)) != 0;
}
