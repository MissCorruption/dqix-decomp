#include <globaldefs.h>

extern "C" unsigned short func_0202df58(void);

struct Struct_0202c540 { int unknown_0_; };

// USA: func_0202c540
extern "C" ARM int func_0202c540(Struct_0202c540* arg0) {
    int var0 = arg0->unknown_0_ != 0;
    if (var0) {
        return func_0202df58() != 0;
    }
    return 0;
}
