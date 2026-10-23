#include <globaldefs.h>

extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);
extern "C" void func_ov031_02223720(int, int, int, int);
extern unsigned char data_ov031_02290cc0;
extern short data_ov031_022490d2;
extern short data_ov031_022490d4;
extern short data_ov031_022490d6;
extern short data_ov031_022490d8;

// USA: func_ov031_02232ce8
extern "C" ARM void func_ov031_02232ce8(void) {
    unsigned char var0 = data_ov031_02290cc0;
    if (var0 < 4) {
        int var1 = var0 * 8;
        unsigned short var2 = *(unsigned short*)((char*)&data_ov031_022490d2 + var1);
        unsigned short var3 = *(unsigned short*)((char*)&data_ov031_022490d6 + var1);
        unsigned short var4 = *(unsigned short*)((char*)&data_ov031_022490d4 + var1);
        unsigned short var5 = *(unsigned short*)((char*)&data_ov031_022490d8 + var1);
        func_ov031_022237dc(var2, var3, var4, var5);
    } else {
        int var6 = var0 * 8;
        unsigned short var7 = *(unsigned short*)((char*)&data_ov031_022490d2 + var6);
        unsigned short var8 = *(unsigned short*)((char*)&data_ov031_022490d6 + var6);
        unsigned short var9 = *(unsigned short*)((char*)&data_ov031_022490d4 + var6);
        func_ov031_02223720(0, var7, var8, var9);
    }
}
