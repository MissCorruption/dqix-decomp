#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02161438_1024 = 0x200 };
enum { Enum_ov003_02161438_140 = 0xb4 };
enum { Enum_ov003_02161438_159 = 0xc7 };
enum { Enum_ov003_02161438_792 = 0x200 };
#else
enum { Enum_ov003_02161438_1024 = 0x400 };
enum { Enum_ov003_02161438_140 = 0x8c };
enum { Enum_ov003_02161438_159 = 0x9f };
enum { Enum_ov003_02161438_792 = 0x318 };
#endif

extern "C" void* func_ov003_02160bd0(void* arg0, int arg1);
extern "C" void func_ov003_02167a5c(void* arg0, int arg1, int arg2);

// USA: func_ov003_02161438
extern "C" ARM void func_ov003_02161438(void* arg0) {
    char* var0 = (char*)arg0 + Enum_ov003_02161438_1024;
    short var1 = *(short*)(var0 + Enum_ov003_02161438_140);
    signed char var2 = *(signed char*)(var0 + Enum_ov003_02161438_159);
    int var3 = (var1 - 0x15) + (var2 << 2);
    int var4 = -1;
    void* var5 = func_ov003_02160bd0(arg0, var3);
    if (var5 != NULL) {
        signed char var6 = *(signed char*)var5;
        var4 = (var6 << 26) >> 26;
    }
    func_ov003_02167a5c(*(void**)((char*)arg0 + Enum_ov003_02161438_792), 6, var4);
}
