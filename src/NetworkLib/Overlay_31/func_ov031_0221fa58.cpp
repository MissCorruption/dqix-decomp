#include <globaldefs.h>

struct QueueState {
    char pad[0x68];
    int writeIndex;
    int readIndex;
};
extern QueueState data_ov031_0224f670;
extern void* data_ov031_0224f6f4[4];

// USA: func_ov031_0221fa58
extern "C" THUMB void func_ov031_0221fa58(int event, int) {
    QueueState* state = &data_ov031_0224f670;
    int index = state->writeIndex;
    int next = index + 1;
    int read = state->readIndex;
    if (next != read && index != read + 3) {
        data_ov031_0224f6f4[index] = (void*)event;
        state->writeIndex = next;
        if (next >= 4) state->writeIndex = 0;
    }
}
