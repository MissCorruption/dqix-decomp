#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov023_021f57c4_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 11;
};

struct Struct_ov023_021f57c4 {
    char unknown_0_[0x100];
    struct Struct_ov023_021f57c4_2 unknown_100_;
};

struct Struct_ov023_021fff08_5 {
    char unknown_0_[0xc];
    struct Struct_ov023_021f57c4* unknown_c_;
};

extern struct Struct_ov023_021fff08_5 data_ov023_021fff08;

// USA: func_ov023_021f57c4
extern "C" ARM int func_ov023_021f57c4(void* arg0) {
    struct Struct_0201c1c8* var0 = (struct Struct_0201c1c8*)arg0;
    data_ov023_021fff08.unknown_c_->unknown_100_.unknown_0_0_ = ((Script::Parameter*)var0)->ToInt();
    data_ov023_021fff08.unknown_c_->unknown_100_.unknown_1_4_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var0 + 8)))->ToInt();
    data_ov023_021fff08.unknown_c_->unknown_100_.unknown_2_0_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var0 + 0x10)))->ToInt();
    return 1;
}
