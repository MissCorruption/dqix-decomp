#include <globaldefs.h>

extern "C" void func_ov031_022280a0(void);
extern "C" void func_ov031_02223998(int arg0);
extern "C" void func_ov031_0222336c(int, int, int);
extern "C" void *func_ov031_022373b4(int);
extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);
extern "C" void func_ov031_022274c0(int arg0);
extern unsigned char data_ov031_02290c50;
extern short data_ov031_02248d9e;
extern short data_ov031_02248da0;
extern short data_ov031_02248da2;
extern short data_ov031_02248da4;
extern "C" void func_ov031_0222818c(void);

// USA: func_ov031_02228024
extern "C" ARM void func_ov031_02228024(void) {
    func_ov031_022280a0();
    func_ov031_02223998(0);
    func_ov031_0222336c(0x2e, -1, 0);
    func_ov031_022373b4(4);

    int var0 = data_ov031_02290c50 * 8;
    unsigned short var1 = *(unsigned short*)((char*)&data_ov031_02248d9e + var0);
    unsigned short var2 = *(unsigned short*)((char*)&data_ov031_02248da2 + var0);
    unsigned short var3 = *(unsigned short*)((char*)&data_ov031_02248da0 + var0);
    unsigned short var4 = *(unsigned short*)((char*)&data_ov031_02248da4 + var0);
    func_ov031_022237dc(var1, var2, var3, var4);

    func_ov031_022274c0((int)func_ov031_0222818c);
}
