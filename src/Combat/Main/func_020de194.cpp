#include <globaldefs.h>

extern int (*data_020f2adc[])(unsigned short);

// USA: func_020de194
extern "C" ARM int func_020de194(void* arg0) {
    unsigned int var0 = *(unsigned short*)((char*)arg0 + 0x1c);
    if (var0 >= 0xfffb) {
        var0 = data_020f2adc[0xffff - var0](*(unsigned short*)((char*)arg0 + 0x1a));
    }
    return var0;
}
