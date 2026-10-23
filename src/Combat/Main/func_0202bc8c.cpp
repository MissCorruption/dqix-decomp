#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct Struct_0202b2f0;
extern "C" int func_0202c508(struct Struct_0202b2f0* arg0);
extern "C" unsigned short func_0202d698(void);

// USA: func_0202bc8c
extern "C" ARM unsigned short func_0202bc8c(struct Struct_0202b2f0* arg0) {
    if (func_0202c508(arg0)) {
        return func_0202d698();
    }
    return func_0202c178(arg0, 0)->unknown_4_;
}
