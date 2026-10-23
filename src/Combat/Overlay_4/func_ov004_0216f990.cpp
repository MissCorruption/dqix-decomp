#if defined(jpn)
#define R(j,u) (j)
#define data_ov004_021702bc data_ov004_021709f0
#define data_ov004_021702c0 data_ov004_021709f4
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern int data_ov004_021702bc;
extern int data_ov004_021702c0;

// USA: func_ov004_0216f990
extern "C" ARM int func_ov004_0216f990(int arg0, int arg1, int arg2) {
    if (arg0 == 1) {
        for (int var0 = 0; var0 < 0xc; var0++) {
            int var1 = *(int*)((char*)&data_ov004_021702bc + (var0 << 3));
            if (arg1 == var1) {
                return *(int*)((char*)&data_ov004_021702c0 + (var0 << 3));
            }
        }
    } else if (arg0 == 2) {
        if ((unsigned int)arg1 < 1) {
            goto fail;
        }
        if ((unsigned int)arg1 > 0xd) {
            goto fail;
        }
        if (arg2 != 0) {
            return (arg2 - 1) * 0xd + (arg1 + 0x2d);
        }
    }
fail:
    return 0;
}
