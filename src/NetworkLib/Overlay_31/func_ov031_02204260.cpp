#include <globaldefs.h>

extern "C" unsigned char* func_ov031_02203fdc(void* arg0, int arg1, int* arg2);
extern "C" ARM void* func_ov031_02204168(int arg0, unsigned int arg1, void* arg2, unsigned int arg3);
extern "C" int func_ov031_02203a84(int arg0, int arg1);

extern unsigned char data_ov031_0224ced6[];

struct Struct_ov031_0224c980_14 {
    unsigned char unknown_0_[0x20];
    unsigned int unknown_20_;
    unsigned char unknown_24_[0x34 - 0x24];
    unsigned int unknown_34_;
};
extern Struct_ov031_0224c980_14 data_ov031_0224c980;

// USA: func_ov031_02204260
extern "C" ARM int func_ov031_02204260(int arg0) {
    int var0;
    unsigned char* var1 = data_ov031_0224ced6;
    unsigned char* var2 = func_ov031_02203fdc(var1, 3, &var0);
    if (arg0 == 0) {
        var2[0] = 0x32;
        var2[1] = 4;
        var2[2] = (unsigned char)((unsigned short)(data_ov031_0224c980.unknown_34_ >> 16) >> 8);
        var2[3] = (unsigned char)(data_ov031_0224c980.unknown_34_ >> 16);
        var2[4] = (unsigned char)((unsigned short)data_ov031_0224c980.unknown_34_ >> 8);
        var2[5] = (unsigned char)data_ov031_0224c980.unknown_34_;
        var2[6] = 0x36;
        var2[7] = 4;
        var2[8] = (unsigned char)((unsigned short)(data_ov031_0224c980.unknown_20_ >> 16) >> 8);
        var2[9] = (unsigned char)(data_ov031_0224c980.unknown_20_ >> 16);
        var2[0xa] = (unsigned char)((unsigned short)data_ov031_0224c980.unknown_20_ >> 8);
        var2[0xb] = (unsigned char)data_ov031_0224c980.unknown_20_;
        var2 += 0xc;
    }
    var2[0] = 0xff;
    unsigned char* var3 = (unsigned char*)func_ov031_02204168(0, 0x12c, var2 + 1, (unsigned int)((var2 + 1) - var1));
    func_ov031_02203a84((int)var1, (int)(var3 - var1));
    return var0;
}
