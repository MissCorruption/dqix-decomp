#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#define data_ov002_0216c99d data_ov002_0216cff9
#define data_ov002_0216c99e data_ov002_0216cffa
#else
#define RG(u, j) (u)
#endif

struct Struct_0205d0e0_2;
struct Struct_0205d6a0;
struct Struct_0205d81c;
struct Struct_ov002_02156e90 {
    char unknown_0_[0xc4];
    unsigned char unknown_c4_;
};
extern "C" struct Struct_ov002_02156e90 *func_0205d888(struct Struct_0205d0e0_2 *arg0);
extern "C" void *func_0205d81c(struct Struct_0205d81c *arg0, int arg1);
extern "C" void func_0205d6a0(struct Struct_0205d6a0 *arg0, int arg1);
extern "C" void func_0205deb4(struct Struct_0205d81c *arg0, int arg1, int arg2);
extern "C" void func_ov002_02161cf0(void *arg0);
extern "C" void func_ov002_0215b9a4(void *arg0, int arg1, int arg2);
extern "C" const unsigned char data_ov002_0216c99d[];
extern "C" const unsigned char data_ov002_0216c99e[];

// USA: func_ov002_02156e90
extern "C" ARM void func_ov002_02156e90(char *arg0) {
    int var0              = 1;
    struct Struct_ov002_02156e90 *var1 = func_0205d888((struct Struct_0205d0e0_2 *) (arg0 + RG(0xec8, 0xe20)));
    if (var1 != NULL) {
        for (int var2 = 0; var2 < 8; var2++) {
            unsigned char var3 = var1->unknown_c4_;
            unsigned char var4 = data_ov002_0216c99d[var2 * 2];
            if (var4 == var3) {
                var0 = 2;
                break;
            }
            if (var3 >= RG(0x2c, 0x2f) && var3 <= RG(0x2f, 0x32)) {
                var0 = 0;
                for (unsigned char var5 = RG(0x2c, 0x2f); var5 <= RG(0x2f, 0x32); var5++) {
                    if (func_0205d81c((struct Struct_0205d81c *) (arg0 + RG(0xec8, 0xe20)), var5) != NULL) {
                        var0++;
                    }
                }
                break;
            }
        }
    }
    for (int var6 = 0; var6 < var0; var6++) {
        func_0205d6a0((struct Struct_0205d6a0 *) (arg0 + RG(0xec8, 0xe20)), 0);
    }
    var1 = func_0205d888((struct Struct_0205d0e0_2 *) (arg0 + RG(0xec8, 0xe20)));
    if (var1 == NULL) return;
    *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) = var1->unknown_c4_;
    func_ov002_02161cf0(arg0);
    for (int var7 = 0; var7 < 8; var7++) {
        unsigned char var8 = data_ov002_0216c99d[var7 * 2];
        if (var8 == var1->unknown_c4_) {
            unsigned char var9 = data_ov002_0216c99e[var7 * 2];
            func_0205d81c((struct Struct_0205d81c *) (arg0 + RG(0xec8, 0xe20)), var9);
            func_0205deb4((struct Struct_0205d81c *) (arg0 + RG(0xec8, 0xe20)), var9, 0);
            break;
        }
    }
    func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1000 + RG(0xbb8, 0xa80)) & 0xff, 0);
}
