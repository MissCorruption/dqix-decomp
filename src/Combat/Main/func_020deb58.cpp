#include <globaldefs.h>

extern "C" void func_020de3f4(int arg0, int arg1, int arg2, int arg3, char* arg4, char* arg5, char* arg6, void** arg7);

typedef int (*Type_020deb58)(void*, int, int, int);

struct Struct_020deb58 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    void* unknown_c_;
};

struct Struct_020deb58_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

// USA: func_020deb58
extern "C" ARM int func_020deb58(void* arg0, int arg1, int arg2, int arg3, signed char arg4) {
    char var0 = -1;
    char var1 = -1;
    char var2 = -1;
    void* var3 = 0;
    func_020de3f4(arg1, arg2, arg3, arg4, &var0, &var1, &var2, &var3);
    if (var3 == 0) {
        return 0;
    }
    Struct_020deb58* var4 = (Struct_020deb58*)arg0;
    int var5 = var4->unknown_0_;
    short var6 = 0;
    char* var7 = (char*)var4->unknown_c_;
    int var8 = var6;
    for (; var8 < var5; var8++, var7 += 0x20) {
        Struct_020deb58_2* var9 = (Struct_020deb58_2*)var7;
        int var10 = (int)((var9->unknown_c_ << 9) >> 21);
        var10 = (unsigned short)var10;
        if (var10 != 0) {
            if (((Type_020deb58)var3)(var7, var0, var1, var2) != 0) {
                var6 = var6 + 1;
            }
        }
    }
    return var6;
}
