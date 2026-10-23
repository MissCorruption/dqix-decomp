#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov023_021f6ed8(void* arg0);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" int func_ov023_021f6c90(void* arg0, int arg1, int arg2);
extern "C" ARM void func_ov023_021f6bec(void* arg0, int arg1, unsigned int arg2, unsigned int arg3);
struct Struct_02075cdc;
extern "C" void func_02075cdc(struct Struct_02075cdc* arg0);
extern "C" void* func_0203bd08(void);
extern "C" void* func_0203be40(void);
extern "C" void* func_0203be4c(void);
extern "C" int func_ov023_021f6e5c(void* arg0, int arg1);
extern "C" void func_ov023_021f6e10(void* arg0, int arg1, unsigned int arg2);
struct Struct_ov023_021fb534;
extern "C" void func_ov023_021fb8dc(struct Struct_ov023_021fb534* arg0, void* arg1);

// USA: func_ov023_021fb534
extern "C" ARM int func_ov023_021fb534(void* arg0, void* arg1, unsigned short arg2, unsigned short arg3, unsigned int arg4, int arg5) {
    func_ov023_021f6ed8(arg0);
    *(unsigned short*)((char*)arg0 + 0x4) = 0xc;
    *(unsigned short*)((char*)arg0 + 0x6) = arg2;
    *(unsigned short*)((char*)arg0 + 0x8) = arg3;
    *(unsigned short*)((char*)arg0 + 0xa) = 0;
    *(unsigned int*)((char*)arg0 + 0x10) = arg4;
    void* var0 = func_ov011_021849c8(arg1);
    int var1 = func_ov023_021f6c90(var0, arg5, 1);
    func_ov023_021f6bec(var0, arg5, var1, 1);
    func_02075cdc((struct Struct_02075cdc*)((char*)arg0 + 0x20));
    void* var2;
    if (arg5 == 0) {
        func_0203bd08();
        var2 = func_0203be40();
    } else {
        func_0203bd08();
        var2 = func_0203be4c();
    }
    *(void**)((char*)arg0 + 0x34) = (char*)var2 + var1 * 8;
    *(unsigned int*)((char*)arg0 + 0x58) = 0;
    int var3 = func_ov023_021f6e5c(var0, arg5);
    func_ov023_021f6e10(var0, arg5, var3);
    *(unsigned int*)((char*)arg0 + 0x5c) = var3 & 0xf;
    *(unsigned int*)((char*)arg0 + 0x60) = 0;
    *(unsigned char*)((char*)arg0 + 0x7e) = (unsigned char)arg5;
    *(unsigned short*)((char*)arg0 + 0xa4) = 0;
    memset((char*)arg0 + 0x94, 0, 0x10);
    *(unsigned int*)((char*)arg0 + 0xa8) = 0;
    *(unsigned int*)((char*)arg0 + 0xac) = 0;
#if defined(jpn)
    *(unsigned char*)((char*)arg0 + 0xb0) = 0;
#else
    *(unsigned char*)((char*)arg0 + 0xb0) = 0;
    *(unsigned char*)((char*)arg0 + 0xb1) = 0;
#endif
    func_ov023_021fb8dc((struct Struct_ov023_021fb534*)arg0, arg1);
    return 1;
}
