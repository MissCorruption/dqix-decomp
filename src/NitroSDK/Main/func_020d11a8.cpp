#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

void ResetDMAChannel(int id);
extern "C" int func_020ce7a4(void);
extern "C" void func_020c976c(unsigned int id);
extern "C" void func_020d1294(int arg0, int arg1);
extern "C" void func_020c9be0(void);

// USA: func_020d11a8
extern "C" ARM void func_020d11a8(void) {
    int var0 = 1;
    ResetDMAChannel(0);
    ResetDMAChannel(var0);
    ResetDMAChannel(2);
    ResetDMAChannel(3);

    int var1 = *(volatile unsigned short*)0x27fffa8;
    int var2 = (var1 & 0x8000) >> 15;
    if (var2 != 0) {
        int var3 = func_020ce7a4();
        if (var3 == 4) {
            do {
                func_020c976c(0xa3a47);
                var3 = func_020ce7a4();
            } while (var3 == 4);
        }
        if (var3 == 0) var0 = 0;
    }
    if (var0 != 0) {
        func_020d1294(1, 1);
    }
    func_020c9be0();
}
