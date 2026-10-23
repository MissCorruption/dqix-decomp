#include <globaldefs.h>

extern "C" void func_0200edf4(void);
extern "C" void func_020015e8(int arg0);
extern int data_020f2e60;

// USA: func_0200159c
extern "C" ARM void func_0200159c(int arg0) {
    if (*(int*)((char*)&data_020f2e60 + 0xc) == 0) {
        func_0200edf4();
        void (*var0)(void) = *(void (**)(void))((char*)&data_020f2e60 + 0x4);
        if (var0 != 0) {
            var0();
            *(void (**)(void))((char*)&data_020f2e60 + 0x4) = 0;
        }
    }
    func_020015e8(arg0);
}
