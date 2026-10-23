#include <globaldefs.h>

struct Struct_0205faf4_8;
struct Struct_0205faf4_7;
extern "C" struct Struct_0205faf4_8* func_02096134(struct Struct_0205faf4_7* arg0, int arg1);

struct Struct_0209618c {
    unsigned int unknown_0_0_ : 11;
    unsigned int unknown_1_3_ : 3;
    unsigned int unknown_1_6_ : 18;
};

// USA: func_0209618c
extern "C" ARM unsigned char func_0209618c(struct Struct_0205faf4_7* arg0, int arg1) {
    struct Struct_0205faf4_8* var0 = func_02096134(arg0, arg1);
    if (var0 != NULL) {
        return ((struct Struct_0209618c*)var0)->unknown_1_3_;
    }
    return 0;
}
