#include <globaldefs.h>

struct Struct_0205ce28 {
    char unknown_0_[0x8];
    int unknown_8_;
};

struct Struct_0205ce28_2 {
    char unknown_0_[0x440];
    struct Struct_0205ce28* unknown_440_;
};

// USA: func_0205ce28
extern "C" ARM int func_0205ce28(struct Struct_0205ce28_2* arg0) {
    struct Struct_0205ce28* var0 = arg0->unknown_440_;
    if (var0 != 0) {
        return var0->unknown_8_ == 0;
    }
    return 1;
}
