#include <globaldefs.h>
#include <NitroSDK/Mutex.h>

struct SendBuffer02206150 {
    unsigned char padding_0[0xe0];
    Mutex mutex;
};
struct Socket02206150 {
    unsigned char padding_0[0x68];
    SendBuffer02206150* buffer;
    unsigned char padding_6c[4];
    volatile short state;
    signed char block;
    signed char kind;
};
extern "C" int func_ov031_02207180(void* v);
extern "C" int func_ov031_02206264(Socket02206150* self, const unsigned char* source, int length, unsigned short tag, unsigned long user_data, long flags);

// USA: func_ov031_02206150
extern "C" ARM int func_ov031_02206150(Socket02206150* self, const unsigned char* source, int length, unsigned short tag, unsigned long user_data, long flags) {
    SendBuffer02206150* buffer;
    int result;
    int sendFlags;

    if (func_ov031_02207180(self)) return -28;
    {
        int created = 0;
        if (self != NULL) created = (self->state & 1) != 0;
        if (!created) return -39;
    }
    {
        int stream = 1;
        signed char kind = self->kind;
        if (kind != 0 && kind != 4) stream = 0;
        if (stream) {
            if (!(self->state & 4) || (self->state & 8)) return -56;
        }
    }
    buffer = self->buffer;
    if ((flags & 4) || self->block == 0) {
        if (!TryLockMutex(&buffer->mutex)) return -6;
        sendFlags = 0;
    } else {
        LockMutex(&buffer->mutex);
        sendFlags = 1;
    }
    result = func_ov031_02206264(self, source, length, tag, user_data, sendFlags);
    UnlockMutex(&buffer->mutex);
    return result;
}
