#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cd20 data_ov005_0215e100
#define data_ov014_021894b8 data_ov014_0218a2f8
#define data_ov015_02193cfc data_ov015_0219482c
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_02194129 data_ov015_02194c69
#define func_ov008_02188730 func_ov008_02189444
#define func_ov014_02185c90 func_ov014_02186d00
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0*);
struct Struct_0205d228;
extern "C" void func_0205d228(struct Struct_0205d228*);
struct Struct_0205d274;
extern "C" void func_0205d274(struct Struct_0205d274*);
extern "C" void func_ov008_02188730(void* arg0);
extern "C" void func_ov008_02188934(void* arg0);
struct Struct_ov008_02184878;
extern "C" void func_ov008_021889f8(struct Struct_ov008_02184878* arg0);
extern "C" void func_ov008_02188870(void* arg0);
extern "C" void func_ov023_021eb4b8(void* arg0);

// USA: func_ov008_02184878
extern "C" ARM void func_ov008_02184878(char* arg0) {
    signed char var0 = *(signed char*)(arg0 + 0xb10);
    if (var0 == 0 || var0 == 1 || var0 == 0xe) return;
    if (*(void**)(arg0 + 0xb08) == 0) {
        func_0205d1e0((Struct_0205d1e0*)(arg0 + 0x130));
        func_0205d228((Struct_0205d228*)(arg0 + 0x130));
        func_0205d274((Struct_0205d274*)(arg0 + 0x130));
    }
    if (*(int*)(arg0 + 0xb24) == 1) return;
    if (*(signed char*)(arg0 + 0xb10) == 3 && *(unsigned char*)(arg0 + 0xb11) < 1) return;
    func_ov008_02188730(arg0);
    func_ov008_02188934(arg0);
    func_ov008_021889f8((struct Struct_ov008_02184878*)arg0);
    func_ov008_02188870(arg0);
    if (*(void**)(arg0 + 0xb08) != 0) {
        func_ov023_021eb4b8(*(void**)(arg0 + 0xb08));
    }
}
