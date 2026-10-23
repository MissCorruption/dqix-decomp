#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

struct Struct_0207fdcc_2;
extern "C" int func_02081da8(Struct_0207fdcc_2*, int);
struct Struct_0207f0ac;
extern "C" int func_0207f0ac(Struct_0207f0ac*, int);
struct Struct_020813ec;
extern "C" unsigned int func_02081e18(Struct_020813ec*, int);
struct Struct_020813ec_2;
extern "C" int func_02081de0(Struct_020813ec_2*);
extern "C" int func_020804fc(void *arg0, int arg1);
extern "C" int func_0204f160(unsigned char*, int, int);
struct Struct_020813ec_3;
extern "C" int func_02081498(void*, void*, Struct_020813ec_3*);
extern "C" int func_02081574(void *arg0, void *arg1, void *arg2);
struct Struct_0204fbf8_2;
extern "C" int func_0204fbf8(Struct_0204fbf8_2*);

// USA: func_020813ec
extern "C" ARM int func_020813ec(void *arg0, int arg1) {
    if (arg1 < 0) {
        return 1;
    }

    int var0 = func_02081da8((Struct_0207fdcc_2*)arg0, arg1);
    int var1 = func_0207f0ac((Struct_0207f0ac*)((char *)arg0 + 0xc), arg1);
    if (var1 == 0) {
        return 1;
    }

    unsigned char var2 = *((unsigned char *)arg0 + (IS_JPN ? 0x2e : 0x3a));
    unsigned int var3 = func_02081e18((Struct_020813ec*)arg0, var2);

    if (var0 == 0) {
        var0 = func_02081de0((Struct_020813ec_2*)arg0);
        func_020804fc(arg0, arg1);
    }

    if (var0 != 0) {
        func_0204f160((unsigned char*)var0, var3, arg1);
        func_02081498(arg0, (void *)var0, (Struct_020813ec_3*)var1);
        func_02081574(arg0, (void *)var0, (void *)var1);
        func_0204fbf8((Struct_0204fbf8_2*)var0);
    }

    return 0;
}
