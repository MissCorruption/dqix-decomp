#include <globaldefs.h>

union decimal {
    struct {
        unsigned char sgn;
        char unused;
        short exp;
        unsigned char length;
        unsigned char text[32];
    };
    unsigned short halfwords[19];
};

extern "C" void func_020098fc(decimal* d, const char* str, short exp);
extern "C" void func_02009778(decimal* result, const decimal* x, const decimal* y);

extern const char data_020eef74[];
extern const char data_020eefa4[];
extern const char data_020eefcc[];
extern const char data_020eefe4[];
extern const char data_020eeff4[];
extern const char data_020eeffc[];
extern const char data_020ef004[];
extern const char data_020ef00c[];
extern const char data_020ef014[];
extern const char data_020ef018[];
extern const char data_020ef01c[];
extern const char data_020ef020[];
extern const char data_020ef024[];
extern const char data_020ef028[];
extern const char data_020ef02c[];
extern const char data_020ef030[];
extern const char data_020ef034[];
extern const char data_020ef038[];
extern const char data_020ef03c[];
extern const char data_020ef040[];
extern const char data_020ef044[];

// USA: func_02009998
extern "C" ARM void func_02009998(decimal* result, long exp) {
    switch (exp) {
        case -64:
            func_020098fc(result, data_020eef74, -20);
            return;
        case -53:
            func_020098fc(result, data_020eefa4, -16);
            return;
        case -32:
            func_020098fc(result, data_020eefcc, -10);
            return;
        case -16:
            func_020098fc(result, data_020eefe4, -5);
            return;
        case -8:
            func_020098fc(result, data_020eeff4, -3);
            return;
        case -7:
            func_020098fc(result, data_020eeffc, -3);
            return;
        case -6:
            func_020098fc(result, data_020ef004, -2);
            return;
        case -5:
            func_020098fc(result, data_020ef00c, -2);
            return;
        case -4:
            func_020098fc(result, data_020ef014, -2);
            return;
        case -3:
            func_020098fc(result, data_020ef018, -1);
            return;
        case -2:
            func_020098fc(result, data_020ef01c, -1);
            return;
        case -1:
            func_020098fc(result, data_020ef020, -1);
            return;
        case 0:
            func_020098fc(result, data_020ef024, 0);
            return;
        case 1:
            func_020098fc(result, data_020ef028, 0);
            return;
        case 2:
            func_020098fc(result, data_020ef02c, 0);
            return;
        case 3:
            func_020098fc(result, data_020ef030, 0);
            return;
        case 4:
            func_020098fc(result, data_020ef034, 1);
            return;
        case 5:
            func_020098fc(result, data_020ef038, 1);
            return;
        case 6:
            func_020098fc(result, data_020ef03c, 1);
            return;
        case 7:
            func_020098fc(result, data_020ef040, 2);
            return;
        case 8:
            func_020098fc(result, data_020ef044, 2);
            return;
    }

    {
        decimal x2, temp;

        func_02009998(&x2, ((long)((0x80000000UL & exp) >> 31) + exp) >> 1);
        func_02009778(result, &x2, &x2);

        if (exp & 1) {
            temp = *result;

            if (exp > 0) {
                func_020098fc(&x2, data_020ef028, 0);
            } else {
                func_020098fc(&x2, data_020ef020, -1);
            }

            func_02009778(result, &temp, &x2);
        }
    }
}
