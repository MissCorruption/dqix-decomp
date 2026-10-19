#include <globaldefs.h>
#include <System/Interrupts.h>
#include <System/Memory.h>

enum APCState0221f6dc {
    APC_STATE_NONE,
    APC_STATE_INIT,
    APC_STATE_TO_INIT,
    APC_STATE_IDLE,
    APC_STATE_TO_IDLE,
    APC_STATE_SEARCH,
    APC_STATE_TO_SEARCH,
    APC_STATE_CONNECT,
    APC_STATE_TO_CONNECT,
    APC_STATE_END
};

struct ConnectionState0221f6dc {
    unsigned char padding_0[0x2c];
    APCState0221f6dc stage;
    unsigned char padding_30[0x14];
    unsigned char* address;
    unsigned char* payload;
    unsigned char padding_4c[0x14];
    unsigned long options;
};

extern ConnectionState0221f6dc data_ov031_0224f670;
extern unsigned char data_ov031_0224fb28[6];
extern unsigned char data_ov031_02245fb0[8];
extern unsigned char data_ov031_0224fb60[32];
extern unsigned char data_ov031_02245fb8[32];
int DispatchOnZeroPair_0220cdd4(int, int, int);
extern "C" int func_ov031_0221f630();

// USA: func_ov031_0221f6dc
extern "C" THUMB int func_ov031_0221f6dc(unsigned char* address, unsigned char* payload, int length, unsigned long options) {
    int i;
    unsigned long irqState;
    irqState = DisableIRQInterrupts();
    data_ov031_0224f670.options = options;
    data_ov031_0224f670.address = data_ov031_0224fb28;
    if (address != 0) {
        for (i = 0; i < 6; i++) {
            data_ov031_0224fb28[i] = *address++;
        }
    } else {
        VectorizedMemset(data_ov031_0224fb28, 255, 6);
        data_ov031_0224f670.address = data_ov031_02245fb0;
    }
    data_ov031_0224f670.payload = data_ov031_0224fb60;
    if (payload != 0 && length > 0 && length < 32) {
        for (i = 0; i < length; i++) {
            data_ov031_0224fb60[i] = *payload++;
        }
        for (; i < 32; i++) {
            data_ov031_0224fb60[i] = 0;
        }
    } else {
        VectorizedMemset(data_ov031_0224fb60, 255, 32);
        data_ov031_0224f670.payload = data_ov031_02245fb8;
    }
    if (data_ov031_0224f670.stage == APC_STATE_IDLE) {
        if (DispatchOnZeroPair_0220cdd4(
                (int)data_ov031_0224fb28, (int)data_ov031_0224f670.payload,
                data_ov031_0224f670.options) == 3) {
            data_ov031_0224f670.stage = APC_STATE_TO_SEARCH;
            SetIRQInterruptState(irqState);
            return 1;
        }
    } else if (func_ov031_0221f630() == 1) {
        data_ov031_0224f670.stage = APC_STATE_TO_SEARCH;
        SetIRQInterruptState(irqState);
        return 1;
    }
    SetIRQInterruptState(irqState);
    return 0;
}
