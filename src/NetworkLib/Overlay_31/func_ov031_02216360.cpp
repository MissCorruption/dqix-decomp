#include <globaldefs.h>
#include <System/Timing.h>
#include <System/Memory.h>

struct ScanEntry02216360 {
    int valid;
    unsigned short strength;
    unsigned char networkData[0x20];
    unsigned char name[10];
    char padding_30[0x1a];
    unsigned char secret[0x20];
    unsigned char padding_6a;
    unsigned char role;
    unsigned char flags;
    char padding_6d[11];
};
struct ScanOutput02216360 {
    unsigned char networkData[0x20];
    unsigned char secret[0x20];
    int role;
    unsigned char name[10];
};
struct ScanState02216360 {
    ScanOutput02216360* output;
    unsigned long long started;
    ScanEntry02216360 entries[16];
    int selected;
    int callbackArgument;
};
struct ScanRuntime02216360 {
    ScanState02216360* scan;
    void* driver;
    int phase;
};
extern ScanRuntime02216360 data_ov031_0224e5dc;
extern "C" int func_ov031_02215fd8(void*, int, int, int);
extern "C" int func_ov031_022160b0(int);
extern "C" int func_ov031_02216178(int);
extern "C" int func_ov031_0221624c(char*);
extern "C" int func_ov031_02216070(int);
int IsPrintableRun10_02216710(unsigned char*);
void SetTag2_02216744();
void SetTag4_02216758();
void SetTag7_0221676c();
void SetTag9_02216780();
void SetTag11_02216794();

// USA: func_ov031_02216360
extern "C" ARM int func_ov031_02216360() {
    if (data_ov031_0224e5dc.driver == 0 || data_ov031_0224e5dc.scan == 0) return 3;
    int index;
    unsigned int strength;
    int result = 1;
    switch (data_ov031_0224e5dc.phase) {
    case 0:
        data_ov031_0224e5dc.phase = 1;
        if (func_ov031_02215fd8(data_ov031_0224e5dc.driver, (int)SetTag2_02216744, 0, data_ov031_0224e5dc.scan->callbackArgument))
            data_ov031_0224e5dc.phase = 11;
        break;
    case 2:
        data_ov031_0224e5dc.phase = 3;
        if (func_ov031_022160b0((int)SetTag4_02216758) == 0) {
            if (data_ov031_0224e5dc.scan->started == 0) {
                data_ov031_0224e5dc.scan->started = GetCurrentTimestamp();
            }
        } else {
            data_ov031_0224e5dc.phase = 10;
        }
        break;
    case 4: {
        unsigned long long now = GetCurrentTimestamp();
        unsigned long long started = data_ov031_0224e5dc.scan->started;
        unsigned long long elapsed = now - started;
        if (elapsed * 64 / 0x82ea < 3000) data_ov031_0224e5dc.phase = 2;
        else data_ov031_0224e5dc.phase = 5;
        break;
    }
    case 5:
        data_ov031_0224e5dc.phase = 6;
        if (func_ov031_02216178((int)SetTag7_0221676c)) data_ov031_0224e5dc.phase = 10;
        break;
    case 7: {
        if (func_ov031_0221624c((char*)data_ov031_0224e5dc.scan->entries)) data_ov031_0224e5dc.phase = 10;
        index = 0;
        data_ov031_0224e5dc.scan->selected = -1;
        strength = 0;
        unsigned int entryOffset = 0;
        do {
            ScanEntry02216360* entry = (ScanEntry02216360*)((unsigned char*)data_ov031_0224e5dc.scan +
                entryOffset + offsetof(ScanState02216360, entries));
            if (entry->valid && (entry->flags & 2) && entry->role <= 3 &&
                IsPrintableRun10_02216710((unsigned char*)data_ov031_0224e5dc.scan +
                    offsetof(ScanState02216360, entries) + offsetof(ScanEntry02216360, name) + entryOffset)) {
                entry = (ScanEntry02216360*)((unsigned char*)data_ov031_0224e5dc.scan +
                    entryOffset + offsetof(ScanState02216360, entries));
                if (entry->strength >= strength) {
                    data_ov031_0224e5dc.scan->selected = index;
                    entry = (ScanEntry02216360*)((unsigned char*)data_ov031_0224e5dc.scan +
                        entryOffset + offsetof(ScanState02216360, entries));
                    strength = entry->strength;
                }
            }
            index++;
            entryOffset += sizeof(ScanEntry02216360);
        } while (index < 16);
        data_ov031_0224e5dc.phase = 8;
        if (func_ov031_02216070((int)SetTag9_02216780)) data_ov031_0224e5dc.phase = 11;
        break;
    }
    case 9: {
        int selected = data_ov031_0224e5dc.scan->selected;
        if (selected < 0) {
            data_ov031_0224e5dc.phase = 11;
            break;
        }
        VectorizedInvertedMemcpy(data_ov031_0224e5dc.scan->entries[selected].networkData, data_ov031_0224e5dc.scan->output->networkData, 0x20);
        VectorizedInvertedMemcpy(data_ov031_0224e5dc.scan->entries[data_ov031_0224e5dc.scan->selected].secret, data_ov031_0224e5dc.scan->output->secret, 0x20);
        data_ov031_0224e5dc.scan->output->role = data_ov031_0224e5dc.scan->entries[data_ov031_0224e5dc.scan->selected].role;
        VectorizedInvertedMemcpy(data_ov031_0224e5dc.scan->entries[data_ov031_0224e5dc.scan->selected].name, data_ov031_0224e5dc.scan->output->name, 10);
        result = 2;
        break;
    }
    case 10:
        data_ov031_0224e5dc.phase = 8;
        if (func_ov031_02216070((int)SetTag11_02216794)) data_ov031_0224e5dc.phase = 11;
        break;
    case 11: result = 3; break;
    }
    return result;
}
