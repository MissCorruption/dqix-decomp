#include <globaldefs.h>

extern "C" int func_02079840(void* arg0, int arg1, int arg2);

struct Struct_02079808 {
    int unknown_0_;
    char unknown_4_[0x30];
    int unknown_34_;
};

// USA: func_02079808
extern "C" ARM int func_02079808(void* arg0, struct Struct_02079808* arg1) {
    arg1->unknown_0_ = func_02079840(arg0, arg1->unknown_0_, 0);
    arg1->unknown_34_ = func_02079840(arg0, arg1->unknown_34_, 0);
    return 1;
}
