#include <globaldefs.h>

struct Struct_ov031_02205030 { char unknown_0_[0x18]; void* (*unknown_18_)(unsigned int); };
extern Struct_ov031_02205030* data_ov031_022496a4;

struct Struct_ov031_0224e204;
extern "C" void func_020c7de4(Struct_ov031_0224e204* arg0, int arg1, int arg2);
extern Struct_ov031_0224e204 data_ov031_0224e204;

extern "C" void func_ov031_02205174(int arg0);
extern void* data_ov031_0224e200;

// USA: func_ov031_02205030
extern "C" ARM int func_ov031_02205030(int arg0) {
    unsigned int var0 = (unsigned int)(arg0 * 44 + 3) & ~3u;
    unsigned int var1 = (unsigned int)(arg0 * 4 + 3) & ~3u;
    void* var2 = data_ov031_022496a4->unknown_18_(var0 + var1);
    if (var2 == 0) return -1;
    func_020c7de4(&data_ov031_0224e204, (int)var2, arg0);
    char* var3 = (char*)var2 + var1;
    if (arg0 > 0) {
        int var4 = arg0;
        do {
            func_ov031_02205174((int)var3);
            var4--;
            var3 += 0x2c;
        } while (var4 > 0);
    }
    data_ov031_0224e200 = var2;
    return 0;
}
