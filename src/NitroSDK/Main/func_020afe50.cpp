#include <globaldefs.h>

struct Struct_020afe50 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" int func_020c895c(int, int, int, void *);

// USA: func_020afe50
extern "C" ARM int func_020afe50(struct Struct_020afe50 *arg0, int arg1) {
    return func_020c895c(arg0->unknown_8_, arg0->unknown_4_, arg1, arg0);
}
