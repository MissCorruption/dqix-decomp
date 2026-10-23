#include <globaldefs.h>

struct Struct_0203c0cc;
extern "C" void func_0203c0f0(struct Struct_0203c0cc* arg0);
extern "C" void func_ov000_0216fe9c(void* arg0);
extern "C" void func_ov000_021710ac(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02174b14(void* arg0);
extern int data_ov000_02183ff0;

struct Struct_ov000_02174a50 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

// USA: func_ov000_02174a50
extern "C" ARM void func_ov000_02174a50(void* arg0, int arg1) {
    int var0 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (!var0) {
        return;
    }
    struct Struct_ov000_02174a50* var1 = (struct Struct_ov000_02174a50*)((char*)arg0 + 0x958);
    for (int var2 = 0; var2 < 4; var2++) {
        signed char var3 = *(signed char*)((char*)arg0 + var2 + 0x6c);
        struct Struct_ov000_02174a50* var4 = var1 + var3;
        if (arg1 == var4->unknown_4c_) {
            func_0203c0f0((struct Struct_0203c0cc*)((char*)var4 + 0x50));
#if defined(jpn)
            enum { Enum_ov000_02174a50_104 = 0x88 };
#else
            enum { Enum_ov000_02174a50_104 = 0x68 };
#endif
            func_0203c0f0((struct Struct_0203c0cc*)((char*)var4 + Enum_ov000_02174a50_104));
            func_ov000_0216fe9c((char*)var4 + 0x8);
            func_ov000_021710ac(var4, -1, 0);
            data_ov000_02183ff0 -= 1;
            func_ov000_02174b14(arg0);
            if (data_ov000_02183ff0 <= 0) {
                data_ov000_02183ff0 = 1;
            }
            return;
        }
    }
}
