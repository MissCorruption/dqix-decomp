#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02155480 func_ov006_02156b68
#define data_ov011_021889a0 data_ov011_02189700
#define data_ov013_02187dd8 data_ov013_02188cf0
#define func_ov006_02154fe4 func_ov006_02156730
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" int func_02053c6c(unsigned char* arg0);

// USA: func_ov013_02184c8c
extern "C" ARM void func_ov013_02184c8c(unsigned char* arg0, unsigned char* arg1) {
    if (arg1 == 0 || *(unsigned char*)(arg0 + R(0x5ec,0x664)) == 0) return;

    unsigned char* var0 = (unsigned char*)func_02053c6c(arg1);
    *(unsigned short*)(var0 + 0x564) = *(int*)(arg0 + R(0x5f4,0x66c));

    for (int var1 = 0; var1 < 5; var1++) {
        unsigned char* var2 = arg0 + var1;
        unsigned char var3 = var2[R(0x631,0x6a9)];
        int var4 = *(int*)(arg0 + R(0x5fc,0x674) + var1 * 4) + *(int*)(arg0 + R(0x610,0x688) + var1 * 4);
        *(unsigned char*)(var0 + var3 + 0x464) = (unsigned char)var4;
    }
}
