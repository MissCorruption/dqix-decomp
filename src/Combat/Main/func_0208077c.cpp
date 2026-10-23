#include <globaldefs.h>

struct Struct_0207f524;

struct Struct_0208077c {
    char unknown_0_[0x28];
    short unknown_28_;
};

extern "C" struct Struct_0208077c* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

// USA: func_0208077c
extern "C" ARM void func_0208077c(void* arg0, int arg1, short arg2) {
    struct Struct_0208077c* var0 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 4), arg1);
    if (var0 != NULL) {
        var0->unknown_28_ = arg2;
    }
}
