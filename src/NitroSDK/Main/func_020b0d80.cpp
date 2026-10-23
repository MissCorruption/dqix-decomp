#include <globaldefs.h>

struct Struct_020b0d80 { unsigned short unknown_0_; unsigned short unknown_2_; };

// USA: func_020b0d80
extern "C" ARM unsigned short func_020b0d80(void* arg0, unsigned short arg1) {
    unsigned short var0 = 0xffff;
    unsigned short var1 = *(unsigned short*)((char*)arg0 + 4);
    switch (var1) {
    case 0: {
        unsigned short var2 = *(unsigned short*)arg0;
        unsigned short var3 = *(unsigned short*)((char*)arg0 + 0xc);
        var0 = (unsigned short)(var3 + (arg1 - var2));
        break;
    }
    case 1: {
        unsigned short var4 = *(unsigned short*)arg0;
        var0 = *(unsigned short*)((char*)arg0 + 0xc + (arg1 - var4) * 2);
        break;
    }
    case 2: {
        unsigned short var5 = *(unsigned short*)((char*)arg0 + 0xc);
        Struct_020b0d80* var6 = (Struct_020b0d80*)((char*)arg0 + 0xe);
        Struct_020b0d80* var7 = var6;
        Struct_020b0d80* var8 = var6 + (var5 - 1);
        if (var7 <= var8) {
            do {
                Struct_020b0d80* var9 = var7 + (var8 - var7) / 2;
                if (var9->unknown_0_ < arg1) var7 = var9 + 1;
                else if (arg1 < var9->unknown_0_) var8 = var9 - 1;
                else { var0 = var9->unknown_2_; break; }
            } while (var7 <= var8);
        }
        break;
    }
    }
    return var0;
}
