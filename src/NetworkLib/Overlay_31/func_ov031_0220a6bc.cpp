#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct ReceiveContext0220a6bc {
    unsigned char padding_0x0[0x455]; unsigned char status, retained;
    unsigned char padding_0x457[0x824 - 0x457]; unsigned char* record; unsigned int total, consumed;
};
struct ReceiveSession0220a6bc { unsigned char padding_0x0[0xc]; ReceiveContext0220a6bc* context; unsigned char padding_0x10[0x34]; unsigned int available; };
extern "C" unsigned char* func_ov031_02203500(unsigned int*, void*);
extern unsigned char* (*data_ov031_0224c994)(unsigned int);
extern "C" void func_ov031_022035e0(unsigned int, void*);
extern "C" void func_ov031_022098d8(ReceiveContext0220a6bc*, unsigned char*);

// USA: func_ov031_0220a6bc
extern "C" ARM void func_ov031_0220a6bc(ReceiveSession0220a6bc* session) {
    ReceiveContext0220a6bc* context = session->context;
    unsigned int length;
    if (context->record == NULL) {
        if (session->available < 5) return;
        unsigned char* header = func_ov031_02203500(&length, session);
        length = (header[3] << 8) + header[4] + 5;
        if (length > 0x4805) { context->status = 9; return; }
        context->record = data_ov031_0224c994(length);
        if (context->record == NULL) { context->status = 9; return; }
        context->total = length;
        context->consumed = 0;
        context->retained = 0;
    } else if (session->available == 0) return;
    unsigned char* source = func_ov031_02203500(&length, session);
    unsigned int remaining = context->total - context->consumed;
    int complete;
    if (length >= remaining) { length = remaining; complete = 1; } else complete = 0;
    VectorizedInvertedMemcpy(source, context->record + context->consumed, length);
    func_ov031_022035e0(length, session);
    if (complete) {
        func_ov031_022098d8(context, context->record);
        if (context->retained == 0) context->record = NULL;
        return;
    }
    context->consumed += length;
}
