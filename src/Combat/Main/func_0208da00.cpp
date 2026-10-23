#include <globaldefs.h>

struct Struct_0208da00 {
    short unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_0208bf78_5 {
    struct Struct_0208da00* unknown_0_;
    short unknown_4_;
};

extern "C" struct Struct_0208da00* func_0208d994(struct Struct_0208bf78_5* arg0, int arg1);

// USA: func_0208da00
extern "C" ARM int func_0208da00(struct Struct_0208bf78_5* arg0, int arg1) {
    struct Struct_0208da00* var0 = func_0208d994(arg0, arg1);
    return var0 ? var0->unknown_8_ : 0;
}
