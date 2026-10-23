#include <globaldefs.h>

struct OctetLimit_0222e224 { unsigned char digits[4]; };
struct State_0222e224 {
    int field0;
    void* field4;
    unsigned char digits[12];
};

extern OctetLimit_0222e224 data_ov031_02248ee0;
extern State_0222e224* data_ov031_02290c98;

extern "C" void func_ov031_022366d8(unsigned char* src3, unsigned char* out4);
extern "C" void func_ov031_02227520(int* a, int* b);
extern "C" int func_ov031_0221b258(unsigned char* p);

// USA: func_ov031_0222e224
extern "C" ARM int func_ov031_0222e224(void) {
    OctetLimit_0222e224 limit = data_ov031_02248ee0;
    int mode;
    unsigned char addr[4];
    unsigned char* octet;
    int j;
    int off;
    unsigned char* max;
    int i;
    State_0222e224* state;

    state = data_ov031_02290c98;
    i = 0;
    off = 0;
    do {
        octet = state->digits + off;
        if (*octet != ' ') {
            j = 0;
            max = limit.digits;
            do {
                if (octet[j] > *max) return 0;
                if (octet[j] < *max) break;
                j++;
                max++;
            } while (j < 3);
        }
        i++;
        off += 3;
    } while (i < 4);

    func_ov031_022366d8(state->digits, addr);

    func_ov031_02227520(&mode, NULL);
    if (mode == 1) {
        int seenZero = 0;
        unsigned char* p = addr;
        int k = 0;
        do {
            int bit = 0;
            do {
                if (seenZero) {
                    if (*p & (1 << (7 - bit))) return 0;
                } else if (!(*p & (1 << (7 - bit)))) {
                    seenZero = 1;
                }
                bit++;
            } while (bit < 8);
            k++;
            p++;
        } while (k < 4);
        return 1;
    }

    return func_ov031_0221b258(addr) != 0;
}
