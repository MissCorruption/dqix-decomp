#include <globaldefs.h>
#include <System/ProcessorContext.h>

struct TaskState0221fb38 {
    char unknown0[0xc];
    void (*release)(void*);
    char unknown10[0x54 - 0x10];
    void* buffer;
};
extern TaskState0221fb38 data_ov031_0224f670;
extern "C" int func_ov031_0221f7fc();
extern "C" void* func_ov031_0221fa20();

// USA: func_ov031_0221fb38
extern "C" THUMB int func_ov031_0221fb38() {
    int waiting = 1;
    if (func_ov031_0221f7fc() != 0) {
        do {
            SleepCurrentContext(10);
            void* event = func_ov031_0221fa20();
            if (event != NULL) do {
                switch ((unsigned int)event) {
                case 4: case 5: break;
                case 20: waiting = 0; break;
                default: waiting = 0; break;
                }
                event = func_ov031_0221fa20();
            } while (event != NULL);
        } while (waiting != 0);
    }
    if (data_ov031_0224f670.buffer != NULL) {
        data_ov031_0224f670.release(data_ov031_0224f670.buffer);
        data_ov031_0224f670.buffer = NULL;
    }
    return 1;
}
