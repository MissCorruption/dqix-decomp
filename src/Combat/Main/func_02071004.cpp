#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_02108d70 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xf];
    int unknown_10_;
    unsigned char unknown_14_[8];
    int unknown_1c_;
};

extern struct Struct_02108d70 data_02108d70;

// USA: func_02071004
extern "C" ARM int func_02071004(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    if (data_02108d70.unknown_1c_ == var0 || data_02108d70.unknown_0_ != 0) {
        data_02108d70.unknown_10_++;
    }
    return 1;
}
