#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b900(void* arg0, void* arg1);
struct Struct_0202bad4_2;
struct Struct_0202bad4;
extern "C" int func_0202bae4(void* arg0);
extern "C" struct Struct_0202bad4* func_0202bad4(struct Struct_0202bad4_2* arg0, int arg1);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void* func_020d6c00(void);
extern "C" int* func_020936f8(void);
extern "C" void func_020939dc(void* arg0);
extern "C" void func_02094030(int*, short, short, signed char);
extern "C" void func_020daf9c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);

// USA: func_ov017_021aef80
extern "C" ARM unsigned char func_ov017_021aef80(void* arg0) {
    GameResources* var0 = GetGameResources();
    void* var1 = func_0202ae18();
    int var2 = func_0202b900(var1, (char*)arg0 + 9);
    int var3;
    for (var3 = 0; var3 < 6; var3++);

    if (var2 >= 0) {
        int var4 = func_0202bae4(var1);
        int var5;
        for (var5 = 0; var5 < var4; var5++) {
            struct Struct_0202bad4* var6 = func_0202bad4((struct Struct_0202bad4_2*)var1, var5);
            if (var6 != NULL) {
                int var7;
                for (var7 = 0; var7 < 6; var7++);
                func_02001aec((char*)var6 + 4, (char*)arg0 + 9, 6);
            }
        }
    }

    if (var2 < 0) {
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x8020);
        int* var8 = func_020936f8();
        func_020939dc(var8);
        func_02094030(var8, 4, -1, 0);
        return 3;
    }

    SetFlags00(var0, 0x40);
    *(short*)((char*)arg0 + 0x12) = 0;
    func_020daf9c(1, 1, 0, 1);
    func_020466e4((unsigned int*)func_020d6c00(), 0x800000);
    return 1;
}
