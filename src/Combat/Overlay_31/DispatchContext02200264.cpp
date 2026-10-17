#include <globaldefs.h>

struct Struct0224c980_02200264 {
    char pad[0x24];
    unsigned int field0x24;
};

extern "C" Struct0224c980_02200264 _ZZ18GetGlobal_02201364vE1s;

void CycleCurrentPriorityContexts();
void SleepCurrentContext(unsigned int);

// USA: func_ov031_02200264
ARM void DispatchContext02200264(void) {
    unsigned int v = _ZZ18GetGlobal_02201364vE1s.field0x24;
    if (v == 0) {
        CycleCurrentPriorityContexts();
    } else {
        SleepCurrentContext(v);
    }
}
