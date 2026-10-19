#include <globaldefs.h>

struct ConnectionContext {
    char field_0x0[4];
    void* (*allocate)(unsigned int size);
    char field_0x8[0x38];
    unsigned char* workMemory;
    char field_0x44[0x10];
    void* allocation;
    char field_0x58[4];
    unsigned char* eventMemory;
    char field_0x60[0x10];
    int mode;
};

extern ConnectionContext data_ov031_0224f670;

extern "C" void func_ov031_0221f9f8();
extern "C" int func_ov031_0221f8d8(void (*callback)(int, int), unsigned char* memory, unsigned int size);
void SleepCurrentContext(unsigned int);
extern "C" int func_ov031_0221fa20();
extern "C" void func_ov031_0221fa58(int event, int);

static inline unsigned long long RoundUp32(unsigned long long value) {
    return (value + 0x1f) & ~0x1fULL;
}

// USA: func_ov031_0221fa94
extern "C" THUMB int func_ov031_0221fa94(int mode) {
    int waiting = 1;
    int result;
    data_ov031_0224f670.mode = mode;
    func_ov031_0221f9f8();
    unsigned int n = mode * 0xd0;
    void* allocation = data_ov031_0224f670.allocate(n + 0x24d0 + mode * 0xc0);
    data_ov031_0224f670.allocation = allocation;
    if (allocation == NULL) {
        return -1;
    }
    unsigned char* memory = (unsigned char*)RoundUp32((unsigned int)allocation);
    data_ov031_0224f670.workMemory = memory;
    data_ov031_0224f670.eventMemory = (unsigned char*)RoundUp32((unsigned int)memory + (n + 0x2490));
    if (func_ov031_0221f8d8(func_ov031_0221fa58, memory, n + 0x2490) == 0) {
        return -2;
    }
    do {
        SleepCurrentContext(10);
        int event = func_ov031_0221fa20();
        while (event != 0) {
            switch (event) {
            case 4:
            case 5:
                break;
            case 6:
                waiting = 0;
                result = 1;
                break;
            default:
                waiting = 0;
                result = -2;
                break;
            }
            event = func_ov031_0221fa20();
        }
    } while (waiting);
    return result;
}
