#include <globaldefs.h>

#if defined(jpn)
#define func_020965c0 func_jpn_02098210
#endif

struct Struct_02069d08_2 { unsigned char unknown_0_[0xac]; unsigned char unknown_ac_[0xcc]; };

// USA: func_020965c0
extern "C" ARM unsigned char func_020965c0(struct Struct_02069d08_2 *arg0, unsigned int arg1) {
    int var0;
    if (arg1 < 0xcc) {
        for (var0 = 0; var0 < 0xcc; var0++) {
            if (arg0->unknown_ac_[var0] == arg1) {
                return var0;
            }
        }
    }
    return 0xff;
}
