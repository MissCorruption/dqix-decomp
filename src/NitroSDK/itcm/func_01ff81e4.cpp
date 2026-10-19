#include <globaldefs.h>

extern volatile unsigned short data_02111668;

#define REG_IME (*(volatile unsigned short*)0x04000208)

extern "C" void func_01ff8300(void);
extern "C" void func_01ff8218(void);

// USA: func_01ff81e4
extern "C" void func_01ff81e4(void)
{
    while (!data_02111668)
    {
    }

    REG_IME = 0;
    func_01ff8300();
    func_01ff8218();
}
