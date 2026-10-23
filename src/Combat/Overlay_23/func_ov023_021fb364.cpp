#include <globaldefs.h>

extern "C" void* func_ov023_021f6880(void** arg0, int arg1);
extern "C" void* func_ov023_021fad18(void* arg0);
extern "C" void func_ov023_021f6c3c(void*, unsigned int, unsigned int, unsigned int);

struct Struct_0205a254_2;
struct Struct_0205a254;
extern "C" struct Struct_0205a254_2* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);

// USA: func_ov023_021fb364
extern "C" ARM void func_ov023_021fb364(void* arg0, void** arg1) {
    void* var0 = func_ov023_021f6880(arg1, *(unsigned short*)((char*)arg0 + 0x20));
    if (var0 == 0) return;
    void* var1 = func_ov023_021fad18(var0);
    func_ov023_021f6c3c((void*)arg1, *(unsigned char*)((char*)var1 + 0x50), *(unsigned short*)((char*)arg0 + 0x24), 1);
    struct Struct_0205a254* var2 = *(struct Struct_0205a254**)((char*)var1 + 0x3c);
    if (var2 == 0) return;
    struct Struct_0205a254_2* var3 = func_0205a3d0(var2, *(unsigned short*)((char*)arg0 + 0x22));
    if (var3 != 0) {
        *(unsigned char*)((char*)var3 + 0x15) &= ~8;
    }
}
