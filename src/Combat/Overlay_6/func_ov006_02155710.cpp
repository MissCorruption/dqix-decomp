#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void func_ov023_021dd4cc(void* arg0, int arg1);

// USA: func_ov006_02155710
extern "C" ARM void func_ov006_02155710(void* arg0, unsigned short arg1, unsigned char arg2) {
    void* var0 = BackgroundLoader::GetInstance();
    int var1 = *(int*)((char*)arg0 + R(0x954, 0xad4));
    if (var1 >= 0) {
        ((BackgroundLoader*)var0)->RemoveTask(var1);
        *(int*)((char*)arg0 + R(0x954, 0xad4)) = -1;
    }
    *(int*)((char*)arg0 + R(0x954, 0xad4)) = -1;
    *(unsigned char*)((char*)arg0 + R(0x95e, 0xade)) = 0;

    unsigned short var2 = *(unsigned short*)((char*)arg0 + R(0x962, 0xae2));
    *(unsigned short*)((char*)arg0 + R(0x962, 0xae2)) = var2 | 2;
    func_ov023_021dd4cc((char*)arg0 + R(0x964, 0xae4), 2);

    *(unsigned short*)((char*)arg0 + R(0x10b4, 0x12b8)) = arg1;
    *(unsigned char*)((char*)arg0 + R(0x10b6, 0x12ba)) = arg2;

    unsigned short var3 = *(unsigned short*)((char*)arg0 + R(0x962, 0xae2));
    *(unsigned short*)((char*)arg0 + R(0x962, 0xae2)) = var3 & ~1;

    int var4 = *(int*)((char*)arg0 + R(0x958, 0xad8));
    if (var4 >= 0) {
        ((BackgroundLoader*)var0)->RemoveTask(var4);
        *(int*)((char*)arg0 + R(0x958, 0xad8)) = -1;
    }
    *(int*)((char*)arg0 + R(0x958, 0xad8)) = -1;
    *(unsigned char*)((char*)arg0 + R(0x95f, 0xadf)) = 0;
}
