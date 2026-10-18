#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" int func_02001aec(const void* a, const void* b, unsigned int len);
extern "C" void func_ov031_0223e2c0(int, void*);

typedef void (*NotifyCallback_022379f0)(int);

struct NameSlot_022379f0 {
    char name[6];
    unsigned char inUse;
};

struct SystemState_022379f0 {
    unsigned char reserved0[0x1300];
    NameSlot_022379f0 slots[16];
    NotifyCallback_022379f0 callback;
    unsigned char reserved1[0x814];
    unsigned long long lastTime;
    void* timer;
    unsigned char reserved2[2];
    unsigned char expired;
};

extern SystemState_022379f0* data_ov031_02290d0c;
extern char data_ov031_02249280[];

// USA: func_ov031_022379f0
extern "C" ARM void func_ov031_022379f0(void* arg) {
    unsigned long long now = GetCurrentTimestamp();
    SystemState_022379f0* state = data_ov031_02290d0c;
    int i;
    int used;
    int freeSlot;
    char* name;
    char* entry;

    if (now < state->lastTime + 0x17f898) {
        return;
    }
    freeSlot = 0;
    used = 0;
    i = 0;
    entry = (char*)state;
    name = (char*)state + 0x1300;
    do {
        if (func_02001aec(name, data_ov031_02249280, 6) != 0) {
            if (*(unsigned char*)(entry + 0x1306) != 0) {
                used = 1;
            } else {
                freeSlot = 1;
            }
        }
        i++;
        name += 7;
        entry += 7;
    } while (i < 16);
    if (used && freeSlot) {
        if (state->callback != 0) {
            state->callback(2);
        }
    } else if (used) {
        if (state->callback != 0) {
            state->callback(1);
        }
    } else if (!freeSlot) {
        if (state->callback != 0) {
            state->callback(0);
        }
    }
    data_ov031_02290d0c->timer = 0;
    data_ov031_02290d0c->expired = 1;
    func_ov031_0223e2c0(0, arg);
}
