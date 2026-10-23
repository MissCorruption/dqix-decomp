#include <globaldefs.h>
#include "Graphics/OBJImage.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6dd8(void* arg0, int arg1);
extern "C" void func_ov023_021f6d14(void* arg0, void* arg1);

struct Struct_02076080;
extern "C" void func_02076928(struct Struct_02076080* arg0, int arg1);

extern "C" {
    void func_02076080(void* arg0, void* arg1, int arg2, int arg3);
}

// USA: func_ov023_021fb9c4
extern "C" ARM void func_ov023_021fb9c4(void* arg0, void* arg1, int arg2, int arg3) {
    if (arg2 == 0 || arg3 == 0) return;

    void* var0 = func_ov011_021845f8(arg1, *(unsigned short*)((char*)arg0 + 0x8));
    if (var0 == NULL) return;

    int var1 = func_02076738((Struct_02075cdc*)((char*)arg0 + 0x20), (const unsigned char*)arg2, arg3);

    void* var2 = func_ov011_021849c8(arg1);
    void* var3 = func_ov023_021f6dd8(var2, var1);
    *(int*)((char*)arg0 + 0x94) = (int)var3;
    *(int*)((char*)arg0 + 0x98) = (int)((char*)var3 + var1);
    func_ov023_021f6d14(var2, (char*)arg0 + 0x94);

    *(void**)((char*)arg0 + 0x58) = var3;

    SafeAllocator* var4 = (SafeAllocator*)((char*)var0 + 4);
    var4->GetSizeWithLargestBlockRemoved();
    func_02076080((char*)arg0 + 0x20, (char*)var0 + 4, arg2, arg3);
    func_02076928((struct Struct_02076080*)((char*)arg0 + 0x20), 1);
    var4->GetSizeWithLargestBlockRemoved();
}
