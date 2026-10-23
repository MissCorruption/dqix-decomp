#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov014_021845ec;
extern "C" void func_ov014_02188d10(Struct_ov014_021845ec* arg0);

// USA: func_ov014_02184d08
extern "C" ARM void func_ov014_02184d08(char* arg0) {
    void* var0 = BackgroundLoader::GetInstance();
    unsigned char var1 = *(unsigned char*)(arg0 + 0x81);
    if (var1 & 1) {
        *(unsigned char*)(arg0 + 0x81) = var1 & ~1;
        int var2 = *(int*)(arg0 + 0x6c);
        if (var2 >= 0) {
            ((BackgroundLoader*)var0)->RemoveTask(var2);
            *(int*)(arg0 + 0x6c) = -1;
        }
        for (int var3 = 0; var3 < 5; var3++) {
            short var4 = *(short*)(arg0 + var3 * 2 + 0x86);
            if (var4 >= 0) {
                ((BackgroundLoader*)BackgroundLoader::GetInstance())->RemoveTask(var4);
                ((short*)(arg0 + 0x86))[var3] = -1;
            }
        }
        func_ov014_02188d10((Struct_ov014_021845ec*)(arg0 + 0x1c));
        *(unsigned char*)(arg0 + 0x7f) = 0;
    }
    unsigned char var5 = *(unsigned char*)(arg0 + 0x81);
    if (var5 & 0x10) return;
    *(unsigned char*)(arg0 + 0x81) = var5 | 0x10;
    int var6 = *(int*)(arg0 + 0x70);
    if (var6 >= 0) {
        ((BackgroundLoader*)var0)->RemoveTask(var6);
        *(int*)(arg0 + 0x70) = -1;
    }
    *(unsigned char*)(arg0 + 0x7e) = 0;
}
