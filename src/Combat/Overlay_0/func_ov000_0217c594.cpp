#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern int data_ov000_02184294;

#if defined(jpn)
enum { Enum_ov000_0217c594_8 = 0 };
#else
enum { Enum_ov000_0217c594_8 = 8 };
#endif

// USA: func_ov000_0217c594
extern "C" ARM int func_ov000_0217c594(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char var1 = var0[0x956];
    if ((int)var1 < arg1) {
        var1 = var1 + 1;
        var0[0x956] = var1;
        return 0;
    }
    *(void**)((char*)&data_ov000_02184294 + Enum_ov000_0217c594_8) = arg0;
    int var2 = g_keyManager.TestKeysPressed(0x601);
    int var3 = func_0205da38((struct Struct_0205da38*)(var0 + 0x188), 0x14);
    return (var2 | var3) != 0;
}
