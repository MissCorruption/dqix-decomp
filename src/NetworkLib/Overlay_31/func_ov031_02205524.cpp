#include <globaldefs.h>
#include <System/Mutex.h>

struct SizeInputStruct022054fc {
    unsigned short stackSize;
    unsigned char field_2, priority;
};
struct OffsetPair02205620 { int size, offset; };
struct ReceiveContext02205524 {
    char padding[0xe0];
    Mutex mutex;
    int bytesConsumed;
    unsigned short capacity;
    signed char countingDisabled;
    unsigned char field_ff;
    char padding_100[0xa];
    unsigned short tag;
    int resetPosition, resetSize;
    char storage[1];
};
struct StreamContext02205524;
struct SendContext02205524 {
    char padding[0xe0];
    Mutex mutex;
    OffsetPair02205620 buffer;
    int field_100;
    int resetPosition, resetSize;
    StreamContext02205524* owner;
    char storage[1];
};
struct StreamContext02205524 {
    char padding[0x3c];
    OffsetPair02205620 receiveBuffer;
    int field_44;
    OffsetPair02205620 sendBuffer, receiveExtra, sendExtra;
    int field_60;
    ReceiveContext02205524* receiver;
    SendContext02205524* sender;
    char padding_6c[6];
    signed char nonblocking, encoding;
    char padding_74[12];
    char workspace[1];
};
struct StreamParams02205524 {
    signed char encoding, nonblocking;
    unsigned short receiveSize, receiveCapacity, sendSize;
    unsigned short receiveExtra, sendExtra, sendBuffer, tag;
    SizeInputStruct022054fc receiveTask, sendTask;
};
extern StreamContext02205524* data_ov031_0224e1cc;
int InitContextFromParams_02205648(int, void*, SizeInputStruct022054fc*);
int SetupOffsetPairAndSize_02205620(int, OffsetPair02205620*, int);

// USA: func_ov031_02205524
extern "C" ARM int func_ov031_02205524(StreamContext02205524* self, StreamParams02205524* params) {
    self->encoding = params->encoding;
    self->nonblocking = params->nonblocking;
    int cursor = (int)self->workspace;
    if (params->receiveSize) {
        ReceiveContext02205524* receiver = (ReceiveContext02205524*)cursor;
        self->receiver = receiver;
        receiver->capacity = params->receiveCapacity;
        cursor = InitContextFromParams_02205648((int)receiver->storage, receiver, &params->receiveTask);
        cursor = SetupOffsetPairAndSize_02205620(cursor, &self->receiveBuffer, params->receiveSize);
        cursor = SetupOffsetPairAndSize_02205620(cursor, &self->receiveExtra, params->receiveExtra);
        receiver->tag = params->tag;
        receiver->resetSize = 0;
        receiver->resetPosition = 0;
    }
    if (params->sendSize) {
        SendContext02205524* sender = (SendContext02205524*)cursor;
        self->sender = sender;
        sender->owner = self;
        cursor = InitContextFromParams_02205648((int)sender->storage, sender, &params->sendTask);
        cursor = SetupOffsetPairAndSize_02205620(cursor, &self->sendBuffer, params->sendSize);
        cursor = SetupOffsetPairAndSize_02205620(cursor, &self->sendExtra, params->sendExtra);
        cursor = SetupOffsetPairAndSize_02205620(cursor, &sender->buffer, params->sendBuffer);
        sender->resetSize = 0;
        sender->resetPosition = 0;
    } else self->sender = data_ov031_0224e1cc->sender;
    return cursor;
}
