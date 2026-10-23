#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_02073ec4_2;
extern "C" void func_0209be28(struct Struct_02073ec4_2* arg0, int arg1, int* arg2);

struct Struct_0209ba2c {
    struct Struct_02073ec4_2* unknown_0_;
    unsigned char unknown_4_[0x10];
    int unknown_14_;
    int unknown_18_;
};
extern struct Struct_0209ba2c* data_02109bb0;

// USA: func_0209ba2c
extern "C" ARM int func_0209ba2c(struct Struct_0201c1c8* arg0) {
    if (data_02109bb0->unknown_14_ != 0) {
        int var0 = ((Script::Parameter*)arg0)->ToInt();
        func_0209be28(data_02109bb0->unknown_0_, data_02109bb0->unknown_18_, &var0);
    }
    return 1;
}
