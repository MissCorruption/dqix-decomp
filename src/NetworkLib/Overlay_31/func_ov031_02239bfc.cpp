#include <globaldefs.h>

struct WhState02239bfc {
    unsigned char field_0x0[0x58];
    unsigned long rand;
    unsigned short channel;
    unsigned short channelBusyRatio;
};

struct WhHolder02239bfc {
    void (*report)(int, const char*, ...);
    WhState02239bfc* state;
};

extern WhHolder02239bfc data_ov031_02290d18 __attribute__((aligned(4)));

extern "C" void CopyFrom027ffcf4_020c99ac(void* mac);
void SetField54IfTagNot9Or10_ov031_022393e4(int v);
extern "C" void func_ov031_02239368(int);
extern "C" unsigned short func_ov031_02239cd4(unsigned short);

static inline unsigned long OS_GetVBlankCount() { return *(volatile unsigned long*)0x027ffc3c; }

// USA: func_ov031_02239bfc
extern "C" ARM int func_ov031_02239bfc(void) {
    unsigned short mac[3];
    CopyFrom027ffcf4_020c99ac(mac);
    data_ov031_02290d18.state->rand = mac[0] + OS_GetVBlankCount() + mac[1] + mac[2];
    data_ov031_02290d18.state->rand = data_ov031_02290d18.state->rand * 69069 + 12345;
    data_ov031_02290d18.state->channel = 0;
    data_ov031_02290d18.state->channelBusyRatio = 101;
    func_ov031_02239368(3);
    unsigned short result = func_ov031_02239cd4(1);
    if (result == 0x18) {
        SetField54IfTagNot9Or10_ov031_022393e4(0x18);
        func_ov031_02239368(9);
        return 0;
    }
    if (result == 2) return 1;
    SetField54IfTagNot9Or10_ov031_022393e4(result);
    func_ov031_02239368(9);
    return 0;
}
