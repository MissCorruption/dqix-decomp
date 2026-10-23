#include <globaldefs.h>

struct ThreeWords_1e80c {
    int field0;
    int field4;
    int field8;
};

struct Owner_1e80c {
    char unk[0x70];
    struct ThreeWords_1e80c field70;
};

// USA: func_0201e80c
extern "C" ARM struct ThreeWords_1e80c func_0201e80c(struct Owner_1e80c* src) {
    return src->field70;
}
