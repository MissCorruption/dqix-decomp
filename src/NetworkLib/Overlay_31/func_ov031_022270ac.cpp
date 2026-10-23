#include <globaldefs.h>

struct Config022270ac {
    unsigned char type;
    char pad1[7];
    union {
        unsigned int raw;
        struct {
            unsigned int mode : 4;
            unsigned int opts : 28;
        } bits;
    } flags;
};
extern Config022270ac data_ov031_02250c0c;

// USA: func_ov031_022270ac
extern "C" ARM int func_ov031_022270ac(int type, unsigned int flags) {
    data_ov031_02250c0c.type = type;
    data_ov031_02250c0c.flags.raw = flags;

    if (type < 0 || type > 6) return 0;
    if (data_ov031_02250c0c.flags.bits.mode > 1) return 0;
    if (data_ov031_02250c0c.flags.bits.opts & 2) return 0;
    if (type != 0 && (data_ov031_02250c0c.flags.bits.opts & 1)) return 0;
    if (type == 0 && !(data_ov031_02250c0c.flags.bits.opts & 1)) return 0;
    return 1;
}
