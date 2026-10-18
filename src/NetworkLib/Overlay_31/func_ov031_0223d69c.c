#include <globaldefs.h>

typedef struct CoordinatePair_0223d69c {
    unsigned short x;
    unsigned short y;
} CoordinatePair_0223d69c;

typedef struct InputCoordinates_0223d69c {
    char padding[0x28];
    CoordinatePair_0223d69c primary;
    CoordinatePair_0223d69c secondary;
    char padding30[8];
    unsigned char selected:1;
    unsigned char otherFlags:7;
} InputCoordinates_0223d69c;

typedef struct InputState_0223d69c {
    int field0;
    InputCoordinates_0223d69c* inner;
} InputState_0223d69c;

extern InputState_0223d69c data_ov031_02290d40;

static inline int IsFolded_0223d69c(void) {
    return (*(unsigned short*)0x027fffa8 & 0x8000) >> 15;
}

// USA: func_ov031_0223d69c
ARM int func_ov031_0223d69c(CoordinatePair_0223d69c* pair) {
    InputCoordinates_0223d69c* input;
    if (IsFolded_0223d69c()) return 0;
    input = data_ov031_02290d40.inner;
    if (!input->selected) {
        *pair = input->secondary;
        return 0;
    }
    *pair = input->primary;
    return 1;
}
