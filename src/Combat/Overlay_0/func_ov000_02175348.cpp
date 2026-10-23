#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xf54
#else
#define REGION_OFFSET_0 0xd1c
#endif


struct Struct_ov000_02184288_5 { int unknown_0_; int unknown_4_; };
extern struct Struct_ov000_02184288_5 data_ov000_02184288;

// USA: func_ov000_02175348
extern "C" ARM int func_ov000_02175348(void* arg0, int arg1) {
    char* var0 = (char*)arg0;
    int var1 = data_ov000_02184288.unknown_4_;
    int var2 = 0;
    for (int var3 = 0; var3 < var1; var3++) {
        int var4 = *(int*)(var0 + var3 * 4 + 0x1000 + REGION_OFFSET_0);
        if (arg1 == var4) {
            var2++;
        }
    }
    return var2;
}
