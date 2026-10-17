#include <globaldefs.h>

extern const unsigned short data_020e69ac[128];
extern const unsigned char data_020e692c[128];

static inline int IsAlpha020055e4(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(data_020e69ac[c] & 0x001);
}

static inline int IsDigit020055e4(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(data_020e69ac[c] & 0x008);
}

static inline int IsSpace020055e4(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(data_020e69ac[c] & 0x100);
}

static inline int ToUpper020055e4(int c) {
    return ((c < 0) || (c >= 128)) ? c : (int)(data_020e692c[c]);
}

enum ScanState020055e4 {
    SCAN_START = 0x01,
    SCAN_CHECK_FOR_ZERO = 0x02,
    SCAN_LEADING_ZERO = 0x04,
    SCAN_NEED_DIGIT = 0x08,
    SCAN_DIGIT_LOOP = 0x10,
    SCAN_FINISHED = 0x20,
    SCAN_FAILURE = 0x40
};

typedef int (*ReadProc020055e4)(void* arg, int c, int action);

// USA: func_020055e4
extern "C" ARM unsigned long func_020055e4(int base, int maxWidth, ReadProc020055e4 readProc, void* readProcArg,
                                           int* charsScanned, int* negative, int* overflow) {
    int scanState = SCAN_START;
    int count = 0;
    int spaces = 0;
    unsigned long value = 0;
    unsigned long valueMax = 0;
    int c;

    *negative = *overflow = 0;

    if (base < 0 || base == 1 || base > 36 || maxWidth < 1)
        scanState = SCAN_FAILURE;
    else
        c = (count++, readProc(readProcArg, 0, 0));

    if (base)
        valueMax = 0xffffffff / base;

    while (count <= maxWidth && c != -1 && !(scanState & (SCAN_FINISHED | SCAN_FAILURE))) {
        switch (scanState) {
            case SCAN_START:
                if (IsSpace020055e4(c)) {
                    c = (count++, readProc(readProcArg, 0, 0));
                    count--;
                    spaces++;
                    break;
                }

                if (c == '+')
                    c = (count++, readProc(readProcArg, 0, 0));
                else if (c == '-') {
                    c = (count++, readProc(readProcArg, 0, 0));
                    *negative = 1;
                }

                scanState = SCAN_CHECK_FOR_ZERO;
                break;

            case SCAN_CHECK_FOR_ZERO:
                if (base == 0 || base == 16) {
                    if (c == '0') {
                        scanState = SCAN_LEADING_ZERO;
                        c = (count++, readProc(readProcArg, 0, 0));
                        break;
                    }
                }

                scanState = SCAN_NEED_DIGIT;
                break;

            case SCAN_LEADING_ZERO:
                if (c == 'X' || c == 'x') {
                    base = 16;
                    scanState = SCAN_NEED_DIGIT;
                    c = (count++, readProc(readProcArg, 0, 0));
                    break;
                }

                if (base == 0)
                    base = 8;

                scanState = SCAN_DIGIT_LOOP;
                break;

            case SCAN_NEED_DIGIT:
            case SCAN_DIGIT_LOOP:
                if (base == 0)
                    base = 10;

                if (!valueMax)
                    valueMax = 0xffffffff / base;

                if (IsDigit020055e4(c)) {
                    if ((c -= '0') >= base) {
                        if (scanState == SCAN_DIGIT_LOOP)
                            scanState = SCAN_FINISHED;
                        else
                            scanState = SCAN_FAILURE;

                        c += '0';
                        break;
                    }
                } else if (!IsAlpha020055e4(c) || (ToUpper020055e4(c) - 'A' + 10) >= base) {
                    if (scanState == SCAN_DIGIT_LOOP)
                        scanState = SCAN_FINISHED;
                    else
                        scanState = SCAN_FAILURE;

                    break;
                } else
                    c = ToUpper020055e4(c) - 'A' + 10;

                if (value > valueMax)
                    *overflow = 1;

                value *= base;

                if (c > (0xffffffff - value))
                    *overflow = 1;

                value += c;

                scanState = SCAN_DIGIT_LOOP;

                c = (count++, readProc(readProcArg, 0, 0));
                break;
        }
    }

    if (!(scanState & (SCAN_LEADING_ZERO | SCAN_DIGIT_LOOP | SCAN_FINISHED))) {
        count = 0;
        value = 0;
        *charsScanned = 0;
    } else {
        count--;
        *charsScanned = count + spaces;
    }

    readProc(readProcArg, c, 1);

    return value;
}
