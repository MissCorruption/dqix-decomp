#include <globaldefs.h>
#include "Combat/NameEntryQueue.h"

// USA: func_ov017_02195550
extern "C" ARM int func_ov017_02195550(unsigned char* arg0) {
    Struct_ov017_02195250_2* var0 = (Struct_ov017_02195250_2*)arg0;
    if (var0->unknown_431e_ != 0) return 1;
    if (var0->unknown_441c_->unknown_0_ != 0) return 1;
    return var0->unknown_42f0_ != 0;
}
