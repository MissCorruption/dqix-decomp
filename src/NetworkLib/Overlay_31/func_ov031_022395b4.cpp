#include <globaldefs.h>

struct Event022395b4 {
    unsigned short field_0x0;
    unsigned short error;
    unsigned char field_0x4[4];
    unsigned short type;
    unsigned char field_0xa[6];
    unsigned short aid;
};

struct SlotState022395b4 {
    unsigned char field_0x0[0x4c];
    int (*eventCallback)(Event022395b4* event);
    unsigned short field_0x50;
    unsigned short participantMask;
};

struct SlotHolder022395b4 {
    void (*report)(int, const char*, ...);
    SlotState022395b4* slot;
};

extern SlotHolder022395b4 data_ov031_02290d18 __attribute__((aligned(4)));
extern const char data_ov031_0224c34c[];
extern const char data_ov031_0224c378[];
extern const char data_ov031_0224c3a4[];
void SetField54IfTagNot9Or10_ov031_022393e4(int v);
extern "C" void func_ov031_02239368(int);
extern "C" int func_ov031_02239724(void);
int IssueBattleCommandSlot13_020d559c(int a0, unsigned int a1);

// USA: func_ov031_022395b4
extern "C" ARM void func_ov031_022395b4(Event022395b4* event) {
    unsigned short mask = 1 << event->aid;
    if (event->error) {
        SetField54IfTagNot9Or10_ov031_022393e4(event->error);
        func_ov031_02239368(9);
        return;
    }
    unsigned short type = event->type;
    switch (type) {
    case 7:
        if (data_ov031_02290d18.report) data_ov031_02290d18.report(0x8000000, data_ov031_0224c34c, event->aid);
        if (data_ov031_02290d18.slot->eventCallback && data_ov031_02290d18.slot->eventCallback(event) == 0) {
            int result = IssueBattleCommandSlot13_020d559c(0, event->aid);
            if (result == 2) return;
            SetField54IfTagNot9Or10_ov031_022393e4(result);
            func_ov031_02239368(9);
            return;
        }
        data_ov031_02290d18.slot->participantMask |= mask;
        break;
    case 9:
        if (data_ov031_02290d18.report) data_ov031_02290d18.report(0x8000000, data_ov031_0224c378, event->aid);
        data_ov031_02290d18.slot->participantMask &= ~mask;
        break;
    case 0:
        if (func_ov031_02239724() == 0) func_ov031_02239368(9);
        break;
    case 2:
        break;
    default:
        if (data_ov031_02290d18.report) data_ov031_02290d18.report(0x8000000, data_ov031_0224c3a4, type);
    }
}
