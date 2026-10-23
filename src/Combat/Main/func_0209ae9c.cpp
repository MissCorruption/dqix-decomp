#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_02073ec4_3;
struct Struct_02073ec4_2;
extern "C" struct Struct_02073ec4_3* func_0209bd94(struct Struct_02073ec4_2* arg0, int arg1);

struct Struct_0201c1c8_3 {
    unsigned char unknown_0_[0x4c];
};

struct Struct_0209ae9c {
    struct Struct_0201c1c8_3 unknown_0_[6];
    int unknown_1c8_;
    int unknown_1cc_;
    int unknown_1d0_;
};

struct Struct_0209ae9c_2 {
    struct Struct_0209ae9c* unknown_0_;
    struct Struct_02073ec4_2* unknown_4_;
    int unknown_8_;
};
extern struct Struct_0209ae9c_2* data_02109bac;

// USA: func_0209ae9c
extern "C" ARM int func_0209ae9c(struct Struct_0201c1c8* arg0) {
    data_02109bac->unknown_8_ = 0;

    int var0 = ((Script::Parameter*)arg0)->ToInt();
    if (func_0209bd94(data_02109bac->unknown_4_, var0) == NULL) {
        return 1;
    }

    struct Struct_0209ae9c* var1 = data_02109bac->unknown_0_;
    int var2 = ++var1->unknown_1c8_;
    data_02109bac->unknown_0_->unknown_1cc_ = 0;
    data_02109bac->unknown_0_->unknown_1d0_ = 0;
    *(short*)((char*)data_02109bac->unknown_0_ + var2 * 0x4c) = (short)var0;
    data_02109bac->unknown_8_ = 1;
    return 1;
}
