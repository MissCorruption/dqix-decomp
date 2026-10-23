#include <globaldefs.h>

extern const unsigned long data_020ee278[256];

extern "C"
{
    unsigned long func_01ff85f0(unsigned char arg0, unsigned long arg1);

    unsigned long func_01ff85b8(const unsigned char* arg0, unsigned long arg1)
    {
        unsigned long var0 = 0xffffffff;
        if (arg0 != NULL)
        {
            for (; arg1 != 0; arg1--)
                var0 = func_01ff85f0(*arg0++, var0);
        }
        return ~var0;
    }

    unsigned long func_01ff85f0(unsigned char arg0, unsigned long arg1)
    {
        return data_020ee278[(arg1 ^ arg0) & 0xff] ^ (arg1 >> 8);
    }

    unsigned long func_01ff860c(const unsigned char* arg0)
    {
        unsigned long var0 = 0xffffffff;
        if (arg0 != NULL)
        {
            for (; *arg0 != '\0'; arg0++)
                var0 = func_01ff85f0(*arg0, var0);
        }
        return ~var0;
    }
}
