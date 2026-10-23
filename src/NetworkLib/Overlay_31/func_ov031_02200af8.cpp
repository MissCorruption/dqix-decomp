#include <globaldefs.h>

extern "C" ARM void* func_ov031_02200af8(int* arg0);
extern "C" ARM void func_ov031_02202e44(void* arg0, int arg1);
extern "C" ARM void func_ov031_0220186c(void* arg0, int arg1);
extern "C" ARM void func_ov031_02200bb8(void);

// USA: func_ov031_02203008
extern "C" ARM void func_ov031_02203008(void) {
    int var0;
    for (;;) {
        char* var1 = (char*)func_ov031_02200af8(&var0);
        if ((unsigned int)var0 > 0x22) {
            unsigned short var2 = *(unsigned short*)(var1 + 0xc);
            unsigned short var3 = (var2 >> 8) | (var2 << 8);
            switch (var3) {
            case 0x800:
                func_ov031_02202e44(var1 + 0xe, var0 - 0xe);
                break;
            case 0x806:
                func_ov031_0220186c(var1 + 0xe, var0 - 0xe);
                break;
            }
        }
        func_ov031_02200bb8();
    }
}
