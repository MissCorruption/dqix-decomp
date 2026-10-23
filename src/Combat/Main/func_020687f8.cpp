#include <globaldefs.h>

struct Substruct020687f8 {
    int unk[2];
    unsigned int lo : 26;
    unsigned int flag : 1;
    unsigned int hi : 5;
};

struct Holder020687f8 {
    char pad[0x20];
    struct Substruct020687f8* substruct;
};

// USA: func_020687f8
extern "C" ARM int func_020687f8(int unused, struct Holder020687f8* holder) {
    struct Substruct020687f8* p = holder->substruct;
    if (p != NULL) {
        return p->flag == 0;
    }
    return 0;
}
