#include <globaldefs.h>

struct NibbleStruct {
    int unk0;
    int unk4;
    unsigned int nibble : 4;
};

// USA: func_020de34c
extern "C" ARM int func_020de34c(struct NibbleStruct* s, int lo, int hi) {
    return lo <= (int)s->nibble && (int)s->nibble <= hi;
}
