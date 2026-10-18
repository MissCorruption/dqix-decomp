#include <globaldefs.h>

// MSL_C ansi_fp.c __two_exp.
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

extern const char data_020eef74[]; // "542101086242752217003726400434970855712890625"
extern const char data_020eefa4[]; // "11102230246251565404236316680908203125"
extern const char data_020eefcc[]; // "23283064365386962890625"
extern const char data_020eefe4[]; // "152587890625"
extern const char data_020eeff4[]; // "390625"
extern const char data_020eeffc[]; // "78125"
extern const char data_020ef004[]; // "15625"
extern const char data_020ef00c[]; // "3125"
extern const char data_020ef014[]; // "625"
extern const char data_020ef018[]; // "125"
extern const char data_020ef01c[]; // "25"
extern const char data_020ef020[]; // "5"
extern const char data_020ef024[]; // "1"
extern const char data_020ef028[]; // "2"
extern const char data_020ef02c[]; // "4"
extern const char data_020ef030[]; // "8"
extern const char data_020ef034[]; // "16"
extern const char data_020ef038[]; // "32"
extern const char data_020ef03c[]; // "64"
extern const char data_020ef040[]; // "128"
extern const char data_020ef044[]; // "256"

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
