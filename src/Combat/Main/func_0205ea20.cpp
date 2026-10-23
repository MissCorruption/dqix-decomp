#include <globaldefs.h>
#if defined(jpn)
#define data_020f057c data_020f05e4
#define data_ov031_02257180 data_ov031_02257960
#define data_020f0594 data_020f05fc
#endif

extern int data_020f057c;
extern int data_020f0594;
extern int data_ov031_02257180;

extern "C" void func_0203a974(void* arg0, int arg1, void* arg2, int arg3, int arg4);

extern "C" int func_0203aa64(void* arg0);
extern "C" int func_0203aa98(void* arg0, int arg1);

// USA: func_0205ea20
extern "C" ARM void func_0205ea20(void* arg0, int arg1) {
    char* var0 = (char*)arg0;
    int var1 = 0;
    if (arg1 == 0x64) {
        var1 = (int)&data_020f057c;
    } else if (arg1 == 0x65) {
        var1 = (int)&data_020f0594;
    }
    if (var1 != 0) {
        func_0203a974(var0, var1, &data_ov031_02257180, 0x4b000, 0);
    }
    *(int*)(var0 + 0xb0) = func_0203aa64(var0);
    *(short*)(var0 + 0xb4) = (short)arg1;
    func_0203aa98(var0, arg1);
    int var2 = func_0203aa64(var0);
    *(int*)(var0 + 0xc0) = var2;
    *(int*)(var0 + 0xb8) = var2;
}
