#include <globaldefs.h>

struct Struct_0200ed8c {
    void* unknown_0_;
    int unknown_4_;
    void (*unknown_8_)(void*, int);
};

// KEEP-NAME
// USA: func_0200ed8c
extern "C" ARM void __end__catch(Struct_0200ed8c* arg0) {
    void* var0 = arg0->unknown_0_;
    if (var0 != 0 && arg0->unknown_8_ != 0) {
        arg0->unknown_8_(var0, -1);
    }
}
