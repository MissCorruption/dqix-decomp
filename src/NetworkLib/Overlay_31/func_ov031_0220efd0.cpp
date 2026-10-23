#include <globaldefs.h>

extern "C" int func_ov031_0220d60c(void);
extern "C" int func_020d5bfc(int arg0, void* arg1, void* arg2, unsigned int arg3);
extern "C" int func_ov031_0220f2cc(void);

extern "C" {
    int func_ov031_0220f2e0(void* arg0);
    int func_ov031_0220f330(void* arg0);
}

extern int data_ov031_0224e54c;

// USA: func_ov031_0220efd0
extern "C" ARM void func_ov031_0220efd0(void) {
    int var0 = func_ov031_0220d60c();
    if (var0 == 0) return;
    if (*(int*)((char*)var0 + 0x2260) != 9) return;
    if (*(unsigned char*)((char*)var0 + 0x226b) == 1) return;
    if (func_ov031_0220f2e0(&data_ov031_0224e54c) == 0) return;
    int var1 = func_020d5bfc((int)func_ov031_0220f2cc,
        (void*)((char*)var0 + 0x2144), (void*)((char*)var0 + 0xf00), 0);
    if (var1 == 2) return;
    func_ov031_0220f330(&data_ov031_0224e54c);
}
