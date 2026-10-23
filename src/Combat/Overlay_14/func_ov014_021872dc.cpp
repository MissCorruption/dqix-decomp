#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov014_02186bc8_3;
extern "C" short func_ov014_021874f8(struct Struct_ov014_02186bc8_3* arg0);
struct Struct_ov014_021872dc;
extern "C" short func_ov014_02187520(struct Struct_ov014_021872dc* arg0);
struct Struct_ov014_021872dc_2;
extern "C" struct Struct_ov014_021872dc_2* func_ov014_02187340(void* arg0, int arg1);

// USA: func_ov014_021872dc
extern "C" ARM struct Struct_ov014_021872dc_2* func_ov014_021872dc(unsigned char* arg0, int arg1) {
    short var0 = func_ov014_021874f8((struct Struct_ov014_02186bc8_3*)arg0);
    int var1 = var0 + 15;
    int var2 = var1 >> 3;
    int var3 = var1 + ((unsigned int)var2 >> 28);
    int var4 = (var3 << 12) >> 16;

    short var5 = func_ov014_02187520((struct Struct_ov014_021872dc*)arg0);
    short var6 = (short)(var5 + arg1);
    if (var6 < 0) {
        var6 = (short)(var4 + var6);
    }
    if (var4 <= var6) {
        var6 = (short)(var6 - var4);
    }

    struct Struct_ov014_021872dc_2* var7 = func_ov014_02187340(arg0, var6);
    *(struct Struct_ov014_021872dc_2**)(arg0 + 0xbc) = var7;
    return var7;
}
