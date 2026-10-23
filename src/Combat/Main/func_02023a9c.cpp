#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

#if defined(jpn)
enum { Enum_02023a9c_1792 = 0x600, Enum_02023a9c_140 = 0xe0, Enum_02023a9c_138 = 0xde, Enum_02023a9c_132 = 0xd8, Enum_02023a9c_142 = 0xe2 };
#else
enum { Enum_02023a9c_1792 = 0x700, Enum_02023a9c_140 = 0x8c, Enum_02023a9c_138 = 0x8a, Enum_02023a9c_132 = 0x84, Enum_02023a9c_142 = 0x8e };
#endif

// USA: func_02023a9c
extern "C" ARM int func_02023a9c(char* arg0, int arg1) {
    void* var0 = func_0205ec34();
    int var1 = arg1 * 0x1c;
    char* var2 = arg0;
    var2 += var1;
    var2 += Enum_02023a9c_1792;

    unsigned short var3 = *(unsigned short*)(var2 + Enum_02023a9c_140);
    if (var3 == 0) return 0;

    unsigned short var4 = *(unsigned short*)(var2 + Enum_02023a9c_138);
    if (var4 == 0) {
        unsigned short var5 = *(unsigned short*)(var2 + Enum_02023a9c_132);
        if (func_0206dfb0((int)var0, (unsigned char*)var0 + 0x8c, var5 + 0x12 + 0x200)) {
            char* var6 = arg0;
            var6 += var1;
            var6 += Enum_02023a9c_1792;
            *(unsigned short*)(var6 + Enum_02023a9c_142) = 0;
            return 0;
        }
    }
    return 1;
}
