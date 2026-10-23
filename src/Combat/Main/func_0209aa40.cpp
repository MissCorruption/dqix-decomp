#include <globaldefs.h>

struct Struct_0209aa40_2 {
    char unknown_0_[0x108];
    int unknown_108_;
};
struct Struct_0209aa40 {
    struct Struct_0209aa40_2* unknown_0_;
};

// USA: func_0209aa40
extern "C" ARM int func_0209aa40(struct Struct_0209aa40* arg0) {
    struct Struct_0209aa40_2* var0 = arg0->unknown_0_;
    if (var0 != NULL) {
        return var0->unknown_108_;
    }
    return 0;
}
