#include <globaldefs.h>

extern "C" unsigned char* func_ov031_02203fdc(void* arg0, int arg1, int* arg2);
extern "C" ARM void* func_ov031_02204168(int arg0, unsigned int arg1, void* arg2, unsigned int arg3);
extern "C" int func_ov031_02203a84(int arg0, int arg1);

extern unsigned char data_ov031_0224ced6[];

struct Struct_ov031_0224c980_13 {
    unsigned char unknown_0_[0x34];
    unsigned int unknown_34_;
};
extern Struct_ov031_0224c980_13 data_ov031_0224c980;

// USA: func_ov031_0220419c
extern "C" ARM int func_ov031_0220419c(void) {
    int var0;
    unsigned char* var1 = data_ov031_0224ced6;
    unsigned char* var2 = func_ov031_02203fdc(var1, 1, &var0);
    if (data_ov031_0224c980.unknown_34_ != 0) {
        var2[0] = 0x32;
        var2[1] = 4;
        var2[2] = (unsigned char)((unsigned short)(data_ov031_0224c980.unknown_34_ >> 16) >> 8);
        var2[3] = (unsigned char)(data_ov031_0224c980.unknown_34_ >> 16);
        var2[4] = (unsigned char)((unsigned short)data_ov031_0224c980.unknown_34_ >> 8);
        var2[5] = (unsigned char)data_ov031_0224c980.unknown_34_;
        var2 += 6;
    }
    var2[0] = 0xff;
    unsigned char* var3 = (unsigned char*)func_ov031_02204168(0, 0x12c, var2 + 1, (unsigned int)((var2 + 1) - var1));
    func_ov031_02203a84((int)var1, (int)(var3 - var1));
    return var0;
}
