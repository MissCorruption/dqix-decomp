#include <globaldefs.h>

struct S_flag40000000_inner {
    char unk[0x14];
    int flags;
};

struct S_flag40000000 {
    char unk[0x138];
    struct S_flag40000000_inner* inner;
};

// USA: func_ov024_021edc50
extern "C" ARM int func_ov024_021edc50(struct S_flag40000000* obj) {
    return (obj->inner->flags & 0x40000000) != 0;
}
