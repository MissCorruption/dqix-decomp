#include <globaldefs.h>

struct Struct_0208103c {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x30 - 0x10];
};

struct Struct_0207f524;

extern "C" struct Struct_0208103c* func_0207f6ac(struct Struct_0207f524*, int);

// USA: func_0208103c
extern "C" ARM void func_0208103c(void* arg0, int arg1, int arg2) {
    struct Struct_0208103c* var0 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 4), arg1);
    if (var0 != NULL) {
        var0->unknown_e_ = (short)arg2;
    }
}
