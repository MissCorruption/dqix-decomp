#include <globaldefs.h>
#include <System/Mutex.h>
#include <System/Interrupts.h>

struct StreamState022058f0 {
    char padding[0xe0];
    Mutex mutex;
};
struct Socket022058f0 {
    char padding[0x64];
    StreamState022058f0* state;
    char padding68[8];
    volatile short flags;
    signed char blocking;
    signed char status;
};
int IsNotInList0224e22c_02207180(void*);
extern "C" int func_ov031_02205a38(Socket022058f0*, int, int, int, int, int, int);

enum { RECV_BLOCK = 1 };

// USA: func_ov031_022058f0
extern "C" ARM int func_ov031_022058f0(Socket022058f0* socket, int a, int b, int c, int d, int flags) {
    StreamState022058f0* state;
    int recvFlags;
    int valid;
    signed char status;
    int closed;
    int result;

    if (IsNotInList0224e22c_02207180(socket)) return -28;
    if ((flags & 4) || socket->blocking == 0) {
        if (socket->status == 4) return -28;
        recvFlags = 0;
    } else {
        if (GetProcessorMode() == 0x12) return -28;
        recvFlags = RECV_BLOCK;
    }
    valid = 0;
    if (socket != NULL) valid = (socket->flags & 1) != 0;
    if (!valid) return -39;
    status = socket->status;
    closed = 1;
    if (status != 0 && status != 4) closed = 0;
    if (closed) {
        if (!(socket->flags & 4) || (socket->flags & 8)) return -56;
    }
    state = socket->state;
    if (!(recvFlags & RECV_BLOCK)) {
        if (!TryLockMutex(&state->mutex)) return -6;
    } else {
        LockMutex(&state->mutex);
    }
    result = func_ov031_02205a38(socket, a, b, c, d, recvFlags, flags);
    UnlockMutex(&state->mutex);
    return result;
}
