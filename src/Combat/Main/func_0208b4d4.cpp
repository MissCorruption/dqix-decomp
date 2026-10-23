#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" unsigned short* func_02012fe4(void);

struct Struct_0208b088_2 {
    char unknown_0_[0xac];
    int unknown_ac_;   // 0xac
    int unknown_b0_;       // 0xb0
};

// USA: func_0208b4d4
extern "C" ARM int func_0208b4d4(struct Struct_0208b088_2* arg0) {
    unsigned short var0;
    (int)GetGameResources();
    var0 = *func_02012fe4();
    if (var0 != arg0->unknown_ac_) {
        arg0->unknown_b0_ = 0;
        arg0->unknown_ac_ = -1;
    }
    return arg0->unknown_b0_;
}
