#include <globaldefs.h>

extern "C" void func_020ca528(void* a, void* b);
extern int data_0210a0cc;

struct Struct_0210a010 { int unknown_0_[0x3f]; int unknown_fc_; };
extern Struct_0210a010 data_0210a010;

// USA: func_02016d8c
extern "C" ARM void func_02016d8c(void* arg0) {
    func_020ca528(arg0, &data_0210a0cc);
    data_0210a010.unknown_fc_ &= ~0xa4;
}
