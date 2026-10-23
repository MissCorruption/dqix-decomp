#include <globaldefs.h>

struct Struct_020bbf84_2;
struct Struct_020bf484;
typedef void (*Type_020bbf84)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bd6ac(int arg0);
extern "C" void* func_020bda58(struct Struct_020bbf84_2* arg0, unsigned int arg1, Type_020bbf84 arg2, int arg3, int arg4);
extern "C" void func_020bf484(int arg0, void* arg1, struct Struct_020bf484* arg2);
extern "C" void func_020bf1a0(void* arg0);

struct Struct_020beaec {
    unsigned char unknown_0_;
    unsigned char unknown_1_[16];
    unsigned char unknown_11_[7];
};

struct Struct_02110a4c_2 {
    char unknown_0_[0x124];
    unsigned char unknown_124_;
    unsigned char unknown_125_;
    unsigned char unknown_126_[6];
    void* unknown_12c_;
    unsigned int unknown_130_;
    char unknown_134_[0x174 - 0x134];
};

extern struct Struct_02110a4c_2 data_02110a4c[4];

// USA: func_020beaec
extern "C" ARM int func_020beaec(struct Struct_020bbf84_2* arg0)
{
    int var0;
    const struct Struct_020beaec* var1;
    struct Struct_02110a4c_2* var2;
    void* var3;
    unsigned int var4;
    int var5;

    for (var0 = 0; var0 < 4; ++var0) {
        var2 = &data_02110a4c[var0];

        var1 = (const struct Struct_020beaec*)func_020bd6ac(var0);
        if (var1 == NULL)
            continue;

        var2->unknown_124_ = var1->unknown_0_;
        for (var5 = 0; var5 < var1->unknown_0_; var5++) {
            var2->unknown_126_[var5] = var1->unknown_1_[var5];
        }

        if (arg0 != NULL) {
            var4 = 512 * 4 * var2->unknown_124_;
            var3 = func_020bda58(arg0, var4, (Type_020bbf84)func_020bf484, (int)var2, 0);
            if (var3 == NULL)
                return 0;

            func_020bf1a0(var2);

            var2->unknown_12c_ = var3;
            var2->unknown_130_ = var4;
        }
    }

    return 1;
}
