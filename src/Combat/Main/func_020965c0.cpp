#include <globaldefs.h>

#if defined(jpn)
#define func_020965c0 func_jpn_02098210
#endif

struct FindTableIndexOrFFData { unsigned char pad[0xac]; unsigned char tbl[0xcc]; };

// USA: func_020965c0
extern "C" ARM unsigned char func_020965c0(struct FindTableIndexOrFFData *s, unsigned int val) {
    int i;
    if (val < 0xcc) {
        for (i = 0; i < 0xcc; i++) {
            if (s->tbl[i] == val) {
                return i;
            }
        }
    }
    return 0xff;
}
