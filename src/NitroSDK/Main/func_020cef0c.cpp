#include <globaldefs.h>

struct Struct_020cef0c {
    void (*unknown_0_)(void*);
    void* unknown_4_;
    struct Struct_020cef0c* unknown_8_;
};

// USA: func_020cef0c
extern "C" ARM void func_020cef0c(struct Struct_020cef0c* arg0) {
    if (arg0 == 0) return;
    do {
        arg0->unknown_0_(arg0->unknown_4_);
        arg0 = arg0->unknown_8_;
    } while (arg0 != 0);
}
