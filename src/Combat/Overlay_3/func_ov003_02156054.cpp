#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

extern int data_ov003_0217f304[];

static inline int inline_ov003_02156054(int arg0) {
    return data_ov003_0217f304[arg0];
}

struct Struct_ov003_02156054 {
    char unknown_0_[0x20];
    int* unknown_20_;
};

// USA: func_ov003_02156054
extern "C" ARM void func_ov003_02156054(struct Struct_ov003_02156054* arg0) {
    unsigned char var0 = 0;
    for (unsigned char var1 = 1; var1 < 7; var1++) {
        arg0->unknown_20_[var0] = var1;
        var0++;
    }
    unsigned char* var2 = (unsigned char*)func_0205ec34();
    for (unsigned char var3 = 0; data_ov003_0217f304[var3] != 0; var3++) {
        int var4 = inline_ov003_02156054(var3);
        if (func_0206dfb0((int)var2, var2 + 0x8c, var4 + 0x113f)) {
            arg0->unknown_20_[var0] = var4;
            var0++;
        }
    }
}
