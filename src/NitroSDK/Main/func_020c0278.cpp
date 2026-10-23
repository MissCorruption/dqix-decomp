#include <globaldefs.h>

struct State020c0278 {
    char unk0[8];
    int field8;
    int fieldC;
};

// USA: func_020c0278
extern "C" ARM int func_020c0278(struct State020c0278* state) {
    return state->field8 >= state->fieldC;
}
