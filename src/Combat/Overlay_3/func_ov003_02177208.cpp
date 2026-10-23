#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02177208_2204 = 0x818 };
enum { Enum_ov003_02177208_4156 = 0xfb8 };
#else
enum { Enum_ov003_02177208_2204 = 0x89c };
enum { Enum_ov003_02177208_4156 = 0x103c };
#endif

struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);
extern "C" int func_02080b2c(void* arg0, int arg1);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov003_02177208
extern "C" ARM void func_ov003_02177208(char* arg0) {
    struct Struct_0207fdcc_2* var0 = *(struct Struct_0207fdcc_2**)(arg0 + Enum_ov003_02177208_2204);
    func_02080c20(var0, 9);
    func_02080c68(var0, 9, 0);
    func_02080fa8((struct Struct_02080fa8*)var0, 0x57, *(unsigned char*)(arg0 + Enum_ov003_02177208_4156));
    func_02080b2c(var0, 0x58);
    func_02080b2c(var0, 0x59);
    func_020813ec(var0, 9);
}
