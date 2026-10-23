#include <globaldefs.h>

struct RecordState02209b58 { unsigned char padding[0x454]; unsigned char handshakeEnabled; unsigned char status; };
struct RecordSession02209b58 { unsigned char padding[0xc]; RecordState02209b58* state; };
struct RecordHeader02209b58 { unsigned char type; unsigned char major; unsigned char minor; unsigned char lengthHigh; unsigned char lengthLow; };

extern "C" int func_ov031_02203500(unsigned int*, void*);
extern "C" int func_ov031_02209840(void*, int, void*);
extern "C" void func_ov031_022098ac(void*, int, int);
extern "C" void func_ov031_022035e0(int, RecordSession02209b58*);
extern "C" void func_ov031_02208ab0(RecordState02209b58*, void*);
extern "C" void func_ov031_022098d8(RecordState02209b58*, void*);
extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_02209b58
extern "C" ARM int func_ov031_02209b58(RecordSession02209b58* session) {
    RecordState02209b58* state = session->state;
    unsigned int length;
    RecordHeader02209b58* record;
    while (1) {
        record = (RecordHeader02209b58*)func_ov031_02203500(&length, session);
        if (length == 0) { state->status = 9; return state->status; }
        if (length >= 5) break;
    }
    if (record->type == 0x80) {
        if (state->handshakeEnabled != 0 && state->status == 0) {
            length = record->major;
            func_ov031_022035e0(2, session);
            unsigned char* data = (unsigned char*)data_ov031_0224c994(length);
            if (!data) { state->status = 9; return state->status; }
            if (func_ov031_02209840(data, length, session) != 0 || data[0] != 1) {
                state->status = 9;
            } else {
                func_ov031_02208ab0(state, data + 1);
            }
            func_ov031_022098ac(state, (int)data, length);
            data_ov031_0224c9c0(data);
        } else { state->status = 9; }
    } else {
        length = (record->lengthHigh << 8) + record->lengthLow + 5;
        if (length > 0x4805) { state->status = 9; return state->status; }
        void* data = data_ov031_0224c994(length);
        if (!data) { state->status = 9; return state->status; }
        if (func_ov031_02209840(data, length, session) != 0) {
            data_ov031_0224c9c0(data);
            state->status = 9;
            return state->status;
        }
        func_ov031_022098d8(state, data);
    }
    return state->status;
}
