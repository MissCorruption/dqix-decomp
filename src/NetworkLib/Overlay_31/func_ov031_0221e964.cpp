#include <globaldefs.h>
#include "NitroSDK/Timing.h"

struct ScanRecord0221e964 { unsigned char bytes[0xc0]; };
struct ResultEntry0221e964 { unsigned char bytes[0x54]; };
struct Results0221e964 { int count; ResultEntry0221e964 entries[1]; };
struct Allocator0221e964 {
    void* (*allocate)(unsigned int);
    unsigned char pad4[8];
    void (*release)(void*);
};
struct EventQueue0221e964;
extern Allocator0221e964 data_ov031_0224f4c0;
extern EventQueue0221e964 data_ov031_0224f4e0;
extern "C" int func_ov031_0221f02c(int, int, int, unsigned int);
extern "C" ARM int func_020c7ea0(EventQueue0221e964*, int*, int);
extern "C" int func_ov031_0221efe8(ScanRecord0221e964*, int);
extern "C" int func_ov031_0221f11c();
extern "C" void func_ov031_0221e6e8(ScanRecord0221e964*, ResultEntry0221e964*);
extern "C" void func_ov031_0221e7bc(ProcessorContext**);

// USA: func_ov031_0221e964
extern "C" THUMB int func_ov031_0221e964(Results0221e964** output) {
    int result = -1;
    int running = 1;
    int ready = 0;
    int count = 0;
    int attempts = 0;
    if (!data_ov031_0224f4c0.allocate || !data_ov031_0224f4c0.release) return -1;
    ScanRecord0221e964* records = (ScanRecord0221e964*)data_ov031_0224f4c0.allocate(0x3000);
    if (!records) return -1;
    void* allocation = records;
    if (!func_ov031_0221f02c(0, 0, 0, 0x30bffe)) goto release;
    {
        Alarm alarm;
        int event;
        ZeroInitializeAlarm(&alarm);
        SetTimeout(&alarm, 0x003fec42ULL, func_ov031_0221e7bc, (ProcessorContext**)19);
        do {
            func_020c7ea0(&data_ov031_0224f4e0, &event, 1);
            switch (event) {
            case 19:
                if (!ready) {
                    if (attempts) count = func_ov031_0221efe8(records, 64);
                    if (!func_ov031_0221f11c()) goto cancel;
                    ready = 1;
                }
                break;
            case 5:
                if (!ready) {
                    if (attempts < 8) ++attempts;
                    else {
                        count = func_ov031_0221efe8(records, 64);
                        if (!func_ov031_0221f11c()) goto cancel;
                        ready = 1;
                    }
                }
                break;
            case 10:
                running = 0;
                result = 0;
                break;
            case 4:
            case 8:
            case 18:
                break;
            case 0: case 1: case 2: case 3:
            case 6: case 7: case 9:
            case 11: case 12: case 13: case 14: case 15: case 16: case 17:
            default:
                goto cancel;
            }
        } while (running);
        {
            void* resultAllocation;
            if (count) {
                resultAllocation = data_ov031_0224f4c0.allocate((count - 1) * 0x54 + 0x58);
                if (!resultAllocation) goto cancel;
            } else {
                resultAllocation = data_ov031_0224f4c0.allocate(0x58);
                if (!resultAllocation) goto cancel;
            }
            Results0221e964* results = (Results0221e964*)resultAllocation;
            *output = results;
            results->count = count;
            int i = 0;
            if (count > 0) {
            ResultEntry0221e964* entry = results->entries;
            do {
                func_ov031_0221e6e8(records, entry);
                ++i;
                ++records;
                ++entry;
            } while (i < count);
            }
        }
cancel:
        CancelAlarm(&alarm);
        while (func_020c7ea0(&data_ov031_0224f4e0, &event, 0) == 1) {}
    }
release:
    data_ov031_0224f4c0.release(allocation);
    return result;
}
