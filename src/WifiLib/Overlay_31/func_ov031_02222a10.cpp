#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct WorkerState02222a10 {
    unsigned char field_0[0xc];
    void (*completion)(void*);
    int stopping;
    unsigned char field_14[0x1c];
    void* result;
    int field_34;
    int state;
    unsigned char field_3c[0x28];
    int running;
    unsigned char field_68[0xc];
    int pending;
};

extern WorkerState02222a10 data_ov031_0224f670;
extern ProcessorContext data_ov031_0224f71c;
bool IsContextInactive(ProcessorContext* context);
extern "C" void func_ov031_02222af0();
extern "C" int func_ov031_0221fb38();

// USA: func_ov031_02222a10
extern "C" THUMB int func_ov031_02222a10() {
    int state;
    if (data_ov031_0224f670.running) {
        state = data_ov031_0224f670.state;
        data_ov031_0224f670.stopping = 1;
        while (data_ov031_0224f670.state >= 1 && data_ov031_0224f670.state <= 5) {
            SleepCurrentContext(100);
        }
        SleepCurrentContext(500);
        if (!IsContextInactive(&data_ov031_0224f71c)) {
            do {
                MarkContextReadyAndSwitch(&data_ov031_0224f71c);
                AwaitContextCompletion(&data_ov031_0224f71c);
            } while (!IsContextInactive(&data_ov031_0224f71c));
        }
        if (data_ov031_0224f670.result) {
            data_ov031_0224f670.completion(data_ov031_0224f670.result);
            data_ov031_0224f670.result = 0;
        }
        data_ov031_0224f670.running = 0;
        if (state != data_ov031_0224f670.state) func_ov031_02222af0();
    }
    if (data_ov031_0224f670.pending > 0) {
        int result = func_ov031_0221fb38();
        data_ov031_0224f670.pending = 0;
        return result;
    }
    return -10;
}
