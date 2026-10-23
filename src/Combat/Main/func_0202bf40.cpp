#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_020d8654(void);
extern "C" int func_0202d6a8(void);
extern "C" int func_0202dcd4(int arg);
extern "C" int func_0202dcb4(int arg);
extern "C" void func_020d8694(void);

// USA: func_0202bf40
extern "C" ARM void func_0202bf40(void* obj) {
    func_020d8654();
    if (func_0202d6a8() == 5) {
        if (func_0202dcd4((int)((char*)obj + 0x7c0))) {
            char* recs = (char*)obj + 0xbc0;
            for (unsigned short i = 0; i < 4; i++) {
                int r = func_0202dcb4(i);
                int off = i * 0x74;
                if (r != 0) {
                    VectorizedInvertedMemcpy((void*)r, recs + off, 0x74);
                    *(int*)((char*)obj + i * 4 + 0xfc4) = 1;
                } else {
                    *(unsigned short*)(recs + off) &= ~0x18;
                    *(int*)((char*)obj + i * 4 + 0xfc4) = 0;
                }
            }
            *(int*)((char*)obj + 0xfc0) = 0;
        } else {
            for (unsigned short i = 0; i < 4; i++) *(int*)((char*)obj + i * 4 + 0xfc4) = 0;
            *(int*)((char*)obj + 0xfc0) = 1;
        }
    } else {
        for (unsigned short i = 0; i < 4; i++) *(int*)((char*)obj + i * 4 + 0xfc4) = 0;
        *(int*)((char*)obj + 0xfc0) = 0;
    }
    func_020d8694();
}
