#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/Memory.h"
#include "System/ProcessorContext.h"

struct Packet02205ef8 {
    Packet02205ef8* next;
    unsigned short length;
    unsigned short port;
    unsigned int address;
    unsigned char data[1];
};

struct Queue02205ef8 {
    char padding[0xfe];
    signed char peek;
    char paddingff;
    Packet02205ef8* tail;
    Packet02205ef8* volatile head;
    unsigned short queuedBytes;
    char padding10a[2];
    BlockedContextList waiters;
};

struct Socket02205ef8 {
    char padding[0x64];
    Queue02205ef8* queue;
    char padding68[8];
    volatile short flags;
};

struct Allocator02205ef8 {
    char padding[0x1c];
    void (*free)(void*);
};

extern Allocator02205ef8* data_ov031_022496a4;
int IsNotInList0224e22c_02207180(void*);

// USA: func_ov031_02205ef8
extern "C" ARM int func_ov031_02205ef8(Socket02205ef8* socket, void* buffer, int length,
                                       unsigned short* portOut, unsigned int* addressOut, int flags) {
    Queue02205ef8* queue;
    Packet02205ef8* packet;
    int result;
    int irqState;
    queue = socket->queue;
    packet = queue->head;
    irqState = DisableIRQInterrupts();
    packet = queue->head;
    if (packet == NULL) {
        int block = flags & 1;
        do {
            if (!block) {
                result = -6;
                break;
            }
            BlockCurrentContext(&queue->waiters);
            if (!IsNotInList0224e22c_02207180(socket)) {
                int valid = 0;
                if (socket != NULL) valid = (socket->flags & 1) != 0;
                if (valid) {
                    continue;
                }
            }
            result = -56;
            break;
        } while ((packet = queue->head) == NULL);
    }
    if (packet != NULL) {
        if (length > packet->length) {
            length = packet->length;
        }
        VectorizedInvertedMemcpy(packet->data, buffer, length);
        if (portOut != NULL) {
            *portOut = packet->port;
        }
        if (addressOut != NULL) {
            *addressOut = packet->address;
        }
        result = packet->length;
        if (queue->peek == 0) {
            queue->head = packet->next;
            if (packet->next == NULL) {
                queue->tail = NULL;
            }
            data_ov031_022496a4->free(packet);
            queue->queuedBytes -= result;
        }
    }
    SetIRQInterruptState(irqState);
    return result;
}
