#include <globaldefs.h>

struct Substruct020687cc {
    int unk[2];
    unsigned int lo : 26;
    unsigned int flag : 1;
    unsigned int hi : 5;
};

struct Holder020687cc {
    char pad[0x18];
    struct Substruct020687cc* substruct;
};

// USA: func_020687cc
extern "C" ARM int func_020687cc(int unused, struct Holder020687cc* holder) {
    struct Substruct020687cc* p = holder->substruct;
    if (p != NULL) {
        return p->flag == 0;
    }
    return 0;
}
