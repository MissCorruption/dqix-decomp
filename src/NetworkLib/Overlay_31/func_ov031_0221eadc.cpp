#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"

struct ConnectParams0221eadc {
    int channel;
    unsigned char bssid[0x20];
    int security;
    int keyLength;
    unsigned char key[0x14];
};
struct WepDesc0221eadc {
    unsigned char mode;
    unsigned char keyId;
    unsigned char key[4][0x14];
    unsigned char pad52[0xe];
};
struct BssDesc0221eadc {
    unsigned char pad0[0xa];
    unsigned short ssidLength;
    unsigned char ssid[0x20];
    unsigned char pad2c[0x94];
};
struct EventQueue0221eadc;

#define DEBUG_PRINTF(...) ((void)0)

extern WepDesc0221eadc data_ov031_0224f5c0;
extern EventQueue0221eadc data_ov031_0224f4e0;
extern BssDesc0221eadc data_ov031_0224f500 __attribute__((aligned(32)));
namespace DuplicatePool {
    extern "C" BssDesc0221eadc data_ov031_0224f500;
}
extern "C" ARM void func_ov031_0220eadc(void);
extern "C" int func_ov031_0221f02c(int, unsigned char*, int, unsigned int);
extern "C" ARM int func_020c7ea0(EventQueue0221eadc*, int*, int);
extern "C" int func_ov031_0221efe8(BssDesc0221eadc*, int);
extern "C" void func_ov031_0221e774(ConnectParams0221eadc*, BssDesc0221eadc*);
extern "C" int func_ov031_0221f1e8(BssDesc0221eadc*, WepDesc0221eadc*, int);
extern "C" void func_ov031_0221e798(void*, BssDesc0221eadc*, int);
extern "C" void func_ov031_0221e7bc(ProcessorContext**);

// USA: func_ov031_0221eadc
extern "C" THUMB int func_ov031_0221eadc(ConnectParams0221eadc* params, void* output) {
    int running = 1;
    int result = -1;
    int connected = 0;
    int keyId = 0;
    int mode;
    int retries;
    int i;
    int event;
    Alarm alarm;

    if (params->security == 0) {
        mode = 0x80000;
    } else if (params->security == 1) {
        mode = 0xc0000;
    }
    mode |= 0x30000;
    VectorizedMemset(&data_ov031_0224f5c0, 0, sizeof(WepDesc0221eadc));
    if (params->keyLength == 5) {
        data_ov031_0224f5c0.mode = 1;
    } else if (params->keyLength == 13) {
        data_ov031_0224f5c0.mode = 2;
    } else if (params->keyLength == 16) {
        data_ov031_0224f5c0.mode = 3;
    } else {
        return -1;
    }
    data_ov031_0224f5c0.keyId = keyId;
    VectorizedInvertedMemcpy(params->key, (unsigned char*)&data_ov031_0224f5c0 + (keyId * 0x14 + 2), params->keyLength);
    func_ov031_0220eadc();
    if (!func_ov031_0221f02c(0, params->bssid, params->channel, 0x30bffe)) goto done;
    retries = 0;
    ZeroInitializeAlarm(&alarm);
    SetTimeout(&alarm, 0x003fec42ULL, func_ov031_0221e7bc, (ProcessorContext**)18);
    while (running) {
        func_020c7ea0(&data_ov031_0224f4e0, &event, 1);
        switch (event) {
        case 18:
            if (!connected) running = 0;
            break;
        case 19:
            DEBUG_PRINTF("connect: event 19");
            break;
        case 5:
            if (!connected) {
                CancelAlarm(&alarm);
                if (func_ov031_0221efe8(&data_ov031_0224f500, 1) != 1) {
                    running = 0;
                    break;
                }
                func_ov031_0221e774(params, &data_ov031_0224f500);
                for (i = 0; i < DuplicatePool::data_ov031_0224f500.ssidLength; i++) {
                }
                if (!func_ov031_0221f1e8(&data_ov031_0224f500, &data_ov031_0224f5c0, mode)) {
                    running = 0;
                    break;
                }
                connected = 1;
            }
            break;
        case 10:
            func_ov031_0221e774(params, &data_ov031_0224f500);
            if (!func_ov031_0221f1e8(&data_ov031_0224f500, &data_ov031_0224f5c0, mode)) running = 0;
            break;
        case 12:
            running = 0;
            result = 0;
            break;
        case 13:
            if (++retries < 3) {
                if (!func_ov031_0221f1e8(&data_ov031_0224f500, &data_ov031_0224f5c0, mode)) running = 0;
            } else {
                running = 0;
            }
            break;
        case 4:
        case 8:
            break;
        case 0: case 1: case 2: case 3:
        case 6: case 7: case 9: case 11:
        case 14: case 15: case 16: case 17:
        default:
            running = 0;
            break;
        }
    }
    CancelAlarm(&alarm);
    while (func_020c7ea0(&data_ov031_0224f4e0, &event, 0) == 1) {}
done:
    func_ov031_0221e798(output, &data_ov031_0224f500, result == 0);
    return result;
}
