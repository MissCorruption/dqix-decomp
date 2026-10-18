#include <globaldefs.h>
#include <System/Memory.h>
#include <System/ProcessorContext.h>

struct ReceiveBuffer {
    unsigned char padding[0xf8];
    int consumed;
    unsigned short capacity;
};
struct ReceiveObject {
    unsigned char padding[8];
    unsigned char kind;
    unsigned char padding9[0x64 - 9];
    ReceiveBuffer* buffer;
    unsigned char padding68[8];
    short flags;
    signed char blocking;
    signed char state;
};
struct ReceiveRequest {
    unsigned int field0;
    ReceiveObject* object;
    unsigned char padding[8];
    void* output;
    unsigned int length;
    unsigned short* remotePort;
    unsigned int* remoteAddress;
};
extern "C" const void* func_ov031_0220357c(unsigned int*);
extern "C" void func_ov031_02203670(unsigned int);
extern "C" int func_ov031_02205b48(ReceiveObject*, void*, unsigned int, unsigned short*, unsigned int*);
extern "C" void func_ov031_02205ebc(ReceiveObject*);

// USA: func_ov031_02205d10
extern "C" ARM int func_ov031_02205d10(ReceiveRequest* request) {
    ReceiveObject* object = request->object;
    ReceiveBuffer* buffer = object->buffer;
    unsigned int consumed = buffer->consumed;
    unsigned int length = request->length;
    void* output = request->output;
    unsigned short* remotePort = request->remotePort;
    unsigned int* remoteAddress = request->remoteAddress;
    unsigned int available;
    const void* data;
    for (;;) {
        data = func_ov031_0220357c(&available);
        if (!data || (int)(available - consumed) > 0) break;
        int closed = 1;
        if (object->state != 0 && object->state != 4) closed = 0;
        if (closed && object->kind != 4) {
            data = 0;
            break;
        }
        SleepCurrentContext(10);
    }
    if (object->flags & 128) return -15;
    if (object->state == 4) {
        if (!data) return 0;
        if (length > available) length = available;
        VectorizedInvertedMemcpy(data, output, length);
        func_ov031_02203670(length);
        return length;
    }
    int result;
    if (data) result = func_ov031_02205b48(object, output, length, remotePort, remoteAddress);
    else result = 0;
    if (result <= 0) return result;
    if (buffer->consumed >= buffer->capacity) func_ov031_02205ebc(object);
    return result;
}
