#include <globaldefs.h>

struct Struct_0208df10;
extern "C" void func_0208df10(struct Struct_0208df10* arg0);
struct Struct_020727d8;
extern "C" void func_020727d8(struct Struct_020727d8* arg0);
struct Struct_02020cb8;
extern "C" void func_0204af64(struct Struct_02020cb8* arg0);
struct Struct_02074af4;
extern "C" void func_02074af4(struct Struct_02074af4* arg0);
struct Struct_02074b64;
extern "C" void func_02074b64(struct Struct_02074b64* arg0);

// USA: func_ov013_02186eec
extern "C" ARM void func_ov013_02186eec(void* arg0, unsigned char arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned int var1;
#if defined(jpn)
    enum { Enum_ov013_02186eec_92 = 0x48, Enum_ov013_02186eec_96 = 0x4c, Enum_ov013_02186eec_100 = 0x50 };
#else
    enum { Enum_ov013_02186eec_92 = 0x5c, Enum_ov013_02186eec_96 = 0x60, Enum_ov013_02186eec_100 = 0x64 };
#endif

    *(int*)(var0 + 0x0) = 0;
    func_0208df10((struct Struct_0208df10*)(var0 + 0xc));
    func_020727d8((struct Struct_020727d8*)(var0 + 0x4));
    var0[0x24] = 0;
    var0[0x25] = 0;
    func_0204af64((struct Struct_02020cb8*)(var0 + 0x28));
    *(int*)(var0 + Enum_ov013_02186eec_92) = -1;
    var0[Enum_ov013_02186eec_100] = arg1;
    var0[Enum_ov013_02186eec_100 + 1] = 0;
    var0[Enum_ov013_02186eec_100 + 2] = 0;
    *(signed char*)(var0 + Enum_ov013_02186eec_100 + 3) = -1;
    var0[Enum_ov013_02186eec_100 + 4] = 0;
    var0[Enum_ov013_02186eec_100 + 5] = 0;
#if !defined(jpn)
    *(int*)(var0 + 0x48) = 0;
    *(int*)(var0 + 0x4c) = 0;
    *(int*)(var0 + 0x50) = 0;
    *(int*)(var0 + 0x54) = 0;
    *(int*)(var0 + 0x58) = 0;
    *(signed char*)(var0 + 0x6a) = -1;
#endif

    if (var0[Enum_ov013_02186eec_100] == 0) {
        func_02074af4((struct Struct_02074af4*)(var0 + 0x14));
        var1 = *(volatile unsigned int*)0x4000000;
    } else {
        func_02074b64((struct Struct_02074b64*)(var0 + 0x14));
        var1 = *(volatile unsigned int*)0x4001000;
    }
    *(int*)(var0 + Enum_ov013_02186eec_96) = (var1 & 0x1f00) >> 8;
}
