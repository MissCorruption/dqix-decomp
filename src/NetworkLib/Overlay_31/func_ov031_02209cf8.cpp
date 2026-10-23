#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct RandomState09cf8 { unsigned long long value; unsigned long long multiplier; unsigned long long increment; };
extern RandomState09cf8 data_ov031_0224c9e8;
extern unsigned char data_ov031_0224e3b0;
extern unsigned char data_ov031_0224e528[20];
extern "C" void func_ov031_02209e28(void*, int);
extern "C" void func_ov031_0220b8a0(unsigned int*);
extern "C" void func_ov031_0220b8f4(void*, void*, int);
extern "C" void func_ov031_0220ba14(void*, void*);

// USA: func_ov031_02209cf8
extern "C" ARM void func_ov031_02209cf8(unsigned char* destination, int length) {
    unsigned int sum;
    unsigned char digest[20];
    unsigned int context[23];
    if (data_ov031_0224e3b0 == 0) {
        data_ov031_0224c9e8.value = data_ov031_0224c9e8.multiplier * data_ov031_0224c9e8.value + data_ov031_0224c9e8.increment;
        sum = data_ov031_0224c9e8.value >> 32;
        func_ov031_02209e28(&sum, 4);
    }
    int written = 0;
    int digestIndex = 20;
    if (length <= 0) return;
    do {
            if (digestIndex == 20) {
                func_ov031_0220b8a0(context);
                int interruptState = DisableIRQInterrupts();
                func_ov031_0220b8f4(context, data_ov031_0224e528, 20);
                func_ov031_0220ba14(context, digest);
                unsigned char* seedByte = data_ov031_0224e528 + sizeof(data_ov031_0224e528) - 1;
                unsigned char* digestByte;
                int byteIndex;
                unsigned int total;
                unsigned int carry = 1;
                byteIndex = 19;
                digestByte = digest + 19;
                do {
                    total = *seedByte + *digestByte-- + carry;
                    *seedByte-- = total;
                    carry = total >> 8;
                } while (--byteIndex >= 0);
                sum = total;
                SetIRQInterruptState(interruptState);
                digestIndex = 0;
            }
            unsigned char value = digest[digestIndex++];
            if (value != 0) destination[written++] = value;
    } while (written < length);
}
