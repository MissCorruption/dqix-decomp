#include <globaldefs.h>

struct Struct_0207f524;
struct Struct_02072a68_2;

struct Struct_02081010 {
    char unknown_0_[0xe];
    short unknown_e_;
};

extern "C" struct Struct_02081010* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

// USA: func_02081010
extern "C" ARM void* func_02081010(void* arg0, int arg1) {
    struct Struct_02081010* var0 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 0x4), arg1);
    if (var0 == NULL) {
        return NULL;
    }
    return func_02072a68(*(struct Struct_02072a68_2**)arg0, var0->unknown_e_);
}
