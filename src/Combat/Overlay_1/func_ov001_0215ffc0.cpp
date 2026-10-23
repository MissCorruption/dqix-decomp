#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ab20(int);
extern "C" void func_ov017_021d6148(void* arg0, float arg1);

struct Struct_ov001_0215ffc0 { char unknown_0_[0x80]; int unknown_80_, unknown_84_, unknown_88_; };

// USA: func_ov001_0215ffc0
extern "C" ARM int func_ov001_0215ffc0(char* arg0, int arg1) {
    char* var0 = arg0;
    arg0 = arg0 + 8;
    int var1 = func_ov017_021d60f4(var0);
    Struct_ov001_0215ffc0* var2 = (Struct_ov001_0215ffc0*)func_ov001_0215ab20(var1);
    if (var2 == NULL) return 0;
    float var3 = (float)var2->unknown_80_ / 4096.0f;
    float var4 = (float)var2->unknown_84_ / 4096.0f;
    float var5 = (float)var2->unknown_88_ / 4096.0f;
    if (arg1 >= 2) {
        func_ov017_021d6148(arg0, var3);
        arg0 += 8;
    }
    if (arg1 >= 3) {
        func_ov017_021d6148(arg0, var4);
        arg0 += 8;
    }
    if (arg1 >= 4) {
        func_ov017_021d6148(arg0, var5);
    }
    return 1;
}
