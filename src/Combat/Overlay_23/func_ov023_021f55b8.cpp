#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov023_021fff08 {
    char unknown_0_[0x2];
    unsigned char unknown_2_;
    char unknown_3_[0x9];
    short* unknown_c_;
};
extern struct Struct_ov023_021fff08 data_ov023_021fff08;

// USA: func_ov023_021f55b8
extern "C" ARM int func_ov023_021f55b8(struct Struct_0201c1c8* arg0) {
    if (data_ov023_021fff08.unknown_2_ != 0) {
        *data_ov023_021fff08.unknown_c_ = (short)((Script::Parameter*)arg0)->ToInt();
    }
    return 1;
}
