#include <globaldefs.h>

extern "C" int _ZN7Model3D7GetTEX0Ev(void* arg0);
struct Struct_ov000_02161c0c_3;
extern "C" int func_ov000_021673e0(struct Struct_ov000_02161c0c_3* arg0);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" void NSBXX_Tex_WritePaletteVRAMOffset(void* obj, int value);
extern "C" void _ZN8Object3D23SetTexturePaletteOffsetEj(unsigned char* arg0, int arg1);
struct NSBXXTex;
int StageTexFilePaletteData(NSBXXTex volatile*, bool);

// USA: func_ov000_02166784
extern "C" ARM void func_ov000_02166784(struct Struct_ov000_02161c0c_3* arg0, unsigned char* arg1, unsigned char* arg2) {
    int var0 = *(short*)(arg2 + 0x4);
    int var1 = var0 - 0xc0;
    void* var2;
    int var3;
    if (var1 < 0) return;
    if (var1 > 0xc7) return;
    var2 = *(void**)(arg1 + 0x8);
    if (!var2) return;
    var2 = (void*)_ZN7Model3D7GetTEX0Ev(var2);
    if (!var2) return;
    var3 = func_ov000_021673e0(arg0);
    {
        unsigned short var4 = *(unsigned short*)((char*)var2 + 0x30);
        int var5 = *(int*)((char*)var2 + 0x38);
        CleanInvalidateCacheRange((char*)var2 + var5, var4 << 3);
        NSBXX_Tex_WritePaletteVRAMOffset(var2, var3);
        StageTexFilePaletteData((NSBXXTex volatile*)var2, 1);
        _ZN8Object3D23SetTexturePaletteOffsetEj(arg2, var3);
    }
}
