#include <globaldefs.h>

extern "C" {
void *_ZN9GameState11GetInstanceEv();
void *func_ov017_0218b5b0();
int *_Z19GetField1c_021a193cPi(void *base);
void *_Z25GetCombatantWithFlag0x100P9GameStatei(void *gameState, int member);
short *_Z19GetField150Ptr0x488P22Field150Holder02052e14(void *member);
extern unsigned char data_ov005_0215cbd4[];
}

// USA: func_ov005_02155544
extern "C" ARM void func_ov005_02155544(char *self) {
    char *slots;
    void *gameState  = _ZN9GameState11GetInstanceEv();
    char *root       = (char *) func_ov017_0218b5b0() + 0x3000;
    int *record      = _Z19GetField1c_021a193cPi(*(void **) (root + 0x708));
    void *member     = _Z25GetCombatantWithFlag0x100P9GameStatei(gameState, *(int *) ((char *) record + 0x4fc));
    short *equipment = _Z19GetField150Ptr0x488P22Field150Holder02052e14(member);
    // The assignment stays in the loop so slots reuses r4. Hoisting it swaps r4 with r5.
    for (int i = 0; i < 8; i++) {
        slots           = self + 0xd90 + 0x2000;
        char *slot      = slots + i * 0x1c;
        *(short *) slot = equipment[data_ov005_0215cbd4[i]];
        slot[2]         = 1;
    }
}
