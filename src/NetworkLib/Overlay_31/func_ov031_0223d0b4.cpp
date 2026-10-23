#include <globaldefs.h>

struct Struct_ov031_0223d0b4 {
    unsigned char unknown_0_[0x30];
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
};

extern unsigned char data_ov031_02290d40[];
extern unsigned char data_ov031_02290d48[];

#define STATE0223d0b4 (*(Struct_ov031_0223d0b4**)(data_ov031_02290d40 + 4))

// USA: func_ov031_0223d0b4
extern "C" ARM void func_ov031_0223d0b4(void) {
    Struct_ov031_0223d0b4* var0 = STATE0223d0b4;
    unsigned short var1 = *(volatile unsigned short*)0x4000130;
    unsigned short var2 = *(volatile unsigned short*)0x27fffa8;
    unsigned short var3 = (unsigned short)(((var1 | var2) ^ 0x2fff) & 0x2fff);
    var0->unknown_32_ = (unsigned short)((var0->unknown_30_ ^ var3) & var3);
    STATE0223d0b4->unknown_36_ = (unsigned short)(var0->unknown_30_ & (var0->unknown_30_ ^ var3));
    STATE0223d0b4->unknown_30_ = var3;
    STATE0223d0b4->unknown_34_ = STATE0223d0b4->unknown_32_;

    int var4 = 0;
    unsigned char* var5 = data_ov031_02290d48;
    do {
        unsigned short var6 = (unsigned short)(1 << var4);
        if (!(var3 & var6)) {
            *var5 = 0;
        } else {
            *var5 = *var5 + 1;
            if (*var5 == 0x28) {
                STATE0223d0b4->unknown_34_ |= var6;
            } else if (*var5 == 0x2f) {
                STATE0223d0b4->unknown_34_ |= var6;
                *var5 = 0x28;
            }
        }
        var4++;
        var5++;
    } while (var4 < 14);
}
