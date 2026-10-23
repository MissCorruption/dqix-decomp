#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_020d8654(void);
extern "C" int func_0202d6a8(void);
extern "C" int func_0202dcd4(int arg0);
extern "C" int func_0202dcb4(int arg0);
extern "C" void func_020d8694(void);

// USA: func_0202bf40
extern "C" ARM void func_0202bf40(void* arg0) {
    func_020d8654();
    if (func_0202d6a8() == 5) {
        if (func_0202dcd4((int)((char*)arg0 + 0x7c0))) {
            char* var0 = (char*)arg0 + 0xbc0;
            for (unsigned short var1 = 0; var1 < 4; var1++) {
                int var2 = func_0202dcb4(var1);
                int var3 = var1 * 0x74;
                if (var2 != 0) {
                    VectorizedInvertedMemcpy((void*)var2, var0 + var3, 0x74);
                    *(int*)((char*)arg0 + var1 * 4 + 0xfc4) = 1;
                } else {
                    *(unsigned short*)(var0 + var3) &= ~0x18;
                    *(int*)((char*)arg0 + var1 * 4 + 0xfc4) = 0;
                }
            }
            *(int*)((char*)arg0 + 0xfc0) = 0;
        } else {
            for (unsigned short var4 = 0; var4 < 4; var4++) *(int*)((char*)arg0 + var4 * 4 + 0xfc4) = 0;
            *(int*)((char*)arg0 + 0xfc0) = 1;
        }
    } else {
        for (unsigned short var5 = 0; var5 < 4; var5++) *(int*)((char*)arg0 + var5 * 4 + 0xfc4) = 0;
        *(int*)((char*)arg0 + 0xfc0) = 0;
    }
    func_020d8694();
}
