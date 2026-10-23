#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct SearchStruct;
extern "C" int func_0202c508(struct SearchStruct* obj);
extern "C" unsigned short func_0202d698(void);

// USA: func_0202bc8c
extern "C" ARM unsigned short func_0202bc8c(struct SearchStruct* obj) {
    if (func_0202c508(obj)) {
        return func_0202d698();
    }
    return func_0202c178(obj, 0)->mask;
}
