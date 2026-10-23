#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };
extern "C" void func_0209bd40(char* arg0, int arg1);

struct Struct_0209bb1c {
    char* unknown_0_;
    unsigned char unknown_4_[0x10];
    int unknown_14_;
    int unknown_18_;
};
extern struct Struct_0209bb1c* data_02109bb0;

// USA: func_0209bb1c
extern "C" ARM int func_0209bb1c(struct Struct_0201c1c8* arg0) {
    if (data_02109bb0->unknown_14_ == 0) return 1;
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_0209bd40(data_02109bb0->unknown_0_, var0);
    data_02109bb0->unknown_18_ = var0;
    return 1;
}
