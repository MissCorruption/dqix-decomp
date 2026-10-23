#if defined(jpn)
#define R(j,u) (j)
#define data_ov015_02193d14 data_ov015_02194844
#define data_ov015_02193d2c data_ov015_0219485c
#define data_ov015_02193d38 data_ov015_02194868
#define data_ov027_021dd8e0 data_ov027_021de1a0
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_0219050c func_ov015_021910b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov004_02153978;
extern "C" void* func_ov023_021f6590(void*);
extern "C" unsigned int func_ov023_021f6f08(Struct_ov004_02153978*);
typedef void* (*Type_ov004_02153978)(void*, int);

// USA: func_ov004_02153978
extern "C" ARM void func_ov004_02153978(void* arg0, short* arg1, short* arg2, short* arg3) {
    *arg3 = -1;
    short var0 = *arg3;
    *arg2 = var0;
    *arg1 = var0;
    void* var1 = ((Type_ov004_02153978)func_ov023_021f6590)(arg0, 5);
    if (!var1) return;
    switch (func_ov023_021f6f08((Struct_ov004_02153978*)var1)) {
        case 0x1a:
            *arg1 = 0;
            return;
        case 0x1b:
            *arg2 = 0;
            var1 = ((Type_ov004_02153978)func_ov023_021f6590)(arg0, 0x2a);
            if (!var1) return;
            switch (func_ov023_021f6f08((Struct_ov004_02153978*)var1)) {
                case 0x1a: *arg3 = 0; return;
                case 0x20: *arg3 = 1; return;
                case 0x1b: *arg3 = 2; return;
                case 0x21: *arg3 = 3; return;
                case 0x1c: *arg3 = 4; return;
                case 0x22: *arg3 = 5; return;
                case 0x1d: *arg3 = 6; return;
                case 0x23: *arg3 = 7; return;
                case 0x1e: *arg3 = 8; return;
                case 0x24: *arg3 = 9; return;
                case 0x1f: *arg3 = 10; return;
                case 0x25: *arg3 = 11; return;
            }
            break;
        case 0x1c:
            var1 = ((Type_ov004_02153978)func_ov023_021f6590)(arg0, 0x2b);
            if (!var1) return;
            switch (func_ov023_021f6f08((Struct_ov004_02153978*)var1)) {
                case 0x1a: *arg2 = 1; return;
                case 0x1b: *arg2 = 2; return;
                case 0x1c: *arg2 = 3; return;
                case 0x1d: *arg2 = 4; return;
                case 0x1e: *arg2 = 5; return;
                case 0x1f: *arg2 = 6; return;
            }
            break;
        case 0x1d:
            *arg1 = 3;
            *arg2 = 7;
            return;
    }
}
