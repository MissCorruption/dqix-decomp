#include <globaldefs.h>

struct Struct_020bbf84_2;
extern "C" void* func_020bd444(void);
extern "C" void* func_020bd648(int arg0);
extern "C" void func_020bbf4c(int arg0, int arg1);
extern "C" void func_020bbf6c(int arg0, void* arg1);
extern "C" int func_020bbf84(int arg0, struct Struct_020bbf84_2* arg1, unsigned int arg2);

struct Struct_020be6c4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};

// USA: func_020be6c4
extern "C" ARM int func_020be6c4(struct Struct_020bbf84_2* arg0) {
    func_020bd444();
    int var0 = 0;
    int var1 = 0;
    do {
        struct Struct_020be6c4* var2 = (struct Struct_020be6c4*)func_020bd648(var1);
        if (var2) {
            func_020bbf4c(var1, var2->unknown_0_);
            func_020bbf6c(var1, (void*)(unsigned int)var2->unknown_2_);
            if (var2->unknown_4_ != 0 && arg0 != 0) {
                int var3 = var0;
                if (var3 < var2->unknown_0_) {
                    do {
                        if (func_020bbf84(var1, arg0, var2->unknown_4_) == 0) return 0;
                        var3++;
                    } while (var3 < var2->unknown_0_);
                }
            }
        }
        var1++;
    } while (var1 < 0x20);
    return 1;
}
