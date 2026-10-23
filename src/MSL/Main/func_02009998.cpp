#include <globaldefs.h>

union Struct_020026b4 {
    struct {
        unsigned char unknown1_0_;
        char unknown_1_;
        short unknown_2_;
        unsigned char unknown_4_;
        unsigned char unknown_5_[32];
    };
    unsigned short unknown_0_[19];
};

extern "C" void func_020098fc(Struct_020026b4* arg0, const char* arg1, short arg2);
extern "C" void func_02009778(Struct_020026b4* arg0, const Struct_020026b4* arg1, const Struct_020026b4* arg2);

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
extern "C" ARM void func_02009998(Struct_020026b4* arg0, long arg1) {
    switch (arg1) {
        case -64:
            func_020098fc(arg0, data_020eef74, -20);
            return;
        case -53:
            func_020098fc(arg0, data_020eefa4, -16);
            return;
        case -32:
            func_020098fc(arg0, data_020eefcc, -10);
            return;
        case -16:
            func_020098fc(arg0, data_020eefe4, -5);
            return;
        case -8:
            func_020098fc(arg0, data_020eeff4, -3);
            return;
        case -7:
            func_020098fc(arg0, data_020eeffc, -3);
            return;
        case -6:
            func_020098fc(arg0, data_020ef004, -2);
            return;
        case -5:
            func_020098fc(arg0, data_020ef00c, -2);
            return;
        case -4:
            func_020098fc(arg0, data_020ef014, -2);
            return;
        case -3:
            func_020098fc(arg0, data_020ef018, -1);
            return;
        case -2:
            func_020098fc(arg0, data_020ef01c, -1);
            return;
        case -1:
            func_020098fc(arg0, data_020ef020, -1);
            return;
        case 0:
            func_020098fc(arg0, data_020ef024, 0);
            return;
        case 1:
            func_020098fc(arg0, data_020ef028, 0);
            return;
        case 2:
            func_020098fc(arg0, data_020ef02c, 0);
            return;
        case 3:
            func_020098fc(arg0, data_020ef030, 0);
            return;
        case 4:
            func_020098fc(arg0, data_020ef034, 1);
            return;
        case 5:
            func_020098fc(arg0, data_020ef038, 1);
            return;
        case 6:
            func_020098fc(arg0, data_020ef03c, 1);
            return;
        case 7:
            func_020098fc(arg0, data_020ef040, 2);
            return;
        case 8:
            func_020098fc(arg0, data_020ef044, 2);
            return;
    }

    {
        Struct_020026b4 var0, var1;

        func_02009998(&var0, ((long)((0x80000000UL & arg1) >> 31) + arg1) >> 1);
        func_02009778(arg0, &var0, &var0);

        if (arg1 & 1) {
            var1 = *arg0;

            if (arg1 > 0) {
                func_020098fc(&var0, data_020ef028, 0);
            } else {
                func_020098fc(&var0, data_020ef020, -1);
            }

            func_02009778(arg0, &var1, &var0);
        }
    }
}
