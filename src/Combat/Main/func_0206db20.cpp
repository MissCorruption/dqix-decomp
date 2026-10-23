#include <globaldefs.h>

#include "Combat/NodeLookup.h"

// USA: func_0206db20
extern "C" ARM struct Struct_0206db20* func_0206db20(void* arg0, int arg1) {
    struct Struct_0206db20* var0 = *(struct Struct_0206db20**)arg0;
    while (var0 != 0) {
        if (var0->unknown_0_ == arg1) {
            return var0;
        }
        var0 = var0->unknown_68_;
    }
    return 0;
}
