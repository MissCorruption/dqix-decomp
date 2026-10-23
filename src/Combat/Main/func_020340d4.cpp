#include <globaldefs.h>

struct BitField020340d4 {
    char pad[0xc2];
    unsigned char lo : 7;
    unsigned char bit7 : 1;
};

// USA: func_020340d4
extern "C" ARM int func_020340d4(struct BitField020340d4* p) {
    return p->bit7;
}
