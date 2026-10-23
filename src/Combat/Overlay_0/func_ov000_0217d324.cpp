#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_0217d324_7538 = 0x1faa, Enum_ov000_0217d324_7531 = 0x1fa3, Enum_ov000_0217d324_7528 = 0x1fa0, Enum_ov000_0217d324_7520 = 0x1f98 };
#else
enum { Enum_ov000_0217d324_7538 = 0x1d72, Enum_ov000_0217d324_7531 = 0x1d6b, Enum_ov000_0217d324_7528 = 0x1d68, Enum_ov000_0217d324_7520 = 0x1d60 };
#endif

struct Struct_0205c570;
struct Struct_02108760;
struct Struct_0205d6a0;
struct Struct_ov000_021735d0_3;
struct Struct_ov000_021735d0_2;

extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" struct Struct_ov000_021735d0_2* func_ov000_0217f8c0(struct Struct_ov000_021735d0_3* arg0);
extern "C" int func_ov000_0217c5f4(void* arg0);
extern "C" int func_ov000_0217c594(void* arg0, int arg1);
extern "C" void func_ov000_02176634(void* arg0, struct Struct_ov000_021735d0_2* arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov000_0217c638(void* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;

// USA: func_ov000_0217d324
extern "C" ARM void func_ov000_0217d324(char* arg0, int arg1, int arg2) {
    *(unsigned short*)(arg0 + Enum_ov000_0217d324_7538) |= 0x100;
    int var0 = func_0205d794((struct Struct_0205c570*)(arg0 + 0x188));
    if (var0 < 0) {
        var0 = 0;
    }
    *(signed char*)(arg0 + Enum_ov000_0217d324_7531) = var0;
    if (func_ov000_0217c594(arg0, 0) != 0) {
        func_0205eaa0(&data_02108760, 1, 0);
        *(signed char*)(arg0 + Enum_ov000_0217d324_7528) = *(signed char*)(arg0 + Enum_ov000_0217d324_7528) + 1;
        *(unsigned char*)(arg0 + *(signed char*)(arg0 + Enum_ov000_0217d324_7528) + Enum_ov000_0217d324_7520) = 4;
        struct Struct_ov000_021735d0_2* var1 = func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0);
        func_ov000_02176634(arg0, var1, 4, arg1, arg2);
    } else if (func_ov000_0217c5f4(arg0) != 0) {
        func_0205d6a0((struct Struct_0205d6a0*)(arg0 + 0x188), 0);
        *(unsigned char*)(arg0 + *(signed char*)(arg0 + Enum_ov000_0217d324_7528) + Enum_ov000_0217d324_7520) = 0;
        *(signed char*)(arg0 + Enum_ov000_0217d324_7528) = *(signed char*)(arg0 + Enum_ov000_0217d324_7528) - 1;
        *(signed char*)(arg0 + Enum_ov000_0217d324_7531) = -1;
        func_ov000_0217c638(arg0, arg1, arg2);
    }
}
