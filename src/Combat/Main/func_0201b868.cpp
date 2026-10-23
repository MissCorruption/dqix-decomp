#include <globaldefs.h>

extern unsigned short data_020e6ea8[];

// USA: func_0201b868
extern "C" ARM int func_0201b868(void* arg0, int arg1) {
    unsigned short var0 = (unsigned short)arg1;
    int var1;
    if (var0 >= 0x4e20 && var0 <= 0x752f) return 1;
    for (var1 = 0; data_020e6ea8[var1] != 0; var1++) {
        if (var0 == data_020e6ea8[var1]) return 1;
    }
    return 0;
}
