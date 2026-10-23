#include <globaldefs.h>

extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);
extern unsigned char data_ov031_02290c50;
extern short data_ov031_02248d9e;
extern short data_ov031_02248da0;
extern short data_ov031_02248da2;
extern short data_ov031_02248da4;

// USA: func_ov031_022284ec
extern "C" ARM void func_ov031_022284ec(int arg0) {
    if (arg0 == 1 || arg0 == 3) {
        return;
    }
    data_ov031_02290c50 ^= 1;
    func_ov031_02236878(8);
    int var0 = data_ov031_02290c50 * 8;
    unsigned short var1 = *(unsigned short*)((char*)&data_ov031_02248d9e + var0);
    unsigned short var2 = *(unsigned short*)((char*)&data_ov031_02248da2 + var0);
    unsigned short var3 = *(unsigned short*)((char*)&data_ov031_02248da0 + var0);
    unsigned short var4 = *(unsigned short*)((char*)&data_ov031_02248da4 + var0);
    func_ov031_022237dc(var1, var2, var3, var4);
}
