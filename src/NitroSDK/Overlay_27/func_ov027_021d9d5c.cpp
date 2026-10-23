#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern unsigned int data_ov027_021dd920;
extern char* data_ov027_021e33ec;

// USA: func_ov027_021d9d5c
extern "C" ARM void func_ov027_021d9d5c(int arg0) {
    if ((data_ov027_021dd920 & (1 << arg0)) == 0) return;
    if (*(unsigned char*)(data_ov027_021e33ec + arg0 * 0x5d4 + 0x1d52) == 0) return;
    char* var0 = data_ov027_021e33ec + arg0 * 0x5d4;
    unsigned short var1 = *(unsigned short*)(var0 + 0x1d4c);
    if (var1 == 0) return;
    unsigned short var2 = *(unsigned short*)(var0 + 0x1d48);
    unsigned short var3 = *(unsigned short*)(var0 + 0x1d4a);
    if (var3 > var2) goto storeB;
    if (var2 <= var3 + 2) {
        *(unsigned short*)(var0 + 0x1d48) = var2 + 1;
        return;
    }
storeB:
    *(unsigned short*)(var0 + 0x1d48) = var3;
}
