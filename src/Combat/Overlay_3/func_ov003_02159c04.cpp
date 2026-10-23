#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02159c04_2464 = 0x870 };
enum { Enum_ov003_02159c04_2478 = 0x7de };
#else
enum { Enum_ov003_02159c04_2464 = 0x9a0 };
enum { Enum_ov003_02159c04_2478 = 0x9ae };
#endif

extern "C" void* func_020421a0(void);
struct Struct_0205d81c;
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);

struct Struct_0205dee8;
extern "C" void func_0205dee8(struct Struct_0205dee8* arg0, int arg1);

extern "C" int func_ov003_0215b7a4(void* arg0);

// USA: func_ov003_02159c04
extern "C" ARM void func_ov003_02159c04(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char* var1 = (unsigned char*)func_020421a0();

    if (*(int*)(var1 + Enum_ov003_02159c04_2464) == 3) {
        *(unsigned char*)(var1 + 0x1000 + Enum_ov003_02159c04_2478) = 0;
    }

    unsigned char var2 = *(unsigned char*)(var0 + 0x580);

    if (var2 == 0) {
        func_0205deb4((Struct_0205d81c*)(var0 + 0xf4), 0, 0);
        func_0205deb4((Struct_0205d81c*)(var0 + 0xf4), 1, 0);
        func_0205deb4((Struct_0205d81c*)(var0 + 0xf4), 2, 0);
        func_0205dee8((struct Struct_0205dee8*)(var0 + 0xf4), 1);
        *(unsigned char*)(var0 + 0x580) = *(unsigned char*)(var0 + 0x580) + 1;
    }

    if (var2 != 1) return;

    int var3 = func_ov003_0215b7a4(arg0);
    switch (var3) {
    case -1:
        return;
    case 0:
        *(unsigned char*)(var0 + 0x588) = 3;
        break;
    case 1:
        *(unsigned char*)(var0 + 0x588) = 4;
        break;
    case 2:
        *(unsigned char*)(var0 + 0x588) = 5;
        break;
    case 3:
        *(unsigned char*)(var0 + 0x588) = 6;
        break;
    case 4:
        *(unsigned char*)(var0 + 0x588) = 7;
        break;
    case -2:
    case 5:
        *(unsigned char*)(var0 + 0x588) = 8;
        break;
    default:
        break;
    }
    *(unsigned char*)(var0 + 0x580) = 0;
}
