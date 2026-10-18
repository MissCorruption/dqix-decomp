#include <globaldefs.h>

struct EnabledChannels0220d8f4 {
    char padding[0x2264];
    unsigned int mask;
};
extern EnabledChannels0220d8f4* data_ov031_0224e53c;

// USA: func_ov031_0220d8f4
extern "C" ARM unsigned short func_ov031_0220d8f4(int start) {
    int attempts = 0;
    unsigned int mask = data_ov031_0224e53c->mask;
    int candidate = start;
    do {
        if (mask & (1 << (candidate % 13 + 1))) break;
        attempts++;
        candidate++;
    } while (attempts < 13);
    return (start + attempts) % 13 + 1;
}
