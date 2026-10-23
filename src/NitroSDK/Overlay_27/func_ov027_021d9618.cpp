#include <globaldefs.h>

extern "C" void* func_020d49c4(int, int);
extern "C" void func_ov027_021d9134(void*, int);

extern void* data_ov027_021e33ec;
extern int data_ov027_021dd920;

#pragma optimize_for_size off

// USA: func_ov027_021d9618
extern "C" ARM void func_ov027_021d9618(int arg0)
{
    unsigned short var0 = 0;
    do
    {
        char* var1 = (char*)data_ov027_021e33ec + var0 * 0x5d4;
        if (*(unsigned char*)(var1 + 0x1d52) != 0)
            *(unsigned short*)(var1 + 0x1d4a) = 0;
        var0++;
    } while (var0 < 16);

    data_ov027_021dd920 = 0;

    unsigned short var2 = 1;
    do
    {
        void* var3 = func_020d49c4(arg0, var2);
        if (var3 != NULL)
        {
            unsigned short var4 = *(unsigned short*)var3;
            if (var4 != 0xffff && var4 != 0)
                func_ov027_021d9134(var3, var2);
        }
        var2++;
    } while (var2 <= 15);
}
