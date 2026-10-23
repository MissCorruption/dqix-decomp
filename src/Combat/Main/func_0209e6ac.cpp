#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0209e6ac {
    char unknown_0_[4];
    void* unknown_4_;
    char unknown_8_[0x98 - 8];
    int unknown_98_;
    char unknown_9c_[0x400];
    int unknown_49c_;
    char unknown_4a0_[0x400];
};

// USA: func_0209e6ac
extern "C" ARM void func_0209e6ac(struct Struct_0209e6ac* arg0, int arg1, int arg2) {
    int var0 = 0x40;
    if (arg1 == 0) {
        int var1;
        int var2;
        arg0->unknown_98_ = 0;
        var1 = *(unsigned char*)((char*)arg0->unknown_4_ + 0x8e07);
        for (var2 = 0; var2 < var1; var2++) {
            char* var3 = (char*)arg0->unknown_4_ + 0xc60 + 0x5000 + var2 * var0;
            if (var3 != 0 && (*(int*)(var3 + 4) & arg2)) {
                int var4 = arg0->unknown_98_++;
                memcpy(arg0->unknown_9c_ + var4 * var0, var3, var0);
            }
        }
        return;
    }
    arg0->unknown_49c_ = 0;
    memset(arg0->unknown_4a0_, 0, 0x400);
    {
    int var5;
    for (var5 = 0; var5 < arg0->unknown_98_; var5++) {
        char* var6 = arg0->unknown_9c_ + var5 * var0;
        if (*(int*)(var6 + 4) & arg2) {
            int var7 = arg0->unknown_49c_++;
            memcpy(arg0->unknown_4a0_ + var7 * var0, var6, var0);
        }
    }
    }
    arg0->unknown_98_ = arg0->unknown_49c_;
    memcpy(arg0->unknown_9c_, arg0->unknown_4a0_, 0x400);
}