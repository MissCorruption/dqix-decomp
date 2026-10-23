#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02097054_6;
struct Struct_02097054_5;
extern "C" struct Struct_02097054_6* func_02097224(struct Struct_02097054_5* arg0, int arg1);

struct Vector3i;

// USA: func_ov014_02184c08
extern "C" ARM void func_ov014_02184c08(unsigned char* arg0) {
    void* var0 = *(void**)(arg0 + 0x48);
    if (var0 == NULL) return;
    struct Struct_02097054_6* var1 = func_02097224((struct Struct_02097054_5*)(arg0 + 0xc), *(short*)((char*)var0 + 0xc));
    if (var1 == NULL) return;

    int var2[3];
    int var3[3];
    int var4[3];

    var2[0] = (int)(4096.0f * *(float*)((char*)var1 + 0x10));
    var2[1] = (int)(4096.0f * *(float*)((char*)var1 + 0x14));
    var2[2] = (int)(4096.0f * *(float*)((char*)var1 + 0x18));
    var3[0] = 0;
    var3[1] = (int)(4096.0f * *(float*)((char*)var1 + 0x1c));
    var3[2] = 0;
    var4[0] = (int)(4096.0f * *(float*)((char*)var1 + 0x20));
    var4[1] = (int)(4096.0f * *(float*)((char*)var1 + 0x24));
    var4[2] = (int)(4096.0f * *(float*)((char*)var1 + 0x28));

    *(Vector3i*)((int*)(*(char**)(arg0 + 0x40) + 0x44)) = *(Vector3i const*)var2;
    *(Vector3i*)((int*)(*(char**)(arg0 + 0x40) + 0x50)) = *(Vector3i const*)var3;
    ((Object3D*)(*(unsigned char**)(arg0 + 0x40)))->SetScale((Vector3i const*)var4);
}
