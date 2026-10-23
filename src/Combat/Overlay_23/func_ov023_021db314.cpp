#include <globaldefs.h>

struct Struct_ov023_021db314_2 {
    char unknown_0_[2];
    short unknown_2_;
    void* unknown_4_;
};

struct Struct_ov023_021db314 {
    char unknown_0_[1];
    unsigned char unknown_1_;
    char unknown_2_[2];
    void* unknown_4_;
};

extern "C" int func_02005a94(signed char* arg0);
extern "C" int func_ov023_021db564(char* arg0);

// USA: func_ov023_021db314
extern "C" ARM void func_ov023_021db314(void* arg0, short* arg1, short* arg2) {
    struct Struct_ov023_021db314_2* var0 = *(struct Struct_ov023_021db314_2**)((char*)arg0 + 0x8);
    struct Struct_ov023_021db314* var1 = (struct Struct_ov023_021db314*)var0->unknown_4_;
    short var2 = 0;
    short var3 = var0->unknown_2_;

    int var4;
    for (var4 = 0; var4 < var3; var4++, var1 = (struct Struct_ov023_021db314*)((char*)var1 + 8)) {
        if (var1->unknown_1_ != 0 && var1->unknown_4_ != NULL) {
            signed char* var5 = (signed char*)var1->unknown_4_;

            if (*var5 == 'f') {
                arg1[var2] = (short)func_02005a94(var5 + 5);
                var2++;
            } else if (*var5 >= 'A' && *var5 <= 'Z') {
                unsigned short var6 = (unsigned short)func_ov023_021db564((char*)var5);
                if (var6 != 0) {
                    arg1[var2] = var6;
                    var2++;
                }
            }
        }
    }

    *arg2 = var2;
}
