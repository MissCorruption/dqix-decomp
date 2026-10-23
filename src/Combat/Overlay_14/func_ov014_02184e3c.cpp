#include <globaldefs.h>
#include "std_library_functions.h"
#include "World/Object3D.h"

struct Struct_02097054_6;
struct Struct_02097054_5;
extern "C" struct Struct_02097054_6* func_02097224(struct Struct_02097054_5* arg0, int arg1);

extern const char data_ov014_021895c8[];
extern const char data_ov014_021895ce[];

// USA: func_ov014_02184e3c
extern "C" ARM void func_ov014_02184e3c(unsigned char* arg0) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x40);
    if (var0 == NULL || *(int*)(var0 + 0xc) == 0 || *(unsigned char**)(arg0 + 0x48) == NULL) {
        return;
    }
    unsigned char* var1 = *(unsigned char**)(arg0 + 0x48);
    unsigned char* var2 = (unsigned char*)func_02097224((Struct_02097054_5*)(arg0 + 0xc), *(short*)(var1 + 0xc));
    if (var2 == NULL) return;

    var0 = *(unsigned char**)(arg0 + 0x40);
    char* var3 = *(char**)(var0 + 0x14);
    if (var3 != NULL && strcmp(data_ov014_021895c8, var3) != 0 && strcmp(data_ov014_021895ce, var3) != 0) {
        return;
    }

    int var4 = *(int*)(arg0 + 0x74) + 1;
    *(int*)(arg0 + 0x74) = var4;
    if ((int)*(unsigned char*)(var2 + 0xc) <= var4) {
        *(int*)(arg0 + 0x74) = 0;
        if (*(unsigned char*)(var2 + 0xc) > 1) {
            *(int*)(arg0 + 0x74) = 1;
        }
    }

    unsigned char** var5 = *(unsigned char***)(var2 + 0x2c);
    unsigned char* var6 = var5[*(int*)(arg0 + 0x74)];
    if (var6 == NULL || *(signed char*)var6 == 0) return;

    var0 = *(unsigned char**)(arg0 + 0x40);
    ((Object3D*)var0)->MaybeSetRegularAnimation((char const*)var6, 0);
}
