#include <globaldefs.h>
#include "NitroSDK/Timing.h"

struct TransferChannel {
    unsigned char padding[8];
    unsigned char status;
    unsigned char padding2[0x1f];
    unsigned int sentOffset;
    unsigned short available;
    unsigned short padding3;
    unsigned int acknowledgedOffset;
    int pending;
};

struct TransferRuntime {
    unsigned char padding[0x48];
    int (*isActive)();
};

extern TransferRuntime data_ov031_0224c980;
extern "C" int func_ov031_0220376c(int, int, int, int, int, int);
extern "C" void func_ov031_02200264();

// USA: func_ov031_022037a8
extern "C" ARM unsigned int func_ov031_022037a8(unsigned char* first, unsigned int firstLength, unsigned char* second, unsigned int secondLength, TransferChannel* channel) {
    unsigned int total = 0;
    unsigned int transferred;
    int retry = 0;
    channel->pending = 0;
    int lastProgress = GetCurrentTimestamp() >> 16;
    while (data_ov031_0224c980.isActive() != 0 && firstLength != 0 && channel->status == 4 && (int)(GetCurrentTimestamp() >> 16) - lastProgress < 159) {
        unsigned int initialOffset = channel->sentOffset;
        func_ov031_0220376c((int)first, firstLength, (int)second, secondLength, (int)channel, retry);
        int start = GetCurrentTimestamp() >> 16;
        while (1) {
            func_ov031_02200264();
            if (data_ov031_0224c980.isActive() == 0 || channel->status != 4 || channel->sentOffset == channel->acknowledgedOffset || (int)(GetCurrentTimestamp() >> 16) - start >= 15) break;
            if (retry != 0 && channel->available != 0) break;
        }
        transferred = channel->acknowledgedOffset - initialOffset;
        if (transferred > channel->sentOffset - initialOffset) transferred = 0;
        total += transferred;
        if (transferred != 0) lastProgress = GetCurrentTimestamp() >> 16;
        channel->sentOffset = channel->acknowledgedOffset;
        if (channel->status == 4 && channel->available == 0 && transferred == 0) {
            if (retry == 0) {
                int waitStart = GetCurrentTimestamp() >> 16;
                while (data_ov031_0224c980.isActive() != 0 && (int)(GetCurrentTimestamp() >> 16) - waitStart < 15) {
                    func_ov031_02200264();
                    if (channel->available != 0) break;
                }
                if (channel->available == 0) retry = 1;
            }
        } else {
            retry = 0;
        }
        {
            if (transferred < firstLength) {
                first += transferred;
                firstLength -= transferred;
            } else {
                unsigned int remainder = transferred - firstLength;
                first = second + remainder;
                second = NULL;
                firstLength = secondLength - remainder;
                secondLength = 0;
            }
        }
    }
    return total;
}
