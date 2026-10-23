#include <globaldefs.h>

struct Struct_0207f524;
struct Struct_02072a68_2;

struct Struct_02080fe0 {
    void* unknown_0_;
};

extern "C" struct Struct_02080fe0* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

// USA: func_02080fe0
extern "C" ARM void func_02080fe0(void* arg0, int arg1, int arg2) {
    struct Struct_02080fe0* var0 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 0x4), arg1);
    if (var0 == NULL) {
        return;
    }
    var0->unknown_0_ = func_02072a68(*(struct Struct_02072a68_2**)arg0, arg2);
}
