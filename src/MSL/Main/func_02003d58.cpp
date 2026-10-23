#include <globaldefs.h>

struct Struct_02003d58 {
    char* unknown_0_;
    int unknown_4_;
};


// USA: func_02003d58
extern "C" ARM int func_02003d58(Struct_02003d58* arg0, int arg1, int arg2) {
    switch (arg2) {
    case 0: {
        char var0 = *arg0->unknown_0_;
        if (var0 == 0) {
            arg0->unknown_4_ = 1;
            return -1;
        }
        arg0->unknown_0_++;
        return (unsigned char)var0;
    }
    case 1:
        if (arg0->unknown_4_ == 0) {
            arg0->unknown_0_--;
        } else {
            arg0->unknown_4_ = 0;
        }
        return arg1;
    case 2:
        return arg0->unknown_4_;
    default:
        return 0;
    }
}
