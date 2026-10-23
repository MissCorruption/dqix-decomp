#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021e6a14_881 = 0x341, Enum_ov023_021e6a14_172 = 0x90, Enum_ov023_021e6a14_868 = 0x33c, Enum_ov023_021e6a14_860 = 0x334 };
#else
enum { Enum_ov023_021e6a14_881 = 0x371, Enum_ov023_021e6a14_172 = 0xac, Enum_ov023_021e6a14_868 = 0x364, Enum_ov023_021e6a14_860 = 0x35c };
#endif

struct Struct_0205d81c;

extern "C" void* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_0205ac40(void* arg0, void* arg1);

// USA: func_ov023_021e6a14
extern "C" ARM void func_ov023_021e6a14(void* arg0) {
    unsigned char var0 = ((unsigned char*)arg0)[0x1000 + Enum_ov023_021e6a14_881];
    if (var0 != 7 && var0 != 8 && var0 != 9) return;
    void* var1 = func_0205d81c((struct Struct_0205d81c*)((char*)arg0 + Enum_ov023_021e6a14_172), 0x10);
    if (!var1) return;
    short var2 = *(short*)((char*)var1 + 0xac);
    short var3 = *(short*)((char*)var1 + 0xae);
    unsigned char* var4 = *(unsigned char**)((char*)arg0 + 0x1000 + Enum_ov023_021e6a14_868);
    *(int*)(var4 + 0x1cc) = ((short)(var2 << 3) + 5) << 0xc;
    *(int*)(var4 + 0x1d0) = ((short)(var3 << 3) + 3) << 0xc;
    void* var5 = *(void**)((char*)arg0 + 0x1000 + Enum_ov023_021e6a14_860);
    func_0205ac40(var5, var4 + 0x1b8);
}
