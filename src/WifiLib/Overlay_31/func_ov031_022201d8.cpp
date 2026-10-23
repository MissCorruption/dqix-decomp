#include <globaldefs.h>


// USA: func_ov031_022201d8
extern "C" THUMB unsigned char* func_ov031_022201d8(unsigned char* arg0, unsigned int* arg1, unsigned int* arg2) {
    unsigned short var0 = *(unsigned short*)(arg0 + 0);
    unsigned int var1 = 0;
    *arg1 = (unsigned short)((unsigned char)(var0 >> 8) | ((var0 << 8) & 0xff00));

    unsigned short var2 = *(unsigned short*)(arg0 + 2);
    unsigned int var3 = (unsigned short)((unsigned char)(var2 >> 8) | ((var2 << 8) & 0xff00));
    *arg2 = var3;

    unsigned char* var4 = arg0 + 6 + var3;
    unsigned char* var5 = arg0;
    if (var5 < var4) {
        do {
            var1 += *var5++;
        } while (var5 < var4);
    }
    unsigned short var6 = *(unsigned short*)var4;
    unsigned short var7 = (unsigned short)((unsigned char)(var6 >> 8) | ((var6 << 8) & 0xff00));
    if ((unsigned short)var1 != var7)
        return 0;
    return arg0 + 6;
}
