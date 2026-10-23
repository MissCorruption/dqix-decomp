#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern char data_021015a0;
extern char data_02101640;
extern char data_02101b80;
extern char data_021016e0;
extern char data_02101614;
extern char data_02103400;

extern "C" void func_0202dae0(unsigned short* arg0);
extern "C" void func_0202db08(unsigned short* arg0);
extern "C" int func_020d4f7c(int arg0, int arg1, int arg2);
extern "C" void func_0202c848(int arg0);

// USA: func_0202d9e0
extern "C" ARM int func_0202d9e0(void) {
    int var0;
    int var1;

    if (*(unsigned short*)(&data_021015a0 + 0xe) != 0) {
        return 0;
    }

    if (*(int*)(&data_021015a0 + 0x40) == 0) {
        *(int*)(&data_021015a0 + 0x40) = (int)&func_0202dae0;
    }

    *(int*)(&data_021015a0 + 0x2c) = 0;
    *(int*)(&data_021015a0 + 0x38) = 0;
    *(int*)(&data_021015a0 + 0x28) = 0;
    *(unsigned short*)(&data_021015a0 + 0x0) = 0;
    *(unsigned short*)(&data_021015a0 + 0xa) = 1;
    *(int*)(&data_021015a0 + 0x48) = 0;
    *(int*)(&data_02101640 + 0x0) = 0;
    *(unsigned short*)(&data_02101640 + 0x4) = 0;

    VectorizedMemset(&data_02101b80, 0, 0x400);
    VectorizedMemset(&data_021016e0, 0, 0xc0);
    VectorizedMemset(&data_02101614, 0, 0x18);

    *(int*)(&data_021015a0 + 0x24) = 0;
    *(int*)(&data_021015a0 + 0x10) = 3;

    var0 = func_020d4f7c((int)&data_02103400, (int)&func_0202db08, 2);
    if (var0 == 2) {
        var1 = 1;
    } else {
        func_0202c848(var0);
        *(int*)(&data_021015a0 + 0x10) = 0xa;
        var1 = 0;
    }

    if (var1 == 0) {
        var1 = 0;
    } else {
        var1 = 1;
        *(unsigned short*)(&data_021015a0 + 0xe) = var1;
    }

    return var1;
}
