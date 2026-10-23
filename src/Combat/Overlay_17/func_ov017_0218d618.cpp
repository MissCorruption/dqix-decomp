#include <globaldefs.h>

struct Struct_ov017_0218d618 { char unknown_0_[0x10]; int unknown_10_; };
struct Struct_ov017_0218d618_2 { char unknown_0_[
#if defined(jpn)
0x41e8
#else
0x4498
#endif
]; Struct_ov017_0218d618* unknown_4498_; };

// USA: func_ov017_0218d618
extern "C" ARM int func_ov017_0218d618(Struct_ov017_0218d618_2* arg0) {
    Struct_ov017_0218d618* var0 = arg0->unknown_4498_;
    if (var0 == NULL) goto ret0;
    if (var0->unknown_10_ == 2) goto ret1;
ret0:
    return 0;
ret1:
    return 1;
}
