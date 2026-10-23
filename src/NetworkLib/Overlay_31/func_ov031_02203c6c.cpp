#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Memory.h"

struct NetworkMaintenanceState {
    unsigned char padding0[0xc];
    int status;
    unsigned int flags;
    unsigned char padding14[0x18];
    unsigned int probeAddress;
    unsigned char padding30[0xc];
    void (*tick)();
    void (*release)(void*);
    int stop;
    int (*connected)();
    unsigned char padding4c[0xd0];
    int capacityA;
    void* bufferA;
    unsigned char padding124[4];
    int capacityB;
    void* bufferB;
};
struct TimedNetworkEntry {
    int active;
    unsigned char padding4[6];
    unsigned short timestamp;
};
struct TimedNetworkAllocation {
    int field0;
    unsigned short active;
    unsigned char padding6[0x26];
    int timestamp;
    int field30;
    void* allocation;
};
struct MaintenanceConnection {
    ProcessorContext* context;
    int pending;
    unsigned char state;
    unsigned char padding9[7];
    int timestamp;
    int field14;
    unsigned short currentPort, savedPort;
    unsigned int currentAddress, savedAddress;
};
extern NetworkMaintenanceState data_ov031_0224c980;
extern unsigned char data_ov031_0224ca60[0x64];
extern unsigned char data_ov031_0224d02c[], data_ov031_0224ceac[];
extern TimedNetworkEntry data_ov031_0224ca00[8];
extern TimedNetworkAllocation data_ov031_0224cca8[8];
extern "C" void func_ov031_02203164(int);
extern "C" void func_ov031_02203178();
extern "C" int func_ov031_02203bcc();
extern "C" int func_ov031_022046b8();
extern "C" int func_ov031_02204710(unsigned int*, int);
extern "C" int func_ov031_02200160(int);
extern "C" void func_ov031_02200ccc(unsigned int);
extern "C" void func_ov031_0220aa98(int);
extern "C" void func_ov031_0220480c();

// USA: func_ov031_02203c6c
extern "C" ARM void func_ov031_02203c6c() {
    int i;
    int stage;
    int timestamp;
    TimedNetworkEntry* entry;
    int watchdog;
    int first;
    data_ov031_0224c980.stop = 0;
    VectorizedMemset(data_ov031_0224ca60, 0, 0x64);
    data_ov031_0224c980.capacityA = 0x180;
    data_ov031_0224c980.bufferA = data_ov031_0224d02c;
    data_ov031_0224c980.capacityB = 0x180;
    data_ov031_0224c980.bufferB = data_ov031_0224ceac;
    func_ov031_02203164((int)data_ov031_0224ca60);
    watchdog = 1;
    first = 1;
    unsigned int retry = 1;
    data_ov031_0224c980.status = 1;
    stage = 0;
    while (1) {
        SleepCurrentContext(1000);
        if (data_ov031_0224c980.stop) break;
        timestamp = (int)(GetCurrentTimestamp() >> 16);
        if (data_ov031_0224c980.connected()) {
            if (--retry == 0) {
                if (data_ov031_0224c980.flags & 1) {
                    if (stage == 0) {
                        func_ov031_02203bcc();
                        stage = 1;
                    }
                } else {
                    switch (stage) {
                    case 0:
                        if (first) {
                            data_ov031_0224c980.status = 2;
                            first = 0;
                        }
                        if (!func_ov031_022046b8() || func_ov031_02204710(&retry, 0) == 0) {
                            func_ov031_02203bcc();
                            stage = 3;
                        } else {
                            stage = 1;
                        }
                        break;
                    case 1:
                        if (func_ov031_02204710(&retry, 1) == 0 && retry < 60) stage = 2;
                        break;
                    case 2:
                        if (func_ov031_02204710(&retry, 2)) stage = 1;
                        else if (retry < 60) {
                            func_ov031_02200160(3);
                            watchdog = 1;
                            retry = 1;
                            stage = 0;
                        }
                        break;
                    case 3:
                        break;
                    }
                }
            }
        } else {
            func_ov031_02200160(1);
            watchdog = 1;
            retry = 1;
            stage = 0;
        }
        entry = data_ov031_0224ca00;
        i = 0;
        do {
            if (entry->active && (short)(timestamp - entry->timestamp) > 957) entry->active = 0;
            entry++;
        } while (++i < 8);
        if (data_ov031_0224c980.probeAddress && --watchdog == 0) {
            func_ov031_02200ccc(data_ov031_0224c980.probeAddress);
            watchdog = 105;
        }
        ProcessorContext* context = data_02111304.firstContext;
        if (context) do {
            MaintenanceConnection* connection = (MaintenanceConnection*)context->unknown_A4;
            if (connection && connection->context) {
                int state = connection->state;
                if (state == 3 && timestamp - connection->timestamp > 39) {
                    connection->state = 1;
                    connection->currentPort = connection->savedPort;
                    connection->currentAddress = connection->savedAddress;
                } else if (state == 2 && timestamp - connection->timestamp > 39) {
                    if (connection->pending == 1) {
                        connection->state = 0;
                        connection->pending = 0;
                        MarkContextReadyAndSwitch(connection->context);
                    }
                } else if (state != 4 && connection->pending == 2) {
                    connection->pending = 0;
                    MarkContextReadyAndSwitch(connection->context);
                }
            }
            context = context->pNext;
        } while (context);
        TimedNetworkAllocation* allocation = data_ov031_0224cca8;
        int allocationIndex = 0;
        do {
            if (allocation->active && timestamp - allocation->timestamp > 239) {
                data_ov031_0224c980.release(allocation->allocation);
                allocation->active = 0;
            }
            allocation++;
        } while (++allocationIndex < 8);
        func_ov031_0220aa98(timestamp);
        if (data_ov031_0224c980.tick) data_ov031_0224c980.tick();
    }
    if (!(data_ov031_0224c980.flags & 1) && stage != 3) func_ov031_0220480c();
    func_ov031_02203178();
}
