#include <globaldefs.h>
#include "NitroSDK/Timing.h"

struct BootpPacket02204368 {
    unsigned char type;
    unsigned char unknown1[3];
    unsigned short transactionHigh;
    unsigned short transactionLow;
    unsigned char unknown8[8];
    unsigned char assignedAddress[4];
    unsigned char unknown14[8];
    unsigned short hardwareAddress[3];
    unsigned char unknown22[0xec - 0x22];
    unsigned char cookie[4];
    unsigned char options[1];
};
struct DhcpState02204368 {
    unsigned char unknown0[0x1c];
    unsigned int subnetMask;
    unsigned int serverAddress;
    unsigned char unknown24[8];
    unsigned int routerAddress;
    unsigned char unknown30[4];
    unsigned int offerAddress;
    unsigned char unknown38[0x10];
    int (*progress)();
    unsigned int leaseSeconds;
    unsigned int acknowledgementAddress;
    unsigned char unknown54[0xc];
    unsigned int dnsPrimary;
    unsigned int dnsSecondary;
};
extern DhcpState02204368 data_ov031_0224c980;
extern unsigned short data_ov031_0224ce68[3];
extern "C" int func_ov031_02203b1c();
void DispatchContext02200264();
extern "C" int func_ov031_0220357c(unsigned int *);
int CompareThreeU16sDiffer02200824(unsigned short *, unsigned short *);
extern "C" void func_ov031_02203670(int);
#define READ_NETWORK32_02204368(p) (((unsigned int)(unsigned short)(((p)[0] << 8) | (p)[1]) << 16) | (unsigned short)(((p)[2] << 8) | (p)[3]))
#define SWAP_NETWORK16_02204368(v) ((unsigned short)(((v) >> 8) | ((v) << 8)))

// USA: func_ov031_02204368
extern "C" ARM int func_ov031_02204368(int transaction, int retry) {
    int timeout = (retry + 1) * 15;
    int start = (int)(GetCurrentTimestamp() >> 16);
    int result = 0;
    while (data_ov031_0224c980.progress() != 0 && result == 0 && (int)(GetCurrentTimestamp() >> 16) - start < timeout) {
        if (!func_ov031_02203b1c()) {
            DispatchContext02200264();
            continue;
        }
        unsigned int length;
        unsigned char* buffer = (unsigned char*)func_ov031_0220357c(&length);
        BootpPacket02204368* packet = (BootpPacket02204368*)buffer;
        if (length > 0xf0 && packet->type == 2 &&
            transaction == ((unsigned int)SWAP_NETWORK16_02204368(packet->transactionHigh) << 16 |
                             SWAP_NETWORK16_02204368(packet->transactionLow)) &&
            !CompareThreeU16sDiffer02200824(packet->hardwareAddress, data_ov031_0224ce68)) {
            unsigned char* end;
            unsigned int address = READ_NETWORK32_02204368(packet->assignedAddress);
            end = buffer + length;
            result = 3;
            unsigned char* option = buffer + 0xec;
            if (*option++ == 0x63 && *option++ == 0x82 && *option++ == 0x53 && *option++ == 0x63) {
                int type;
                while (option < end && (type = *option++) != 0xff) {
                    if (type == 0) continue;
                    switch (type) {
                    case 1:
                        data_ov031_0224c980.subnetMask = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 3:
                        data_ov031_0224c980.routerAddress = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 6:
                        if (option[0] < 8) data_ov031_0224c980.dnsSecondary = 0;
                        else data_ov031_0224c980.dnsSecondary = READ_NETWORK32_02204368(option + 5);
                        data_ov031_0224c980.dnsPrimary = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 51:
                        data_ov031_0224c980.leaseSeconds = READ_NETWORK32_02204368(option + 1);
                        break;
                    case 53:
                        switch (option[1]) {
                        case 2:
                            result = 1;
                            data_ov031_0224c980.offerAddress = address;
                            break;
                        case 5:
                            result = 2;
                            data_ov031_0224c980.acknowledgementAddress = address;
                            break;
                        default:
                            break;
                        }
                        break;
                    case 54:
                        data_ov031_0224c980.serverAddress = READ_NETWORK32_02204368(option + 1);
                        break;
                    default:
                        break;
                    }
                    option += option[0] + 1;
                }
            }
        }
        func_ov031_02203670(length);
    }
    return result;
}
