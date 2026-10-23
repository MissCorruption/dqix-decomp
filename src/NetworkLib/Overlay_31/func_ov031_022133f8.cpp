#include <globaldefs.h>

extern "C" ARM void* func_ov031_022133f8(unsigned int arg0);

// USA: func_ov031_02214afc
extern "C" ARM int func_ov031_02214afc(int arg0) {
    unsigned char* var0 = (unsigned char*)func_ov031_022133f8(0x10) + 0xd00;
    unsigned char var1;
    unsigned char var2;
    unsigned short var3 = *(unsigned short*)(var0 + 0x16);
    if (var3 == 0) {
        return -1;
    }
    var1 = 0;
    var2 = var1;
    do {
        if (var3 & (1 << var1)) {
            if (var2 == arg0) {
                return (signed char)var1;
            }
            var2++;
        }
        var1++;
    } while (var1 < 13);
    return -1;
}
