#include <globaldefs.h>

extern "C" unsigned char* func_ov031_02203fdc(void* buf, int n, int* out);
ARM void* FillRemainder_02204168(int value, unsigned int end, void* dst, unsigned int start);
extern "C" int func_ov031_02203a84(int param0, int param1);

extern unsigned char data_ov031_0224ced6[];

struct StateBlock0224c980_02204260 {
    unsigned char pad0[0x20];
    unsigned int field20;
    unsigned char pad1[0x34 - 0x24];
    unsigned int field34;
};
extern "C" StateBlock0224c980_02204260 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02204260  (semantic: BuildAndDrainHeader_02204260)
extern "C" ARM int func_ov031_02204260(int flag) {
    int outVal;
    unsigned char* buf = data_ov031_0224ced6;
    unsigned char* ip = func_ov031_02203fdc(buf, 3, &outVal);
    if (flag == 0) {
        ip[0] = 0x32;
        ip[1] = 4;
        ip[2] = (unsigned char)((unsigned short)(_ZZ18GetGlobal_02201364vE1s.field34 >> 16) >> 8);
        ip[3] = (unsigned char)(_ZZ18GetGlobal_02201364vE1s.field34 >> 16);
        ip[4] = (unsigned char)((unsigned short)_ZZ18GetGlobal_02201364vE1s.field34 >> 8);
        ip[5] = (unsigned char)_ZZ18GetGlobal_02201364vE1s.field34;
        ip[6] = 0x36;
        ip[7] = 4;
        ip[8] = (unsigned char)((unsigned short)(_ZZ18GetGlobal_02201364vE1s.field20 >> 16) >> 8);
        ip[9] = (unsigned char)(_ZZ18GetGlobal_02201364vE1s.field20 >> 16);
        ip[0xa] = (unsigned char)((unsigned short)_ZZ18GetGlobal_02201364vE1s.field20 >> 8);
        ip[0xb] = (unsigned char)_ZZ18GetGlobal_02201364vE1s.field20;
        ip += 0xc;
    }
    ip[0] = 0xff;
    unsigned char* dst = (unsigned char*)FillRemainder_02204168(0, 0x12c, ip + 1, (unsigned int)((ip + 1) - buf));
    func_ov031_02203a84((int)buf, (int)(dst - buf));
    return outVal;
}
