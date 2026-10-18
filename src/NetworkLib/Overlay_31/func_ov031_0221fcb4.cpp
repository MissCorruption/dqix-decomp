#include <globaldefs.h>
#include "System/ProcessorContext.h"

struct EventState0221fcb4 { char field_0x0[0x20]; int active; int cleanup; };
extern EventState0221fcb4 data_ov031_0224f670;
extern "C" int func_ov031_0221f7c4();
extern "C" void* func_ov031_0221fa20();
extern "C" int func_ov031_022077c0();

// USA: func_ov031_0221fcb4
extern "C" THUMB void func_ov031_0221fcb4() {
    bool waiting = true;
    if (data_ov031_0224f670.active != 0) {
        if (func_ov031_0221f7c4() != 0) {
            do {
                SleepCurrentContext(10);
                int event = (int)func_ov031_0221fa20();
                if (event != 0) do {
                    switch (event) {
                    case 4: case 5: break;
                    case 14: waiting = false; break;
                    default: waiting = false; break;
                    }
                    event = (int)func_ov031_0221fa20();
                } while (event != 0);
            } while (waiting != 0);
        }
        data_ov031_0224f670.active = 0;
    }
    if (data_ov031_0224f670.cleanup != 0) {
        data_ov031_0224f670.cleanup = 0;
        func_ov031_022077c0();
    }
}
